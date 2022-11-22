import rclpy

from rclpy.node import Node

from sensor_msgs.msg import JointState
from urscript_interfaces.srv import UrScript
from urscript_interfaces.srv import GetEefAngleAxis
from std_msgs.msg import String
from std_srvs.srv import Trigger

class JointStateListener(Node):
    def __init__(self):
        # Init parent class
        super().__init__('joint_state_listener')

        # Init QoS
        qos = rclpy.qos.QoSProfile(reliability=rclpy.qos.ReliabilityPolicy.RELIABLE,
                                   durability=rclpy.qos.DurabilityPolicy.VOLATILE,
                                   history=rclpy.qos.HistoryPolicy.SYSTEM_DEFAULT,
                                   depth=10)

        # Init topics subscribers
        self.sub_joint_state = self.create_subscription(JointState,
                                                        'joint_states',
                                                        self.get_joint_state,
                                                        qos)

    def get_joint_state(self, state):
        self.state = state

    def ask_joint_state(self):    
        # Listen once
        rclpy.spin_once(self)

class UrScriptTopicSend(Node):
    def __init__(self):
        # Init parent class
        super().__init__('ur_script_send')

        # Init QoS
        qos = rclpy.qos.QoSProfile(reliability=rclpy.qos.ReliabilityPolicy.RELIABLE,
                                   durability=rclpy.qos.DurabilityPolicy.VOLATILE,
                                   history=rclpy.qos.HistoryPolicy.SYSTEM_DEFAULT,
                                   depth=10)

        # Init publishers
        self.pub_ur_script_send = self.create_publisher(String,
                                                        'urscript',
                                                        qos)

        # Init messages
        self.msg_ur_script = String()

    def send_ur_script(self, ur_script):
        self.msg_ur_script.data = ur_script

        self.pub_ur_script_send.publish(self.msg_ur_script)

        print('Ur script message sent')

class RobotConverse(Node):
    def __init__(self):
        # Init parent class
        super().__init__('robot_comm')

        # Init publishers
        self.pub_ur_script = UrScriptTopicSend()

        # Init listeners
        self.joint_state = JointStateListener()

        # Init services
        self.cli_ur_script = self.create_client(UrScript,
                                                'urscript_service')
        while not self.cli_ur_script.wait_for_service(timeout_sec=1):
            self.get_logger().info('service not available, waiting again...')
        self.cli_eef_angle_axis = self.create_client(GetEefAngleAxis,
                                                     'get_eef_angle_axis')
        while not self.cli_eef_angle_axis.wait_for_service(timeout_sec=1):
            self.get_logger().info('service not available, waiting again...')
        self.cli_power_on = self.create_client(Trigger,
                                               '/dashboard_client/power_on')
        while not self.cli_power_on.wait_for_service(timeout_sec=1):
            self.get_logger().info('service not available, waiting again...')
        self.cli_release_brakes = self.create_client(Trigger,
                                                     '/dashboard_client/brake_release')
        while not self.cli_release_brakes.wait_for_service(timeout_sec=1):
            self.get_logger().info('service not available, waiting again...')

        # Init requests returned from services
        self.req_ur_script = UrScript.Request()
        self.req_eef_angle_axis = GetEefAngleAxis.Request()
        self.req_power_on = Trigger.Request()
        self.req_release_brakes = Trigger.Request()

    def get_joint_state(self):
        self.joint_state.ask_joint_state()
        
        return(self.joint_state.state)

    def send_ur_script(self, script):
        self.req_ur_script.data = script
        
        future = self.cli_ur_script.call_async(self.req_ur_script)

        rclpy.spin_until_future_complete(self,
                                         future)
        
        return future.result()

    def get_eef_angle_axis(self):
        future = self.cli_eef_angle_axis.call_async(self.req_eef_angle_axis)

        rclpy.spin_until_future_complete(self,
                                         future)
        
        return future.result()

    def send_ur_script_via_topic(self, script):
        self.pub_ur_script.send_ur_script(script)

    def power_on_robot(self):        
        future = self.cli_power_on.call_async(self.req_power_on)

        rclpy.spin_until_future_complete(self,
                                         future)
        
        return future.result()

    def release_brakes(self):        
        future = self.cli_release_brakes.call_async(self.req_release_brakes)

        rclpy.spin_until_future_complete(self,
                                         future)
        
        return future.result()

    def destroy(self):
        self.joint_state.destroy_node()
