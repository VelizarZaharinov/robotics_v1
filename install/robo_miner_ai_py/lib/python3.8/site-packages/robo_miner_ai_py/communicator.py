import random

import rclpy
from rclpy.node import Node

from robo_miner_interfaces.msg import UserAuthenticate
from robo_miner_interfaces.msg import RobotMoveType
from robo_miner_interfaces.msg import UInt8MultiArray
from robo_miner_interfaces.msg import FieldPoint

from robo_miner_interfaces.srv import QueryInitialRobotPosition
from robo_miner_interfaces.srv import RobotMove
from robo_miner_interfaces.srv import FieldMapValidate
from robo_miner_interfaces.srv import LongestSequenceValidate
from robo_miner_interfaces.srv import ActivateMiningValidate

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
        self.cli_map_validate = self.create_client(FieldMapValidate,
                                                   'field_map_validate')
        while not self.cli_map_validate.wait_for_service(timeout_sec=1):
            self.get_logger().info('service not available, waiting again...')
        self.cli_longest_sequence_validate = self.create_client(LongestSequenceValidate,
                                                                'longest_sequence_validate')
        while not self.cli_longest_sequence_validate.wait_for_service(timeout_sec=1):
            self.get_logger().info('service not available, waiting again...')
        self.cli_activate_mining = self.create_client(ActivateMiningValidate,
                                                      'activate_mining_validate')
        while not self.cli_activate_mining.wait_for_service(timeout_sec=1):
            self.get_logger().info('service not available, waiting again...')

        # Init requests returned from services
        self.req_initial_position = QueryInitialRobotPosition.Request()
        self.req_move = RobotMove.Request()
        self.req_map_validate = FieldMapValidate.Request()
        self.req_longest_sequence_validate = LongestSequenceValidate.Request()
        self.req_activate_mining = ActivateMiningValidate.Request()

        # Init messages
        self.msg_move = RobotMoveType()
        self.msg_uint8_multi_array = UInt8MultiArray()

    def authenticate_user(self):
        msg = UserAuthenticate()

        msg.user = 'Velizar Zaharinov'
        msg.repository = 'https://github.com/VelizarZaharinov/robotics_v1'
        msg.commit_sha = 'ab7494a97625d9764c4a41bea0b31efa5eb4db91'

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

    def map_validate(self, explored_map):
        self.msg_uint8_multi_array.rows = len(explored_map)
        self.msg_uint8_multi_array.cols = len(explored_map[0])
        # Make 2D map into 1D
        map_1D = []
        for i in range(self.msg_uint8_multi_array.rows):
            for j in range(self.msg_uint8_multi_array.cols):
                map_1D.append(int(explored_map[i][j]))

        self.msg_uint8_multi_array.data = map_1D
                
        self.req_map_validate.field_map = self.msg_uint8_multi_array
        future = self.cli_map_validate.call_async(self.req_map_validate)
        rclpy.spin_until_future_complete(self,
                                         future)

        return future.result()

    def longest_sequence_validate(self, longest_sequence_points):
        for i in range(len(longest_sequence_points)):
            self.req_longest_sequence_validate.sequence_points.append(FieldPoint())
            self.req_longest_sequence_validate.sequence_points[-1].row = longest_sequence_points[i][1]
            self.req_longest_sequence_validate.sequence_points[-1].col = longest_sequence_points[i][0]

        future = self.cli_longest_sequence_validate.call_async(self.req_longest_sequence_validate)
        rclpy.spin_until_future_complete(self,
                                         future)

        return future.result()

    def activate_mining(self):
        future = self.cli_activate_mining.call_async(self.req_activate_mining)
        rclpy.spin_until_future_complete(self,
                                         future)

        return future.result()
