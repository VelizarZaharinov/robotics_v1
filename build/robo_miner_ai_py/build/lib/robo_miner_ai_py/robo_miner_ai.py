import random

import rclpy

import robo_miner_ai_py.communicator as communicator
import robo_miner_ai_py.map_tiles as map_tiles
import robo_miner_ai_py.map_pheromone as map_pheromone
import robo_miner_ai_py.ant_algorithm as ant_algorithm

class RobotAi:
    def __init__(self, obstacles=None, crystals=None):
        # The position is relative to the currently explored map data
        # [0] corresponds to map column, and [1] to map row
        self.cur_position = [1, 1]
        self.starting_tile = None
        # For the current orientation 0 = up, 1 = right, 2 = down, 3 = left
        self.cur_orientation = None
        # For the surrounding tiles array first value is left, second - front,
        # and third - right. Values are 35 = wall, 112 = purple crystal,
        # 58 = blue crystal, 103 = green crystal, 114 = red crystal, 88 = wall
        self.surrounding_tiles = [None, None, None]
        
        # Init robot talker
        self.robot_converse = communicator.RobotConverse()

        # Obstacle markers
        self.obstacles = obstacles

        # Crystal markers
        self.crystals = crystals

    def authenticate(self):
        self.robot_converse.authenticate_user()
        rclpy.spin_once(self.robot_converse,
                        timeout_sec=0.5)

    # EXPLORATION
    def explore_map(self):
        self.ask_initial_position()

        # The initial map contains only the surroundings of the initial
        # position of the robot. The robot is in the center
        self.map = map_tiles.Map(fog=None,
                                 initial_tile=self.starting_tile)
        self.explored_tiles_map = map_tiles.Map(orientation=self.cur_orientation,
                                                surroundings=[None, None, None],
                                                cur_pos=self.cur_position,
                                                initial_tile=1)

        self.traverse_left_edge_strategy()

        self.map.auto_fill_map_borders()
        self.explored_tiles_map.auto_fill_map_borders_edges()
        self.explored_tiles_map.fill_obstacles(self.map)

        self.pheromone_map = map_pheromone.PheromoneMap(self.map.copy_map(),
                                                        self.explored_tiles_map,
                                                        self.obstacles)
        self.ant = ant_algorithm.AntAlgorithm()
        while not self.explored_tiles_map.exploration_check():
            print('Need more exploration')
            print('Ant algorithm')
            self.pheromone_map.decrease_pheromone(self.cur_position)
            self.pheromone_map.print_map()

            possible_tiles_coords = self.check_possible_tiles_to_move()

            tile_probability = self.ant.calculate_probability(possible_tiles_coords,
                                                              self.pheromone_map,
                                                              target_tile=self.explored_tiles_map.get_unexplored_tile())

            max_probability = self.get_max_probability_value(tile_probability)

            max_probability_tiles_coords = self.get_most_probable_tiles(tile_probability,
                                                                        max_probability,
                                                                        possible_tiles_coords)

            chosen_tile_index = self.choose_next_tile(max_probability_tiles_coords)

            self.go_to_tile(max_probability_tiles_coords[chosen_tile_index])

        print('All explored! Now to validate the map')
        self.map_no_borders = self.map.clear_borders()
        print(self.map_no_borders)
        validation = self.robot_converse.map_validate(self.map_no_borders)
        if validation.success:
            print('Map validated')
        else:
            print(validation.error_reason)

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

    def get_pheromone_levels(self, tiles):
        pheromone_levels = {'front':None,
                            'right':None,
                            'rear':None,
                            'left':None}
        for direction in tiles.keys():
            if tiles[direction]:
                pheromone_levels[direction] = self.pheromone_map.get_tile_pheromone_level(tiles[direction])
        print(pheromone_levels)

        return pheromone_levels

    def sum_pheromone(self, phe_levels, tiles):
        total_phe = 0
        for direction in phe_levels.keys():
            if phe_levels[direction]:
                total_phe += self.pheromone_map.get_tile_pheromone_level(tiles[direction])

        return total_phe

    def clac_probability(self, phe_levels, total_phe):
        tile_probability = {'front':None,
                            'right':None,
                            'rear':None,
                            'left':None}
        for direction in phe_levels.keys():
            if phe_levels[direction]:
                tile_probability[direction] = phe_levels[direction]/total_phe
        print(tile_probability)

        return tile_probability

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
            chosen_tile_index = random.randint(0, n_max_probability_tiles-1)
        else:
            chosen_tile_index = 0
        print(chosen_tile_index)

        return chosen_tile_index
    
    def ask_initial_position(self):
        res_initial_position = self.robot_converse.request_initial_position()
        self.surrounding_tiles = res_initial_position.robot_position_response.surrounding_tiles
        self.cur_orientation = res_initial_position.robot_position_response.robot_dir
        self.starting_tile = res_initial_position.robot_initial_tile

    def check_front(self):
        front_tile = self.map.get_tile_front(self.cur_position,
                                             self.cur_orientation)
        print('Front tile in check front: %d'%(front_tile))

        no_obstacle = True
        if (front_tile==35) or (front_tile==88):
            no_obstacle = False

        return no_obstacle

    def check_left(self):
        left_tile = self.map.get_tile_left(self.cur_position,
                                           self.cur_orientation)

        no_obstacle = True
        if (left_tile==35) or (left_tile==88):
            no_obstacle = False

        return no_obstacle

    def check_right(self):
        right_tile = self.map.get_tile_right(self.cur_position,
                                             self.cur_orientation)

        no_obstacle = True
        if (right_tile==35) or (right_tile==88):
            no_obstacle = False

        return no_obstacle

    def check_rear(self):
        rear_tile = self.map.get_tile_rear(self.cur_position,
                                           self.cur_orientation)

        no_obstacle = True
        if (rear_tile==35) or (rear_tile==88):
            no_obstacle = False

        return no_obstacle
        
    def advance(self):
        move_outcome = self.robot_converse.move_forward()
        self.surrounding_tiles = move_outcome.robot_position_response.surrounding_tiles
        self.cur_orientation = move_outcome.robot_position_response.robot_dir

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
        self.cur_position = self.map.grow(self.cur_position)
        self.explored_tiles_map.grow(old_position)

        self.map.update_map(self.cur_orientation,
                            self.surrounding_tiles,
                            self.cur_position[0],
                            self.cur_position[1])

        self.explored_tiles_map.landscape[self.cur_position[1]][self.cur_position[0]] = 1
        self.explored_tiles_map.update_explored_map(self.map.landscape,
                                                    self.obstacles)

        print('Moved forward')

    def evade_left(self):
        move_outcome = self.robot_converse.move_rot_left()
        self.surrounding_tiles = move_outcome.robot_position_response.surrounding_tiles
        self.cur_orientation = move_outcome.robot_position_response.robot_dir

        self.map.update_map(self.cur_orientation,
                            self.surrounding_tiles,
                            self.cur_position[0],
                            self.cur_position[1])

        print('Rotate_left')

    def evade_right(self):
        move_outcome = self.robot_converse.move_rot_right()
        self.surrounding_tiles = move_outcome.robot_position_response.surrounding_tiles
        self.cur_orientation = move_outcome.robot_position_response.robot_dir

        self.map.update_map(self.cur_orientation,
                            self.surrounding_tiles,
                            self.cur_position[0],
                            self.cur_position[1])
        
        print('Rotated right')

    def traverse_left_edge_strategy(self):
        print('Follow left edge strategy')
        # First seek out an edge around the robot, and rotate it so the edge is on the left
        self.seek_edge()

        # Then follow along until return to initial position
        self.follow_left_edge()
        print('Follow left edge strategy complete')

    def seek_edge(self):
        print('Seeking edge on left...')
        flag = 1
        while flag:
            if not self.check_front():
                self.evade_right()
                flag = 0
            elif not self.check_left():
                flag = 0
            elif not self.check_right():
                self.evade_right()
            else:
                self.advance()
        print('Found edge on left...')

    def follow_left_edge(self):
        print('Following edge on left...')
        marker = 0
        self.map.mark_position(self.cur_position,
                               marker)

        advanced_after_marker_placed = self.next_move_left_edge_strategy()
        while not advanced_after_marker_placed:
            advanced_after_marker_placed = self.next_move_left_edge_strategy()

        while not (self.map.get_tile_on(self.cur_position)==marker):
            self.next_move_left_edge_strategy()

        self.map.erease_marker(marker)

        print('Returned to starting position after left edge following')        

    def next_move_left_edge_strategy(self):
        advanced = True
        if self.check_front():
            if not self.check_left():
                self.advance()
            else:
                print('Lost left edge, trying to find it')
                self.evade_left()
                self.advance()
        elif self.check_left():
            print('Lost left edge, trying to find it')
            self.evade_left()
            self.advance()
        else:
            print('There is an obstacle in front and on the left. Try to evade right')
            self.evade_right()
            advanced = False

        return advanced

    def go_to_tile(self, tile):
        cur_x_diff = tile[0] - self.cur_position[0]
        cur_y_diff = tile[1] - self.cur_position[1]
        while cur_x_diff or cur_y_diff:
            if cur_x_diff:
                self.align_x_strategy(tile)
                print('X position reached')
            else:
                print('X position reached')
            if cur_y_diff:
                self.align_y_strategy(tile)
                print('Y position reached')
            else:
                print('Y position reached')

            cur_x_diff = tile[0] - self.cur_position[0]
            cur_y_diff = tile[1] - self.cur_position[1]
                
        print('Desired tile reached')

    def align_x_strategy(self, tile):
        print('Align x strategy')
        cur_x_diff = tile[0] - self.cur_position[0]
        cur_y_diff = tile[1] - self.cur_position[1]
        
        self.align_x(cur_x_diff)

        while cur_x_diff:
            if self.check_front():
                self.advance()
                cur_x_diff = tile[0] - self.cur_position[0]
                cur_y_diff = tile[1] - self.cur_position[1]
            else:
                print('Obstacle reached. Trying to evade')
                if cur_y_diff<0:
                    if self.check_right():
                        self.evade_right()
                        self.advance()
                        cur_x_diff = tile[0] - self.cur_position[0]
                        cur_y_diff = tile[1] - self.cur_position[1]
                        self.align_x(cur_x_diff)
                    elif self.check_left():
                        self.evade_left()
                        self.advance()
                        cur_x_diff = tile[0] - self.cur_position[0]
                        cur_y_diff = tile[1] - self.cur_position[1]
                        self.align_x(cur_x_diff)
                    else:
                        self.evade_right()
                elif cur_y_diff>0:
                    if self.check_left():
                        self.evade_left()
                        self.advance()
                        cur_x_diff = tile[0] - self.cur_position[0]
                        cur_y_diff = tile[1] - self.cur_position[1]
                        self.align_x(cur_x_diff)
                    elif self.check_right():
                        self.evade_right()
                        self.advance()
                        cur_x_diff = tile[0] - self.cur_position[0]
                        cur_y_diff = tile[1] - self.cur_position[1]
                        self.align_x(cur_x_diff)
                    else:
                        self.evade_left()
                else:
                    if self.check_right():
                        self.evade_right()
                        self.advance()
                        cur_x_diff = tile[0] - self.cur_position[0]
                        cur_y_diff = tile[1] - self.cur_position[1]
                        self.align_x(cur_x_diff)
                    elif self.check_left():
                        self.evade_left()
                        self.advance()
                        cur_x_diff = tile[0] - self.cur_position[0]
                        cur_y_diff = tile[1] - self.cur_position[1]
                        self.align_x(cur_x_diff)
                    else:
                        self.evade_right()

    def align_y_strategy(self, tile):
        print('Align y strategy')
        cur_y_diff = tile[1] - self.cur_position[1]
        
        self.align_y(cur_y_diff)

        while cur_y_diff:
            if self.check_front():
                self.advance()
                cur_y_diff = tile[1] - self.cur_position[1]
            else:
                print('Obstacle reached. Trying to evade')
                if self.check_right():
                    self.evade_right()
                    while (not self.check_left()) and self.check_front():
                        self.advance()
                    cur_y_diff = tile[1] - self.cur_position[1]
                    self.align_y(cur_y_diff)
                elif self.check_left():
                    self.evade_left()
                    while (not self.check_right()) and self.check_front():
                        self.advance()
                    cur_y_diff = tile[1] - self.cur_position[1]
                    self.align_y(cur_y_diff)
                else:
                    self.evade_right()

    def align_x(self, x_diff):
        if x_diff:
            if self.cur_orientation==0:
                if x_diff<0:
                    self.evade_left()
                elif x_diff>0:
                    self.evade_right()
            elif self.cur_orientation==1:
                if x_diff<0:
                    self.evade_left()
                    self.evade_left()
            elif self.cur_orientation==2:
                if x_diff<0:
                    self.evade_right()
                elif x_diff>0:
                    self.evade_left()
            else:
                if x_diff>0:
                    self.evade_left()
                    self.evade_left()
        

    def align_y(self, y_diff):
        if y_diff:
            if self.cur_orientation==0:
                if y_diff>0:
                    self.evade_left()
                    self.evade_left()
            elif self.cur_orientation==1:
                if y_diff<0:
                    self.evade_left()
                elif y_diff>0:
                    self.evade_right()
            elif self.cur_orientation==2:
                if y_diff<0:
                    self.evade_left()
                    self.evade_left()
            else:
                if y_diff<0:
                    self.evade_right()
                elif y_diff>0:
                    self.evade_left()

    # FIND BIGGEST PATCH
    def find_largest_patch(self):
        # Deduce crystals from map
        self.crystals = self.get_crystals()
        
        # First filter all tiles of same kind
        crystal_type_groups = {}
        for i in range(len(self.crystals)):
            crystal_type_groups[str(self.crystals[i])] = self.find_all_same_tiles(self.crystals[i])

        # Then cluster each group following the thread of neighbours
        all_clusters = {}
        for tile_type in crystal_type_groups.keys():
            all_clusters[tile_type] = []
            while len(crystal_type_groups[tile_type]):
                all_clusters[tile_type].append([])
                if not (crystal_type_groups[tile_type][0] in all_clusters[tile_type][-1]):
                    all_clusters[tile_type][-1].append(crystal_type_groups[tile_type][0])
                    del crystal_type_groups[tile_type][0]

                j = 0
                while j<len(all_clusters[tile_type][-1]):
                    surrounding_tiles = self.get_surrounding_tiles(all_clusters[tile_type][-1][j])

                    k = 0
                    while k<len(surrounding_tiles):
                        if surrounding_tiles[k] in all_clusters[tile_type][-1]:
                            del surrounding_tiles[k]
                        else:
                            k += 1

                    k = 0
                    while k<len(crystal_type_groups[tile_type]):
                        if crystal_type_groups[tile_type][k] in surrounding_tiles:
                            all_clusters[tile_type][-1].append(crystal_type_groups[tile_type][k])
                            del crystal_type_groups[tile_type][k]
                        else:
                            k += 1

                    j += 1
                    
        print(all_clusters)

        tile_type, index = self.find_largest_cluster(all_clusters)
        
        self.longest_sequence = all_clusters[tile_type][index]
        
        longest_sequence = self.convert_sequence_from_zero(all_clusters[tile_type][index])
        print(longest_sequence)

        result = self.robot_converse.longest_sequence_validate(longest_sequence)
        if not result.success:
            print(result.error_reason)

    def get_crystals(self):
        crystals = []
        for i in range(len(self.map_no_borders)):
            for j in range(len(self.map_no_borders[i])):
                if not self.map_no_borders[i][j] in self.obstacles:
                    if not self.map_no_borders[i][j] in crystals:
                        crystals.append(self.map_no_borders[i][j])
        print(crystals)

        return crystals
            
    def find_all_same_tiles(self, tile_type):
        all_same_tiles_coords = []
        for i in range(len(self.map.landscape)):
            for j in range(len(self.map.landscape[i])):
                if self.map.landscape[i][j]==tile_type:
                    all_same_tiles_coords.append([j, i])
        print('All tiles of type %d'%(tile_type))
        print(all_same_tiles_coords)

        return all_same_tiles_coords

    def get_surrounding_tiles(self, tile):
        cur_tile_north = [tile[0], tile[1]-1]
        cur_tile_east = [tile[0]+1, tile[1]]
        cur_tile_south = [tile[0], tile[1]+1]
        cur_tile_west = [tile[0]-1, tile[1]]
        surrounding_tiles = [cur_tile_north,
                             cur_tile_east,
                             cur_tile_south,
                             cur_tile_west]

        return surrounding_tiles

    def find_largest_cluster(self, all_clusters):
        max_size = 0
        for tile_type in all_clusters.keys():
            for i in range(len(all_clusters[tile_type])):
                if max_size<len(all_clusters[tile_type][i]):
                    tile_type_max = tile_type
                    index = i
                    max_size = len(all_clusters[tile_type][i])

        return tile_type_max, index

    def convert_sequence_from_zero(self, sequence):
        converted = []
        for i in range(len(sequence)):
            converted.append([sequence[i][0]-1,
                             sequence[i][1]-1])

        return converted

    def mine_largest_patch(self):
        print('Go to start of patch')
        # Reset pheromone
        self.pheromone_map.reset()

        self.pheromone_map.decrease_pheromone(self.cur_position)
        self.pheromone_map.print_map()

        # Go to first tile in mining sequence        
        self.go_to_tile_ant(self.longest_sequence[0])

        # Announce mining
        self.robot_converse.activate_mining()

        # Setup pheromone map for mining
        self.pheromone_map.setup_for_mining(self.longest_sequence)
        self.pheromone_map.decrease_pheromone(self.cur_position)
        self.pheromone_map.print_map()

        # Mine
        print('Mine patch')
        for i in range(1, len(self.longest_sequence)):
            self.go_to_tile_ant(self.longest_sequence[i])            

    def go_to_tile_ant(self, tile):
        while not (self.cur_position==tile):
            possible_tiles_coords = self.check_possible_tiles_to_move()

            tile_probability = self.ant.calculate_probability(possible_tiles_coords,
                                                              self.pheromone_map,
                                                              target_tile=tile)

            max_probability = self.get_max_probability_value(tile_probability)

            max_probability_tiles_coords = self.get_most_probable_tiles(tile_probability,
                                                                        max_probability,
                                                                        possible_tiles_coords)

            chosen_tile_index = self.choose_next_tile(max_probability_tiles_coords)

            self.go_to_tile(max_probability_tiles_coords[chosen_tile_index])

            self.pheromone_map.decrease_pheromone(self.cur_position)
            self.pheromone_map.print_map()

    def destroy(self):
        self.robot_converse.destroy_node()

def main(args=None):
    rclpy.init(args=args)

    robot = RobotAi(obstacles=[35, 88],
                    crystals=[98, 99, 103, 112, 114])

    robot.authenticate()

    robot.explore_map()

    robot.find_largest_patch()

    robot.mine_largest_patch()

    print('All work done! Yupee!')

    robot.destroy()

    rclpy.shutdown()

if __name__=='__main__':
    main()
          
