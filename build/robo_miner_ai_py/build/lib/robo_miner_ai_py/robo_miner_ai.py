import random

import rclpy

import robo_miner_ai_py.communicator as communicator
import robo_miner_ai_py.map_tiles as map_tiles

class PheromoneMap:
    def __init__(self, landscape, explored_tiles_map, obstacles):
        self.landscape = landscape
        self.obstacles = obstacles

        # Initial pheromoen levels
        self.init_pheromone_levels(1.0,
                                   explored_tiles_map)

    def init_pheromone_levels(self, pheromone_level, explored_tiles_map):
        for i in range(len(self.landscape)):
            for j in range(len(self.landscape[i])):
                if not (self.landscape[i][j] in self.obstacles):
                    if explored_tiles_map.landscape[i][j]==1:
                        self.landscape[i][j] = pheromone_level/2.0
                    else:
                        self.landscape[i][j] = pheromone_level
                else:
                    self.landscape[i][j] = 0.0

    def decrease_pheromone(self, pos):
        self.landscape[pos[1]][pos[0]] /= 2.0

    def get_front_tile_pos(self, pos, orient):
        if orient==0:
            tile_pos = [pos[0], pos[1]-1]
        elif orient==1:
            tile_pos = [pos[0]+1, pos[1]]
        elif orient==2:
            tile_pos = [pos[0], pos[1]+1]
        elif orient==3:
            tile_pos = [pos[0]-1, pos[1]]
        else:
            print('Unknown orientation')

        return tile_pos

    def get_left_tile_pos(self, pos, orient):
        if orient==0:
            tile_pos = [pos[0]-1, pos[1]]
        elif orient==1:
            tile_pos = [pos[0], pos[1]-1]
        elif orient==2:
            tile_pos = [pos[0]+1, pos[1]]
        elif orient==3:
            tile_pos = [pos[0], pos[1]+1]
        else:
            print('Unknown orientation')

        return tile_pos

    def get_right_tile_pos(self, pos, orient):
        if orient==0:
            tile_pos = [pos[0]+1, pos[1]]
        elif orient==1:
            tile_pos = [pos[0], pos[1]+1]
        elif orient==2:
            tile_pos = [pos[0]-1, pos[1]]
        elif orient==3:
            tile_pos = [pos[0], pos[1]-1]
        else:
            print('Unknown orientation')

        return tile_pos

    def get_rear_tile_pos(self, pos, orient):
        if orient==0:
            tile_pos = [pos[0], pos[1]+1]
        elif orient==1:
            tile_pos = [pos[0]-1, pos[1]]
        elif orient==2:
            tile_pos = [pos[0], pos[1]-1]
        elif orient==3:
            tile_pos = [pos[0]+1, pos[1]]
        else:
            print('Unknown orientation')

        return tile_pos

    def get_tile_pheromone_level(self, coords):
        return self.landscape[coords[1]][coords[0]]

    def print_map(self):
        for i in range(len(self.landscape)):
            print(self.landscape[i])

class RobotAi:
    def __init__(self):
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
        self.obstacles = [35, 88]

    def authenticate(self):
        self.robot_converse.authenticate_user()
        rclpy.spin_once(self.robot_converse,
                        timeout_sec=0.5)

    # EXPLORATION
    def explore_map(self):
        self.ask_initial_position()

        # The initial map contains only the surroundings of the initial
        # position of the robot. The robot is in the center
        self.map = map_tiles.Map(orientation=self.cur_orientation,
                                 surroundings=self.surrounding_tiles,
                                 cur_pos=self.cur_position,
                                 initial_tile=self.starting_tile)
        self.explored_tiles_map = map_tiles.Map(orientation=self.cur_orientation,
                                                surroundings=[None, None, None],
                                                cur_pos=self.cur_position,
                                                initial_tile=1)

        self.traverse_left_edge_strategy()

        self.map.auto_fill_map_borders()
        self.explored_tiles_map.auto_fill_map_borders_edges()
        self.explored_tiles_map.fill_obstacles(self.map)

        self.pheromone_map = PheromoneMap(self.map.copy_map(),
                                          self.explored_tiles_map,
                                          self.obstacles)
        while not self.explored_tiles_map.exploration_check():
            print('Need more exploration')
            print('Ant algorithm')
            self.pheromone_map.decrease_pheromone(self.cur_position)
            self.pheromone_map.print_map()
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
            
            pheromone_levels = {'front':None,
                                'right':None,
                                'rear':None,
                                'left':None}
            for direction in possible_tiles_coords.keys():
                if possible_tiles_coords[direction]:
                    pheromone_levels[direction] = self.pheromone_map.get_tile_pheromone_level(possible_tiles_coords[direction])
            print(pheromone_levels)

            total_surrounding_pheromone = 0
            for direction in pheromone_levels.keys():
                if pheromone_levels[direction]:
                    total_surrounding_pheromone += self.pheromone_map.get_tile_pheromone_level(possible_tiles_coords[direction])

            tile_probability = {'front':None,
                                'right':None,
                                'rear':None,
                                'left':None}
            for direction in pheromone_levels.keys():
                if pheromone_levels[direction]:
                    tile_probability[direction] = pheromone_levels[direction]/total_surrounding_pheromone
            print(tile_probability)

            probabilities = tile_probability.values()
            filtered_probabilities = []
            for p in probabilities:
                if p==None:
                    filtered_probabilities.append(0.0)
                else:
                    filtered_probabilities.append(p)
            max_probability = max(filtered_probabilities)
            
            max_probability_tiles_coords = []
            for direction in tile_probability.keys():
                if tile_probability[direction]==max_probability:
                    max_probability_tiles_coords.append(possible_tiles_coords[direction])
            print(max_probability_tiles_coords)

            n_max_probability_tiles = len(max_probability_tiles_coords)
            if n_max_probability_tiles>1:
                chosen_tile_index = random.randint(0, n_max_probability_tiles-1)
            else:
                chosen_tile_index = 0
            print(chosen_tile_index)

##            input()

            self.go_to_tile(max_probability_tiles_coords[chosen_tile_index])

        print('All explored! Now to validate the map')
        map_no_borders = self.map.clear_borders()
        print(map_no_borders)
        validation = self.robot_converse.map_validate(map_no_borders)
        if validation.success:
            print('Map validated')
        else:
            print(validation.error_reason)

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

    def check_obstacle_along_x(self, target_x):
        obstacle_along_x = False
        seek_x = self.cur_position[0]
        if target_x<self.cur_position[0]:
            seek_x -= 1
        elif target_x>self.cur_position[0]:
            seek_x += 1
        flag = 1
        while (not (target_x==seek_x)) and flag:
            if self.map.landscape[self.cur_position[1]][seek_x]==88:
                obstacle_along_x = True
                if target_x<self.cur_position[0]:
                    seek_x += 1
                else:
                    seek_x -= 1
                flag = 0
            else:
                if target_x<self.cur_position[0]:
                    seek_x -= 1
                else:
                    seek_x += 1

        return obstacle_along_x, seek_x

    def check_obstacle_along_y(self, target_y):
        obstacle_along_y = False
        seek_y = self.cur_position[1]
        if target_y<self.cur_position[1]:
            seek_y -= 1
        elif target_y>self.cur_position[1]:
            seek_y += 1
        flag = 1
        while (not (target_y==seek_y)) and flag:
            if self.map.landscape[seek_y][self.cur_position[0]]==88:
                obstacle_along_y = True
                if target_y<self.cur_position[1]:
                    seek_y += 1
                else:
                    seek_y -= 1
                flag = 0
            else:
                if target_y<self.cur_position[1]:
                    seek_y -= 1
                else:
                    seek_y += 1

        return obstacle_along_y, seek_y
        
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

    def next_move_right_edge_strategy(self):
        if self.check_front():
            if not self.check_right():
                self.advance()
            else:
                print('Lost right edge, trying to find it')
                self.evade_right()
                self.advance()
        elif self.check_right():
            print('Lost left edge, trying to find it')
            self.evade_right()
            self.advance()
        else:
            print('There is an obstacle in front and on the right. Try to evade left')
            self.evade_left()

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

    def destroy(self):
        self.robot_converse.destroy_node()

def main(args=None):
    rclpy.init(args=args)

    robot = RobotAi()

    robot.authenticate()

    robot.explore_map()

    robot.destroy()

    rclpy.shutdown()

if __name__=='__main__':
    main()
          
