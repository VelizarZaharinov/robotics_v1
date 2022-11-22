import rclpy

from rclpy.node import Node

from ur_dev.urscript.urscript_interfaces.srv import UrScript

class RobotConverse(Node):
    def __init__(self):
        # Init parent class
        super().__init__('robot_comm')

        # Init services
        self.cli_ur_script = self.create_client(UrScript,
                                                'send_ur_commands')
        while not self.cli_ur_script.wait_for_service(timeout_sec=1):
            self.get_logger().info('service not available, waiting again...')

        # Init requests returned from services
        self.req_ur_script = UrScript.Request()

    def send_ur_script(self, script):
        self.req_ur_script.data = script
        
        future = self.cli_ur_script.call_async(self.req_ur_script)

        rclpy.spin_until_future_complete(self,
                                         future)
        
        return future.result()
