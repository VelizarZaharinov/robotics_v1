import random

import rclpy
from rclpy.node import Node
from rclpy.action import ActionClient

from robo_cleaner_interfaces.action import RobotMove

from robo_cleaner_interfaces.msg import UserAuthenticate
from robo_cleaner_interfaces.msg import RobotMoveType

from robo_cleaner_interfaces.srv import QueryInitialRobotState
from robo_cleaner_interfaces.srv import QueryBatteryStatus
from robo_cleaner_interfaces.srv import ChargeBattery

class MoveAction(Node):
    def __init__(self, obstacles):
        # Init parent class
        super().__init__('move_action')

        # Obstacles
        self.obstacles = obstacles

        # Feedback result
        self.move_feedback = None

        # Result from moving forward
        self.move_result = None

        # Init actions
        self.act_move = ActionClient(self,
                                     RobotMove,
                                     'move_robot')

        # Init action goals
        self.goal_move = RobotMove.Goal()

        # Init messages
        self.msg_move = RobotMoveType()

    def move_forward(self):
        self.msg_move.move_type = 0
        self.goal_move.robot_move_type = self.msg_move

        self.act_move.wait_for_server()
        
        send_goal_future = self.act_move.send_goal_async(self.goal_move,
                                                         feedback_callback=self.move_forward_feedback)

        rclpy.spin_until_future_complete(self,
                                         send_goal_future)

        self.goal_handle = send_goal_future.result()

        if not self.goal_handle.accepted:
            print('Move forward rejected')
        else:
            print('Move forward accepted')
            get_result_future = self.goal_handle.get_result_async()
            rclpy.spin_until_future_complete(self,
                                             get_result_future)

    def move_forward_feedback(self, feedback_msg):
        feedback = feedback_msg.feedback
        self.move_feedback = feedback.approaching_field_marker
        if self.move_feedback in self.obstacles:
            future = self.goal_handle.cancel_goal_async()
            print('Move cancelled due to obstacle')
            future.add_done_callback(self.cancel_move_done)

    def move_rot_left(self):
        self.msg_move.move_type = 1
        self.goal_move.robot_move_type = self.msg_move

        self.act_move.wait_for_server()
        
        send_goal_future = self.act_move.send_goal_async(self.goal_move)

        rclpy.spin_until_future_complete(self,
                                         send_goal_future)

        goal_handle = send_goal_future.result()

        if not goal_handle.accepted:
            print('Move rotate left rejected')
        else:
            print('Move rotate left accepted')
            get_result_future = goal_handle.get_result_async()
            rclpy.spin_until_future_complete(self,
                                             get_result_future)

    def move_rot_right(self):
        self.msg_move.move_type = 2
        self.goal_move.robot_move_type = self.msg_move

        self.act_move.wait_for_server()
        
        send_goal_future = self.act_move.send_goal_async(self.goal_move)

        rclpy.spin_until_future_complete(self,
                                         send_goal_future)

        goal_handle = send_goal_future.result()

        if not goal_handle.accepted:
            print('Move rotate right rejected')
        else:
            print('Move rotate right accepted')
            get_result_future = goal_handle.get_result_async()
            rclpy.spin_until_future_complete(self,
                                             get_result_future)

    def cancel_move_done(self, future):
        print('Cancel done')

    def destroy(self):
        self.act_move.destroy()
        self.destroy_node()
        
class RobotConverse(Node):
    def __init__(self, obstacles):
        # Init parent class
        super().__init__('robot_ai')

        # Obstacles
        self.obstacles = obstacles

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
        self.cli_initial_state = self.create_client(QueryInitialRobotState,
                                                    'query_initial_robot_state')
        while not self.cli_initial_state.wait_for_service(timeout_sec=1):
            self.get_logger().info('service not available, waiting again...')
        self.cli_battery_status = self.create_client(QueryBatteryStatus,
                                                     'query_battery_status')
        while not self.cli_battery_status.wait_for_service(timeout_sec=1):
            self.get_logger().info('service not available, waiting again...')
        self.cli_charge_battery = self.create_client(ChargeBattery,
                                                     'charge_battery')
        while not self.cli_charge_battery.wait_for_service(timeout_sec=1):
            self.get_logger().info('service not available, waiting again...')

        # Init requests returned from services
        self.req_initial_state = QueryInitialRobotState.Request()
        self.req_battery_status = QueryBatteryStatus.Request()
        self.req_charge_battery = ChargeBattery.Request()

        # Init the action client
        self.move_action = MoveAction(self.obstacles)

    def authenticate_user(self):
        msg = UserAuthenticate()

        msg.user = 'Velizar Zaharinov'
        msg.repository = 'https://github.com/VelizarZaharinov/robotics_v1'
        msg.commit_sha = 'TODO'

        self.pub_authenticate.publish(msg)
        print('Authentication complete')

    def request_initial_state(self):
        future = self.cli_initial_state.call_async(self.req_initial_state)
        rclpy.spin_until_future_complete(self,
                                         future)
        
        return future.result()

    def move_forward(self):
        self.move_action.move_forward()

        return self.move_action.move_feedback

    def move_rot_left(self):
        self.move_action.move_rot_left()

    def move_rot_right(self):
        self.move_action.move_rot_right()

    def ask_battery_state(self):
        future = self.cli_battery_status.call_async(self.req_battery_status)
        rclpy.spin_until_future_complete(self,
                                         future)

        return future.result()

    def request_charge(self):
        self.req_charge_battery.charge_turns = self.req_charge_battery.CHARGE_UNTIL_FULL
        future = self.cli_charge_battery.call_async(self.req_charge_battery)
        rclpy.spin_until_future_complete(self,
                                         future)

    def destroy(self):
        self.move_action.destroy()
