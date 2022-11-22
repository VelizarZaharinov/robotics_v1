import math

import rclpy

import robo_builder_py.communicator as communicator

class RobotAi:
    def __init__(self, home_pos=[]):
        self.home_pos = home_pos

        # Init robot talker
        self.robot_converse = communicator.RobotConverse()

    def movel(self, pose, accel=1.2, vel=0.25, time=0, radius=0):
        command_string = 'movel(['
        for i in range(len(pose)-1):
            command += (str(pose[i])+',')
        command += (str(pose[i])+'],'+str(accel)+','+str(vel)+','+str(time)+','+str(radius)+')')

        return command_string

    def destroy(self):
        pass

def main(args=None):
    rclpy.init(args=args)

    robot = RobotAi()

    print(robot.movel(math.radians(-90),
                      math.radians(-90),
                      math.radians(-90),
                      math.radians(-90),
                      math.radians(90),
                      0))
    
    print('All work done! Yupee!')

    robot.destroy()

    rclpy.shutdown()

if __name__=='__main__':
    main()
