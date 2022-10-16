import sys

import rclpy
from rclpy.node import Node

from robo_miner_interfaces.msg import UserAuthenticate
from robo_miner_interfaces.msg import RobotMoveType

from robo_miner_interfaces.srv import QueryInitialRobotPosition
from robo_miner_interfaces.srv import RobotMove

class RobotConverse(Node):
    def __init__(self):
        # Init parent class
        super().__init__('robot_ai')

        # Init QoS
        qos = rclpy.qos.QoSProfile(reliability=rclpy.qos.ReliabilityPolicy.RELIABLE,
                                   durability=rclpy.qos.DurabilityPolicy.VOLATILE,
                                   history=rclpy.qos.HistoryPolicy.SYSTEM_DEFAULT,
                                   depth=10)

        # Init publishers
        self.pub_authenticate = self.create_publisher(UserAuthenticate,
                                                      'user_authenticate',
                                                      qos)

        # Init services
        self.cli_initial_position = self.create_client(QueryInitialRobotPosition,
                                                       'query_initial_robot_position')
        while not self.cli_initial_position.wait_for_service(timeout_sec=1):
            self.get_logger().info('service not available, waiting again...')
        self.cli_move = self.create_client(RobotMove,
                                           'move_robot')
        while not self.cli_move.wait_for_service(timeout_sec=1):
            self.get_logger().info('service not available, waiting again...')

        # Init requests returned from services
        self.req_initial_position = QueryInitialRobotPosition.Request()
        self.req_move = RobotMove.Request()

        # Init messages
        self.msg_move = RobotMoveType()

    def authenticate_user(self):
        msg = UserAuthenticate()

        msg.user = 'Velizar Zaharinov'
        msg.repository = 'https://github.com/VelizarZaharinov/robotics_v1'
        msg.commit_sha = 'TODO'

        self.pub_authenticate.publish(msg)
        print('Authentication complete')

    def request_initial_position(self):
        future = self.cli_initial_position.call_async(self.req_initial_position)
        rclpy.spin_until_future_complete(self,
                                         future)
        
        return future.result()

    def move_forward(self):
        self.msg_move.move_type = 0
        self.req_move.robot_move_type = self.msg_move
        future = self.cli_move.call_async(self.req_move)
        rclpy.spin_until_future_complete(self,
                                         future)

        return future.result()

    def move_rot_left(self):
        self.msg_move.move_type = 1
        self.req_move.robot_move_type = self.msg_move
        future = self.cli_move.call_async(self.req_move)
        rclpy.spin_until_future_complete(self,
                                         future)

        return future.result()

    def move_rot_right(self):
        self.msg_move.move_type = 2
        self.req_move.robot_move_type = self.msg_move
        future = self.cli_move.call_async(self.req_move)
        rclpy.spin_until_future_complete(self,
                                         future)

        return future.result()

class Map:
    def __init__(self, **kwargs):
        # The initial map contains only the surroundings of the initial
        # position of the robot. The robot is in the center
        self.landscape = [[None, None, None],
                          [None, kwargs['initial_tile'], None],
                          [None, None, None]]
        # Flag not to check for map borders if all are found
        self.borders_found = [0, 0, 0, 0] # Four borders top to left
        # For saving the original value of the marked tile
        self.marked_tile_original = None
        
        self.update_map(kwargs['orientation'],
                        kwargs['surroundings'],
                        kwargs['cur_pos'][0],
                        kwargs['cur_pos'][1])
                        

    def update_map(self, orientation, surroundings, cur_x, cur_y):
        if orientation==0:
            if self.landscape[cur_y][cur_x-1]==None:
                self.landscape[cur_y][cur_x-1] = surroundings[0]
            if self.landscape[cur_y-1][cur_x]==None:
                self.landscape[cur_y-1][cur_x] = surroundings[1]
            if self.landscape[cur_y][cur_x+1]==None:
                self.landscape[cur_y][cur_x+1] = surroundings[2]
        elif orientation==1:
            if self.landscape[cur_y-1][cur_x]==None:
                self.landscape[cur_y-1][cur_x] = surroundings[0]
            if self.landscape[cur_y][cur_x+1]==None:
                self.landscape[cur_y][cur_x+1] = surroundings[1]
            if self.landscape[cur_y+1][cur_x]==None:
                self.landscape[cur_y+1][cur_x] = surroundings[2]
        elif orientation==2:
            if self.landscape[cur_y][cur_x+1]==None:
                self.landscape[cur_y][cur_x+1] = surroundings[0]
            if self.landscape[cur_y+1][cur_x]==None:
                self.landscape[cur_y+1][cur_x] = surroundings[1]
            if self.landscape[cur_y][cur_x-1]==None:
                self.landscape[cur_y][cur_x-1] = surroundings[2]
        elif orientation==3:
            if self.landscape[cur_y+1][cur_x]==None:
                self.landscape[cur_y+1][cur_x] = surroundings[0]
            if self.landscape[cur_y][cur_x-1]==None:
                self.landscape[cur_y][cur_x-1] = surroundings[1]
            if self.landscape[cur_y-1][cur_x]==None:
                self.landscape[cur_y-1][cur_x] = surroundings[2]
        else:
            print('Unknown orientation')

        self.print_map()

    def get_tile_front(self, pos, orient):
        if orient==0:
            tile = self.landscape[pos[1]-1][pos[0]]
        elif orient==1:
            tile = self.landscape[pos[1]][pos[0]+1]
        elif orient==2:
            tile = self.landscape[pos[1]+1][pos[0]]
        elif orient==3:
            tile = self.landscape[pos[1]][pos[0]-1]
        else:
            print('Unknown orientation')

        return tile

    def get_tile_left(self, pos, orient):
        if orient==0:
            tile = self.landscape[pos[1]][pos[0]-1]
        elif orient==1:
            tile = self.landscape[pos[1]-1][pos[0]]
        elif orient==2:
            tile = self.landscape[pos[1]][pos[0]+1]
        elif orient==3:
            tile = self.landscape[pos[1]+1][pos[0]]
        else:
            print('Unknown orientation')

        return tile

    def get_tile_right(self, pos, orient):
        if orient==0:
            tile = self.landscape[pos[1]][pos[0]+1]
        elif orient==1:
            tile = self.landscape[pos[1]+1][pos[0]]
        elif orient==2:
            tile = self.landscape[pos[1]][pos[0]-1]
        elif orient==3:
            tile = self.landscape[pos[1]-1][pos[0]]
        else:
            print('Unknown orientation')

        return tile

    def get_tile_rear(self, pos, orient):
        if orient==0:
            tile = self.landscape[pos[1]+1][pos[0]]
        elif orient==1:
            tile = self.landscape[pos[1]][pos[0]-1]
        elif orient==2:
            tile = self.landscape[pos[1]-1][pos[0]]
        elif orient==3:
            tile = self.landscape[pos[1]][pos[0]+1]
        else:
            print('Unknown orientation')

        return tile

    def get_tile_on(self, pos):
        return self.landscape[pos[1]][pos[0]]

    def get_unexplored_tile(self):
        for i in range(len(self.landscape)):
            for j in range(len(self.landscape[i])):
                if self.landscape[i][j]==None:
                    return [i, j]

    def grow(self, cur_pos):
        if (cur_pos[1]+1)==len(self.landscape):
            self.landscape.append([])
            for tile in range(len(self.landscape[cur_pos[1]])):
                self.landscape[-1].append(None)
            print('map grows downwards')
        elif (cur_pos[1]-1)<0:
            self.landscape.insert(0, [])
            cur_pos[1] += 1 # Important to increment here
            for tile in range(len(self.landscape[cur_pos[1]])):
                self.landscape[0].append(None)
            print('map grows upwards')
        elif (cur_pos[0]+1)==len(self.landscape[cur_pos[1]]):
            for tile in range(len(self.landscape)):
                self.landscape[tile].append(None)
            print('map grows right')
        elif (cur_pos[0]-1)<0:
            for tile in range(len(self.landscape)):
                self.landscape[tile].insert(0, None)
            cur_pos[0] += 1
            print('map grows left')

        return cur_pos

    def exploration_check(self):
        fully_explored = True
        i = 0
        map_rows = len(self.landscape)
        while i<map_rows:
            if None in self.landscape[i]:
                fully_explored = False
                i = map_rows
            i += 1

        return fully_explored

    def auto_fill_map_borders(self):
        if 0 in self.borders_found:
            if not self.borders_found[0]:
                self.check_upper_border()
            if not self.borders_found[1]:
                self.check_right_border()
            if not self.borders_found[2]:
                self.check_lower_border()
            if not self.borders_found[3]:
                self.check_left_border()

        self.print_map()

    def auto_fill_map_borders_edges(self):
        map_rows = len(self.landscape)
        for i in range(map_rows):
            if (not i) or (i==(map_rows-1)):
                for j in range(len(self.landscape[i])):
                    self.landscape[i][j] = 2
            else:
                self.landscape[i][0] = 2
                self.landscape[i][-1] = 2

        self.print_map()

    def check_upper_border(self):
        border_tiles_count = 0
        border_tiles_indices = []
        map_columns = len(self.landscape[0])
        for i in range(map_columns):
            if self.landscape[0][i]==35:
                border_tiles_count += 1
                border_tiles_indices.append(i)

        if border_tiles_count>2:
            for i in range(map_columns):
                self.landscape[0][i] = 35
            self.borders_found[0] = 1
        else:
            for i in range(len(border_tiles_indices)):
                if (border_tiles_indices[i]>0) and (border_tiles_indices[i]<(border_tiles_count-1)):
                    for j in range(map_columns):
                        self.landscape[0][i] = 35
                    self.borders_found[0] = 1
                    
    def check_right_border(self):
        map_rows = len(self.landscape)
        i = 0
        while i<map_rows:
            if self.landscape[i][-1]==35:
                for j in range(map_rows):
                    self.landscape[j][-1] = 35
                i = map_rows
                self.borders_found[1] = 1
            i += 1

    def check_lower_border(self):
        border_tiles_count = 0
        border_tiles_indices = []
        map_columns = len(self.landscape[-1])
        for i in range(map_columns):
            if self.landscape[-1][i]==35:
                border_tiles_count += 1
                border_tiles_indices.append(i)

        if border_tiles_count>2:
            for i in range(map_columns):
                self.landscape[-1][i] = 35
            self.borders_found[2] = 1
        else:
            for i in range(len(border_tiles_indices)):
                if (border_tiles_indices[i]>0) and (border_tiles_indices[i]<(border_tiles_count-1)):
                    for j in range(map_columns):
                        self.landscape[-1][i] = 35
                    self.borders_found[2] = 1

    def check_left_border(self):
        map_rows = len(self.landscape)
        i = 0
        while i<map_rows:
            if self.landscape[i][0]==35:
                for j in range(map_rows):
                    self.landscape[j][0] = 35
                i = map_rows
                self.borders_found[3] = 1
            i += 1

    def mark_position(self, cur_pos, marker):
        self.marked_tile_original = self.landscape[cur_pos[1]][cur_pos[0]]
        self.landscape[cur_pos[1]][cur_pos[0]] = marker

    def fill_obstacles(self, pattern_map):
        for i in range(len(pattern_map.landscape)):
            for j in range(len(pattern_map.landscape[i])):
                if pattern_map.landscape[i][j]==88:
                    self.landscape[i][j] = 88

        self.print_map()

    def print_map(self):
        for i in range(len(self.landscape)):
            print(self.landscape[i])

class RobotAi:
    def __init__(self):
        # The position is relative to the currently explored map data
        self.cur_position = [1, 1]
        self.starting_tile = None
        # For the current orientation 0 = up, 1 = right, 2 = down, 3 = left
        self.cur_orientation = None
        # For the surrounding tiles array first value is left, second - front,
        # and third - right. Values are 35 = wall, 112 = purple crystal,
        # 58 = blue crystal, 103 = green crystal, 114 = red crystal, 88 = wall
        self.surrounding_tiles = [None, None, None]
        
        # Init robot talker
        self.robot_converse = RobotConverse()

    def authenticate(self):
        self.robot_converse.authenticate_user()
        rclpy.spin_once(self.robot_converse,
                        timeout_sec=0.5)

    # EXPLORATION
    def explore_map(self):
        self.ask_initial_position()

        # The initial map contains only the surroundings of the initial
        # position of the robot. The robot is in the center
        self.map = Map(orientation=self.cur_orientation,
                       surroundings=self.surrounding_tiles,
                       cur_pos=self.cur_position,
                       initial_tile=self.starting_tile)
        self.explored_tiles_map = Map(orientation=self.cur_orientation,
                                      surroundings=[None, None, None],
                                      cur_pos=self.cur_position,
                                      initial_tile=1)

        self.traverse_left_edge_strategy()

        self.map.auto_fill_map_borders()
        self.explored_tiles_map.auto_fill_map_borders_edges()
        self.explored_tiles_map.fill_obstacles(self.map)

        while not self.explored_tiles_map.exploration_check():
            print('Need more exploration')
            tile = self.explored_tiles_map.get_unexplored_tile()
            print(tile)
            break

        print('All explored!')

    def ask_initial_position(self):
        res_initial_position = self.robot_converse.request_initial_position()
        self.surrounding_tiles = res_initial_position.robot_position_response.surrounding_tiles
        self.cur_orientation = res_initial_position.robot_position_response.robot_dir
        self.starting_tile = res_initial_position.robot_initial_tile

    def check_front(self):
        front_tile = self.map.get_tile_front(self.cur_position,
                                             self.cur_orientation)

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
        self.explored_tiles_map.print_map()

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

        self.next_move_left_edge_strategy()

        while not (self.map.get_tile_on(self.cur_position)==marker):
            self.next_move_left_edge_strategy()

        print('Returned to starting position after left edge following')        

    def next_move_left_edge_strategy(self):
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
          
