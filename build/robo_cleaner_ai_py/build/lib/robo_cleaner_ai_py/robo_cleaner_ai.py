import random

import rclpy

import robo_cleaner_ai_py.communicator as communicator
import robo_cleaner_ai_py.map as maps
import robo_cleaner_ai_py.ant_algorithm as ant_algorithm

class RobotAi:
    def __init__(self, obstacles=None, dirtiness=None, charging_station=None):
        # The position is relative to the currently explored map data
        # [0] corresponds to map column, and [1] to map row
        self.cur_position = [1, 1]
        # Init robot talker
        self.robot_converse = communicator.RobotConverse(obstacles)
        # Obstacle markers
        self.obstacles = obstacles
        # Trash markers
        self.dirtiness = dirtiness
        # Charging station square
        self.charging_station = charging_station

    def authenticate(self):
        self.robot_converse.authenticate_user()
        rclpy.spin_once(self.robot_converse,
                        timeout_sec=0.5)

    # EXPLORATION
    def explore_map(self):
        self.ask_initial_state()

        # The initial map contains only the surroundings of the initial
        # position of the robot. The robot is in the center
        # For the current orientation 0 = up, 1 = right, 2 = down, 3 = left
        # For the tiles possible values are 120 = wall, 49 = clean once, 50 = clean twice,
        # 51 = clean thrice, 88 = wall, 64 = charging station

        # Map of the tile types
        self.map = maps.TilesMap(fog=None,
                                 initial_tile=self.starting_tile)
        # Map of the explored tiles = 1, and unexplored once = 0
        self.explored_tiles_map = maps.ExplorationMap(fog=0,
                                                      initial_tile=1)
        # Map of the pheromone levels
        self.pheromone_map = maps.PheromoneMap(fog=1.0,
                                               initial_tile=1.0/1.1)
        # Map of the current path to the charging station
        self.charge_map = maps.ChargeMap(fog=None,
                                         initial_tile=0)
        
        self.ant = ant_algorithm.AntAlgorithm()
        while not self.explored_tiles_map.exploration_check():
            print('Need more exploration')
            print('Using Ant algorithm')
            if not (0 in self.map.borders_found):
                target_tile = self.map.get_closest_unexplored_tile(self.cur_position)
                self.go_to_unexplored_tile(target_tile)
            else:                
                self.free_roam()

            if not self.check_charge():                
                self.return_to_charging_station()
                self.robot_converse.request_charge()
                self.moves_left = self.max_moves_on_full_energy
                self.charge_map.reset(self.cur_position)

        print('All explored!')
        
    def ask_initial_state(self):
        res_initial_state = self.robot_converse.request_initial_state()
        self.max_moves_on_full_energy = res_initial_state.initial_robot_state.battery_status.max_moves_on_full_energy
        self.moves_left = res_initial_state.initial_robot_state.battery_status.moves_left
        self.starting_tile = res_initial_state.initial_robot_state.robot_tile
        self.cur_orientation = res_initial_state.initial_robot_state.robot_dir

    def free_roam(self):
        while self.check_charge():
            possible_tiles_coords = self.check_possible_tiles_to_move()

            tile_probability = self.ant.calculate_probability_exploration(possible_tiles_coords,
                                                                          self.pheromone_map,
                                                                          self.explored_tiles_map)

            max_probability = self.get_max_probability_value(tile_probability)

            max_probability_tiles_coords = self.get_most_probable_tiles(tile_probability,
                                                                        max_probability,
                                                                        possible_tiles_coords)

            chosen_tile_index = self.choose_next_tile(max_probability_tiles_coords)

            self.go_to_tile(max_probability_tiles_coords[chosen_tile_index])
            
            self.map.add_borders()
            self.explored_tiles_map.copy_borders(self.map)
            self.pheromone_map.copy_borders(self.map)

            self.map.complement_borders()
            self.explored_tiles_map.complement_borders()
            self.pheromone_map.complement_borders()

            input()

    def check_possible_tiles_to_move(self):
        possible_tiles_coords = {'front':None,
                                 'right':None,
                                 'rear':None,
                                 'left':None}
        if self.check_front():
            possible_tiles_coords['front'] = self.pheromone_map.get_front_tile_pos(self.cur_position,
                                                                                   self.cur_orientation)
        if self.check_right():
            possible_tiles_coords['right'] = self.pheromone_map.get_right_tile_pos(self.cur_position,
                                                                                   self.cur_orientation)
        if self.check_rear():
            possible_tiles_coords['rear'] = self.pheromone_map.get_rear_tile_pos(self.cur_position,
                                                                                 self.cur_orientation)
        if self.check_left():
            possible_tiles_coords['left'] = self.pheromone_map.get_left_tile_pos(self.cur_position,
                                                                                 self.cur_orientation)
        print(possible_tiles_coords)

        return possible_tiles_coords

    def check_front(self):
        front_tile = self.map.get_front_tile_type(self.cur_position,
                                                  self.cur_orientation)

        no_obstacle = True
        if front_tile in self.obstacles:
            no_obstacle = False

        return no_obstacle

    def check_left(self):
        left_tile = self.map.get_left_tile_type(self.cur_position,
                                                self.cur_orientation)

        no_obstacle = True
        if left_tile in self.obstacles:
            no_obstacle = False

        return no_obstacle

    def check_right(self):
        right_tile = self.map.get_right_tile_type(self.cur_position,
                                                  self.cur_orientation)

        no_obstacle = True
        if right_tile in self.obstacles:
            no_obstacle = False

        return no_obstacle

    def check_rear(self):
        rear_tile = self.map.get_rear_tile_type(self.cur_position,
                                                self.cur_orientation)

        no_obstacle = True
        if rear_tile in self.obstacles:
            no_obstacle = False

        return no_obstacle

    def get_max_probability_value(self, tile_probability):
        probabilities = tile_probability.values()
        filtered_probabilities = []
        for p in probabilities:
            if p==None:
                filtered_probabilities.append(0.0)
            else:
                filtered_probabilities.append(p)

        return max(filtered_probabilities)

    def get_most_probable_tiles(self, tile_probability, max_probability, tiles):
        max_probability_tiles_coords = []
        for direction in tile_probability.keys():
            if tile_probability[direction]==max_probability:
                max_probability_tiles_coords.append(tiles[direction])

        print(max_probability_tiles_coords)

        return max_probability_tiles_coords

    def choose_next_tile(self, max_probability_tiles_coords):
        n_max_probability_tiles = len(max_probability_tiles_coords)
        if n_max_probability_tiles>1:
            front = self.map.get_front_tile_pos(self.cur_position,
                                                self.cur_orientation)
            right = self.map.get_right_tile_pos(self.cur_position,
                                                self.cur_orientation)
            left = self.map.get_left_tile_pos(self.cur_position,
                                              self.cur_orientation)
            rear = self.map.get_rear_tile_pos(self.cur_position,
                                              self.cur_orientation)
            if front in max_probability_tiles_coords:
                chosen_tile_index = max_probability_tiles_coords.index(front)
            elif (right in max_probability_tiles_coords) and (left in max_probability_tiles_coords):
                ri = max_probability_tiles_coords.index(right)
                li = max_probability_tiles_coords.index(left)
                i = [ri, li]
                chosen_tile_index = random.choice(i)
            elif right in max_probability_tiles_coords:
                chosen_tile_index = max_probability_tiles_coords.index(right)
            elif left in max_probability_tiles_coords:
                chosen_tile_index = max_probability_tiles_coords.index(left)
        else:
            chosen_tile_index = 0

        print(chosen_tile_index)

        return chosen_tile_index

    def go_to_tile(self, tile_coords):
        tile_rel_dir = self.pheromone_map.get_tile_relative_direction(tile_coords,
                                                                      self.cur_position,
                                                                      self.cur_orientation)
        
        if tile_rel_dir==1:
            self.turn_right()
        elif tile_rel_dir==2:
            self.turn_left()
            self.turn_left()
        elif tile_rel_dir==3:
            self.turn_left()

        self.advance()

    def advance(self, probe=False):
        tile_type_in_front = self.robot_converse.move_forward(probe)
        print('Tile type in front %d'%(tile_type_in_front))

        if (tile_type_in_front in self.obstacles) or probe:
            self.map.update_map(self.cur_orientation,
                                tile_type_in_front,
                                self.cur_position[0],
                                self.cur_position[1])
            self.explored_tiles_map.update_map(self.cur_orientation,
                                               self.cur_position[0],
                                               self.cur_position[1],
                                               tile_param=tile_type_in_front)
            self.pheromone_map.update_map(self.cur_orientation,
                                          tile_type_in_front,
                                          self.cur_position[0],
                                          self.cur_position[1])

            print('Did not move forward because of obstacle')
        else:
            if self.cur_orientation==0:
                self.cur_position[1] -= 1
            elif self.cur_orientation==1:
                self.cur_position[0] += 1
            elif self.cur_orientation==2:
                self.cur_position[1] += 1
            elif self.cur_orientation==3:
                self.cur_position[0] -= 1
            else:
                print('Unknown orientation')                                     

            old_position = self.cur_position[:]
            self.cur_position = self.map.grow(old_position)
            self.explored_tiles_map.grow(old_position,
                                         fog=0)
            self.pheromone_map.grow(old_position,
                                    fog=1.0)
            self.charge_map.grow(old_position)

            self.map.update_map(self.cur_orientation,
                                tile_type_in_front,
                                self.cur_position[0],
                                self.cur_position[1],
                                moved=True)
            self.explored_tiles_map.update_map(self.cur_orientation,
                                               self.cur_position[0],
                                               self.cur_position[1],
                                               moved=True)
            self.pheromone_map.update_map(self.cur_orientation,
                                          tile_type_in_front,
                                          self.cur_position[0],
                                          self.cur_position[1],
                                          dirtiness=self.dirtiness)
            self.pheromone_map.deplete_pheromone(self.cur_position[0],
                                                 self.cur_position[1])

            print('Moved forward')
        return tile_type_in_front

    def turn_left(self):
        self.robot_converse.move_rot_left()

        if self.cur_orientation==0:
            self.cur_orientation = 3
        elif self.cur_orientation==1:
            self.cur_orientation = 0
        elif self.cur_orientation==2:
            self.cur_orientation = 1
        else:
            self.cur_orientation = 2

        print('Rotate_left')

    def turn_right(self):
        self.robot_converse.move_rot_right()

        if self.cur_orientation==0:
            self.cur_orientation = 1
        elif self.cur_orientation==1:
            self.cur_orientation = 2
        elif self.cur_orientation==2:
            self.cur_orientation = 3
        else:
            self.cur_orientation = 0
        
        print('Rotated right')

    # CHARGING
    def check_charge(self):
        check_result = True
        
        battery = self.robot_converse.ask_battery_state()

        delta = self.moves_left - battery.battery_status.moves_left

        self.charge_map.update_map(self.cur_position[0],
                                   self.cur_position[1],
                                   delta)

        self.moves_left = battery.battery_status.moves_left

        needed_charge_to_return = self.charge_map.calc_return_path()
        if not ((self.max_moves_on_full_energy-needed_charge_to_return)>(self.max_moves_on_full_energy*0.55)):
            check_result = False

        return check_result

    def return_to_charging_station(self):
        print('Low energy. Return for charging')
        self.charge_map.convert_to_pheromone(1.0,
                                             self.cur_position,
                                             self.map,
                                             self.obstacles)
        charging_station_coords = self.map.get_charging_station_coords(self.charging_station)
        while not (self.map.get_tile_on(self.cur_position)==self.charging_station):
            possible_tiles_coords = self.check_possible_tiles_to_move_charging()

            tile_probability = self.ant.calculate_probability_low_energy_return(possible_tiles_coords,
                                                                                self.charge_map,
                                                                                charging_station_coords)

            max_probability = self.get_max_probability_value(tile_probability)

            max_probability_tiles_coords = self.get_most_probable_tiles(tile_probability,
                                                                        max_probability,
                                                                        possible_tiles_coords)

            chosen_tile_index = self.choose_next_tile(max_probability_tiles_coords)

            self.go_to_tile(max_probability_tiles_coords[chosen_tile_index])

            self.charge_map.deplete_pheromone(self.cur_position[0],
                                              self.cur_position[1])
            self.charge_map.print_map()

            input()

    def go_to_unexplored_tile(self, unexplored_tile_coords):
        while (self.map.get_tile_on(unexplored_tile_coords)==None) and self.check_charge():
            print('Targetting unexplored tile [%d, %d]'%(unexplored_tile_coords[0], unexplored_tile_coords[1]))
            possible_tiles_coords = self.check_possible_tiles_to_move()

            tile_probability = self.ant.calculate_probability_with_target(possible_tiles_coords,
                                                                          self.pheromone_map,
                                                                          unexplored_tile_coords)

            max_probability = self.get_max_probability_value(tile_probability)

            max_probability_tiles_coords = self.get_most_probable_tiles(tile_probability,
                                                                        max_probability,
                                                                        possible_tiles_coords)

            chosen_tile_index = self.choose_next_tile(max_probability_tiles_coords)

            self.go_to_tile(max_probability_tiles_coords[chosen_tile_index])

            input()

    def check_possible_tiles_to_move_charging(self):
        possible_tiles_coords = {'front':None,
                                 'right':None,
                                 'rear':None,
                                 'left':None}
        if self.check_front_charge():
            possible_tiles_coords['front'] = self.charge_map.get_front_tile_pos(self.cur_position,
                                                                                self.cur_orientation)
        if self.check_right_charge():
            possible_tiles_coords['right'] = self.charge_map.get_right_tile_pos(self.cur_position,
                                                                                self.cur_orientation)
        if self.check_rear_charge():
            possible_tiles_coords['rear'] = self.charge_map.get_rear_tile_pos(self.cur_position,
                                                                              self.cur_orientation)
        if self.check_left_charge():
            possible_tiles_coords['left'] = self.charge_map.get_left_tile_pos(self.cur_position,
                                                                              self.cur_orientation)
        print(possible_tiles_coords)

        return possible_tiles_coords

    def check_front_charge(self):
        front_tile = self.charge_map.get_front_tile_type(self.cur_position,
                                                         self.cur_orientation)
        
        no_obstacle = True
        if front_tile==None:
            no_obstacle = False

        return no_obstacle

    def check_right_charge(self):
        right_tile = self.charge_map.get_right_tile_type(self.cur_position,
                                                         self.cur_orientation)
        
        no_obstacle = True
        if right_tile==None:
            no_obstacle = False

        return no_obstacle

    def check_rear_charge(self):
        rear_tile = self.charge_map.get_rear_tile_type(self.cur_position,
                                                       self.cur_orientation)
        
        no_obstacle = True
        if rear_tile==None:
            no_obstacle = False

        return no_obstacle

    def check_left_charge(self):
        left_tile = self.charge_map.get_left_tile_type(self.cur_position,
                                                       self.cur_orientation)
        
        no_obstacle = True
        if left_tile==None:
            no_obstacle = False

        return no_obstacle

    def get_tiles_energy_values(self, possible_tiles_coords):
        tiles_energy_values = {'front':None,
                               'right':None,
                               'rear':None,
                               'left':None}

        for direction in possible_tiles_coords.keys():
            if possible_tiles_coords[direction]:
                tiles_energy_values[direction] = self.charge_map.get_tile_on(possible_tiles_coords[direction])

        print(tiles_energy_values)

        return tiles_energy_values

    def get_tiles_distances_charging(self, possible_tiles_coords):
        tiles_distances = {'front':None,
                           'right':None,
                           'rear':None,
                           'left':None}

        charging_station_coords = self.map.get_charging_station_coords(self.charging_station)

        for direction in possible_tiles_coords.keys():
            if possible_tiles_coords[direction]:
                tiles_distances[direction] = self.map.calc_distance_to_charging_station(possible_tiles_coords[direction],
                                                                                        charging_station_coords)

        print(tiles_distances)

        return tiles_distances

    def get_min_energy_value(self, tiles_energy_values):
        energies = tiles_energy_values.values()
        filtered_energies = []
        for e in energies:
            if e==None:
                filtered_energies.append(self.max_moves_on_full_energy)
            else:
                filtered_energies.append(e)

        return min(filtered_energies)

    def get_min_energy_tiles(self, tiles_energy_values, min_energy, possible_tiles_coords):
        min_energy_tiles_coords = []
        for direction in tiles_energy_values.keys():
            if tiles_energy_values[direction]==min_energy:
                min_energy_tiles_coords.append(possible_tiles_coords[direction])

        print(min_energy_tiles_coords)

        return min_energy_tiles_coords

    def choose_next_tile_charge(self, min_energy_tiles_coords):
        n_min_charge_tiles = len(min_energy_tiles_coords)
        if n_min_charge_tiles>1:
            chosen_tile_index = random.randint(0,
                                               n_min_charge_tiles-1)
        else:
            chosen_tile_index = 0

        print(chosen_tile_index)

        return chosen_tile_index

    # CLEANING
    def clean(self):
        print('Cleaning the rest...')
        while not self.pheromone_map.check_clean():
            target_tile = self.pheromone_map.get_dirty_tile_coords()
            self.go_to_dirty_tile(target_tile)
            # Go back
            possible_tiles_coords = self.check_possible_tiles_to_move()

            tile_probability = self.ant.calculate_probability_exploration(possible_tiles_coords,
                                                                          self.pheromone_map,
                                                                          self.explored_tiles_map)

            max_probability = self.get_max_probability_value(tile_probability)

            max_probability_tiles_coords = self.get_most_probable_tiles(tile_probability,
                                                                        max_probability,
                                                                        possible_tiles_coords)

            chosen_tile_index = self.choose_next_tile(max_probability_tiles_coords)

            self.go_to_tile(max_probability_tiles_coords[chosen_tile_index])

            if not self.check_charge():                
                self.return_to_charging_station()
                self.robot_converse.request_charge()
                self.moves_left = self.max_moves_on_full_energy
                self.charge_map.reset(self.cur_position)

            input()

        self.return_to_charging_station()
        self.robot_converse.request_charge()

    def go_to_dirty_tile(self, dirty_tile_coords):
        while (not (dirty_tile_coords==self.cur_position)) and self.check_charge():
            print('Targetting dirty tile [%d, %d]'%(dirty_tile_coords[0], dirty_tile_coords[1]))
            possible_tiles_coords = self.check_possible_tiles_to_move()

            tile_probability = self.ant.calculate_probability_with_target(possible_tiles_coords,
                                                                          self.pheromone_map,
                                                                          dirty_tile_coords)

            max_probability = self.get_max_probability_value(tile_probability)

            max_probability_tiles_coords = self.get_most_probable_tiles(tile_probability,
                                                                        max_probability,
                                                                        possible_tiles_coords)

            chosen_tile_index = self.choose_next_tile(max_probability_tiles_coords)

            self.go_to_tile(max_probability_tiles_coords[chosen_tile_index])

            input()

    def destroy(self):
        self.robot_converse.destroy()
        self.robot_converse.destroy_node()

def main(args=None):
    rclpy.init(args=args)

    robot = RobotAi(obstacles=[120, 88, 35],
                    dirtiness=[49, 50, 51],
                    charging_station=64)

    robot.authenticate()

    robot.explore_map()

    robot.clean()
    
    print('All work done! Yupee!')

    robot.destroy()

    rclpy.shutdown()

if __name__=='__main__':
    main()
