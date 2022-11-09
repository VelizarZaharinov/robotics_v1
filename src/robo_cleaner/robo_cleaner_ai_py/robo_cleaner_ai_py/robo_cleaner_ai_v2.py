import rclpy

import robo_cleaner_ai_py.communicator as communicator

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

    def destroy(self):
        self.robot_converse.destroy()
        self.robot_converse.destroy_node()

def main(args=None):
    rclpy.init(args=args)

    robot = RobotAi(obstacles=[120, 88, 35],
                    dirtiness=[49, 50, 51],
                    charging_station=64)

    robot.authenticate()

##    robot.explore_map()
##
##    robot.clean()
    
    print('All work done! Yupee!')

    robot.destroy()

    rclpy.shutdown()

if __name__=='__main__':
    main()
