import rclpy
from rclpy.node import Node

from robo_collector_interfaces.msg import RobotMoveType
from robo_collector_interfaces.msg import UserAuthenticate

class GetKeyboardInput:
    def __init__(self):
        # Init the message structure
        self.msg = RobotMoveType()

    def get_user_input(self):
        key_pressed = input()

        if key_pressed=='w':
            self.msg.move_type = self.msg.FORWARD
        elif key_pressed=='a':
            self.msg.move_type = self.msg.ROTATE_LEFT
        elif key_pressed=='d':
            self.msg.move_type = self.msg.ROTATE_RIGHT
        elif key_pressed=='q':
            print('Quitting...')
            self.msg.move_type = 3
        else:
            print('Direction key not recognised! Rotate left by default.')

class RobotPendant(Node):
    def __init__(self):
        # Init parent class
        super().__init__('robot_pendant')

        qos_move = rclpy.qos.QoSProfile(reliability=rclpy.qos.ReliabilityPolicy.RELIABLE,
                                        durability=rclpy.qos.DurabilityPolicy.TRANSIENT_LOCAL,
                                        history=rclpy.qos.HistoryPolicy.SYSTEM_DEFAULT,
                                        depth=10)
        qos_authenticate = rclpy.qos.QoSProfile(reliability=rclpy.qos.ReliabilityPolicy.RELIABLE,
                                                durability=rclpy.qos.DurabilityPolicy.VOLATILE,
                                                history=rclpy.qos.HistoryPolicy.SYSTEM_DEFAULT,
                                                depth=10)

        # Init publisher
        self.publisher_move = self.create_publisher(RobotMoveType,
                                                    'move_type',
                                                    qos_move)
        self.publisher_authenticate = self.create_publisher(UserAuthenticate,
                                                            'user_authenticate',
                                                            qos_authenticate)

        # Init the user input catcher
        self.user_input = GetKeyboardInput()

    def authenticate_user(self):
        msg = UserAuthenticate()

        msg.user = 'Velizar Zaharinov'
        msg.repository = 'https://github.com/VelizarZaharinov/robotics_v1'
        msg.commit_sha = 'TODO'

        self.publisher_authenticate.publish(msg)
        print('Authentication complete')

    def get_direction(self):
        self.user_input.get_user_input()

    def execute_move(self):
        self.publisher_move.publish(self.user_input.msg)

def main(args=None):
    rclpy.init(args=args)

    controller = RobotPendant()

    controller.authenticate_user()
    rclpy.spin_once(controller,
                    timeout_sec=0.5)

    flag = 1
    while flag:
        controller.get_direction()
        if controller.user_input.msg.move_type<3:
            controller.execute_move()
            rclpy.spin_once(controller,
                            timeout_sec=0.5)
        else:
            flag = 0

    controller.destroy_node()

    rclpy.shutdown()

if __name__=='__main__':
    main()
