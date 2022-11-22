import os
import time

import rclpy

import robo_builder_py.communicator as communicator

class RobotAi:
    def __init__(self, app):
        rclpy.init()
        
        # Settings
        self.gripper_connected = False
        self.fast_speed = 0.5
        self.slow_speed = 0.25
        self.accel = 1.2
        self.gripper_force = 5

        # Init robot talker
        self.robot_converse = communicator.RobotConverse()

        # Save app
        self.app = app

    def get_joint_state(self):
        state_data = self.robot_converse.get_joint_state()

        self.joint_names = state_data.name[:]
        self.joint_pos = state_data.position[:]

    def home_ta(self, speed, accel):
        ur_script = 'def home_ta():\n'
            
        ur_script += self.movej(self.app.points.home_pos_ta_joints_list,
                                vel=speed,
                                accel=accel)

        ur_script += 'end\n'

        print('Sending ur script...')
        print(ur_script)

        result = self.robot_converse.send_ur_script(ur_script)
        if not result.success:
            print(result.error_reason)

        print('Homing table A side done')

    def home_tb(self, speed, accel):
        ur_script = 'def home_tb():\n'
        
        ur_script += self.movej(self.app.points.home_pos_tb_joints_list,
                                vel=speed,
                                accel=accel)

        ur_script += 'end\n'

        print('Sending ur script...')
        print(ur_script)

        result = self.robot_converse.send_ur_script(ur_script)
        if not result.success:
            print(result.error_reason)

        print('Homing table B side done')

    def movej(self, pose, accel=2.4, vel=0.5, time=0, radius=0):
        command_string = '  movej(['
        for i in range(len(pose)-1):
            command_string += (str(pose[i])+', ')
        command_string += (str(pose[i+1])+'], a='+str(accel)+', v='+str(vel)+', t='+str(time)+', r='+str(radius)+')\n')

        return command_string

    def movel(self, pose, accel=1.2, vel=0.25, time=0, radius=0):
        command_string = '  movel(p['
        for i in range(len(pose)-1):
            command_string += (str(pose[i])+', ')
        command_string += (str(pose[i+1])+'], a='+str(accel)+', v='+str(vel)+', t='+str(time)+', r='+str(radius)+')\n')

        return command_string

    def build_tower_y(self, points):
##        self.app.points = points
        print(self.app.points.first_cube_in_tower_over[0], self.app.points.first_cube_in_tower_over[1])
        # Ensure the gripper is open before starting building        
        if self.gripper_connected:
            self.open_gripper()
            
        for i in range(len(self.app.points.box_sequence_b)):
            if i<10:
                print('Building stairs along Y...')
                # Mark the target on table B
                if self.app.points.box_sequence_b[i] in ['box10', 'box11', 'box12', 'box13', 'box14']:
                    self.app.table_b_lvl2.itemconfigure(self.app.points.box_sequence_b[i],
                                                        fill='green')
                    self.app.table_b_lvl2.update_idletasks()
                else:
                    self.app.table_b_lvl1.itemconfigure(self.app.points.box_sequence_b[i],
                                                        fill='green')
                    self.app.table_b_lvl1.update_idletasks()
                    
                # Go to home table A side as a safe position
                if i:
                    self.home_ta(self.fast_speed,
                                 self.accel)
                    
                # Go to home table B side as a safe position
                self.home_tb(self.fast_speed,
                             self.accel)
                
                # From currrent position go over the current box on table B
                self.move_over_box(self.app.points.box_sequence_b[i])

                # Position for gripping
                self.move_to_grip(self.app.points.box_sequence_b[i])

                # Grip
                if self.gripper_connected:
                    self.close_gripper()

                # Mark that the box is no longer on table B
                if self.app.points.box_sequence_b[i] in ['box10', 'box11', 'box12', 'box13', 'box14']:
                    self.app.table_b_lvl2.itemconfigure(self.app.points.box_sequence_b[i],
                                                        fill='red')
                    self.app.table_b_lvl2.update_idletasks()
                else:
                    self.app.table_b_lvl1.itemconfigure(self.app.points.box_sequence_b[i],
                                                        fill='red')
                    self.app.table_b_lvl1.update_idletasks()

                # Lift the box off table B
                self.move_over_box(self.app.points.box_sequence_b[i])

                # Go to home table B side as a safe position
                self.home_tb(self.fast_speed,
                             self.accel)

                # Go to home table A side as a safe position
                self.home_ta(self.fast_speed,
                             self.accel)

                # Move over the current box in the tower
                self.move_over_tower_low(self.app.points.tower_sequence[i],
                                         i)

                # Go to release position on the tower
                self.move_to_release_tower_low(self.app.points.tower_sequence[i],
                                               i)

                # Release
                if self.gripper_connected:
                    self.open_gripper()

                # Mark that the box is on the tower
                self.app.tower.itemconfigure(self.app.points.tower_sequence[i]['name'],
                                             fill='green')
                self.app.tower.update_idletasks()

                # Lift over last placed box on tower
                self.move_over_tower_low(self.app.points.tower_sequence[i],
                                         i)
            else:
                print('Building tower...')
                # Mark the target on table B
                if self.app.points.box_sequence_b[i] in ['box10', 'box11', 'box12', 'box13', 'box14']:
                    self.app.table_b_lvl2.itemconfigure(self.app.points.box_sequence_b[i],
                                                        fill='green')
                    self.app.table_b_lvl2.update_idletasks()
                else:
                    self.app.table_b_lvl1.itemconfigure(self.app.points.box_sequence_b[i],
                                                        fill='green')
                    self.app.table_b_lvl1.update_idletasks()
                    
                # Go to home as a safe position
                self.home_ta(self.fast_speed,
                             self.accel)

                # Go to home table B side as a safe position
                self.home_tb(self.fast_speed,
                             self.accel)
                
                # From currrent position go over the current box on table B
                self.move_over_box(self.app.points.box_sequence_b[i])

                # Position for gripping
                self.move_to_grip(self.app.points.box_sequence_b[i])

                # Grip
                if self.gripper_connected:
                    self.close_gripper()

                # Mark that the box is no longer on table B
                if self.app.points.box_sequence_b[i] in ['box10', 'box11', 'box12', 'box13', 'box14']:
                    self.app.table_b_lvl2.itemconfigure(self.app.points.box_sequence_b[i],
                                                        fill='red')
                    self.app.table_b_lvl2.update_idletasks()
                else:
                    self.app.table_b_lvl1.itemconfigure(self.app.points.box_sequence_b[i],
                                                        fill='red')
                    self.app.table_b_lvl1.update_idletasks()

                # Lift the box off table B
                self.move_over_box(self.app.points.box_sequence_b[i])

                # Go to home table B side as a safe position
                self.home_tb(self.fast_speed,
                             self.accel)

                # Go to home as a safe position
                self.home_ta(self.fast_speed,
                             self.accel)

                # Rotate wrist 1 so the hand can position the box sideways
                self.orient_box_sideways()

                # Move over the current box in the tower
                self.move_over_tower_low(self.app.points.tower_sequence[i],
                                         i)

                # Go to release position on the tower
                self.move_to_release_tower_low(self.app.points.tower_sequence[i],
                                               i)

                # Release
                if self.gripper_connected:
                    self.open_gripper()

                # Mark that the box is on the tower
                self.app.tower.itemconfigure(self.app.points.tower_sequence[i]['name'],
                                             fill='green')
                self.app.tower.update_idletasks()

                # Lift over last placed box on tower
                self.move_away_horizontally(self.app.points.tower_sequence[i])

    def build_tower_x(self, points):
##        self.app.points = points
        
        # Ensure the gripper is open before starting building
        if self.gripper_connected:
            self.open_gripper()
            
        for i in range(len(self.app.points.box_sequence_b)):
            if i<9:
                print('Building stairs along X...')
                # Mark the target on table B
                if self.app.points.box_sequence_b[i] in ['box10', 'box11', 'box12', 'box13', 'box14']:
                    self.app.table_b_lvl2.itemconfigure(self.app.points.box_sequence_b[i],
                                                        fill='green')
                    self.app.table_b_lvl2.update_idletasks()
                else:
                    self.app.table_b_lvl1.itemconfigure(self.app.points.box_sequence_b[i],
                                                        fill='green')
                    self.app.table_b_lvl1.update_idletasks()
                    
                # Go to home table A side as a safe position
                self.home_ta(self.fast_speed,
                             self.accel)
                    
                # Go to home table B side as a safe position
                self.home_tb(self.fast_speed,
                             self.accel)
                
                # From currrent position go over the current box on table B
                self.move_over_box(self.app.points.box_sequence_b[i])

                # Position for gripping
                self.move_to_grip(self.app.points.box_sequence_b[i])

                # Grip
                if self.gripper_connected:
                    self.close_gripper()

                # Mark that the box is no longer on table B
                if self.app.points.box_sequence_b[i] in ['box10', 'box11', 'box12', 'box13', 'box14']:
                    self.app.table_b_lvl2.itemconfigure(self.app.points.box_sequence_b[i],
                                                        fill='red')
                    self.app.table_b_lvl2.update_idletasks()
                else:
                    self.app.table_b_lvl1.itemconfigure(self.app.points.box_sequence_b[i],
                                                        fill='red')
                    self.app.table_b_lvl1.update_idletasks()

                # Lift the box off table B
                self.move_over_box(self.app.points.box_sequence_b[i])

                # Go to home table B side as a safe position
                self.home_tb(self.fast_speed,
                             self.accel)

                # Go to home table A side as a safe position
                self.home_ta(self.fast_speed,
                             self.accel)

                # Move over the current box in the tower
                self.move_over_tower_low(self.app.points.tower_sequence[i],
                                         i)

                # Go to release position on the tower
                self.move_to_release_tower_low(self.app.points.tower_sequence[i],
                                               i)

                # Release
                if self.gripper_connected:
                    self.open_gripper()

                # Mark that the box is on the tower
                self.app.tower.itemconfigure(self.app.points.tower_sequence[i]['name'],
                                             fill='green')
                self.app.tower.update_idletasks()

                # Lift over last placed box on tower
                self.move_over_tower_low(self.app.points.tower_sequence[i],
                                         i)
            else:
                print('Building tower...')
                # Mark the target on table B
                if self.app.points.box_sequence_b[i] in ['box10', 'box11', 'box12', 'box13', 'box14']:
                    self.app.table_b_lvl2.itemconfigure(self.app.points.box_sequence_b[i],
                                                        fill='green')
                    self.app.table_b_lvl2.update_idletasks()
                else:
                    self.app.table_b_lvl1.itemconfigure(self.app.points.box_sequence_b[i],
                                                        fill='green')
                    self.app.table_b_lvl1.update_idletasks()
                    
                # Go to home table B side as a safe position
                self.home_tb(self.fast_speed,
                             self.accel)
                
                # From currrent position go over the current box on table B
                self.move_over_box(self.app.points.box_sequence_b[i])

                # Position for gripping
                self.move_to_grip(self.app.points.box_sequence_b[i])

                # Grip
                if self.gripper_connected:
                    self.close_gripper()

                # Mark that the box is no longer on table B
                if self.app.points.box_sequence_b[i] in ['box10', 'box11', 'box12', 'box13', 'box14']:
                    self.app.table_b_lvl2.itemconfigure(self.app.points.box_sequence_b[i],
                                                        fill='red')
                    self.app.table_b_lvl2.update_idletasks()
                else:
                    self.app.table_b_lvl1.itemconfigure(self.app.points.box_sequence_b[i],
                                                        fill='red')
                    self.app.table_b_lvl1.update_idletasks()

                # Lift the box off table B
                self.move_over_box(self.app.points.box_sequence_b[i])

                # Go to home table B side as a safe position
                self.home_tb(self.fast_speed,
                             self.accel)

                # Rotate wrist 1 so the hand can position the box sideways
##                self.orient_box_sideways()

                # Move over the current box in the tower
                self.move_over_tower_low(self.app.points.tower_sequence[i],
                                         i)

                # Go to release position on the tower
                self.move_to_release_tower_low(self.app.points.tower_sequence[i],
                                               i)

                # Release
                if self.gripper_connected:
                    self.open_gripper()

                # Mark that the box is on the tower
                self.app.tower.itemconfigure(self.app.points.tower_sequence[i]['name'],
                                             fill='green')
                self.app.tower.update_idletasks()

                # Lift over last placed box on tower
                self.move_away_horizontally(self.app.points.tower_sequence[i])
        self.blink_tower()

    def move_over_box(self, box):
        eef_angle_axis = self.robot_converse.get_eef_angle_axis()
        
        ur_script = 'def move_over_'+box+'():\n'

        pos_vector = self.app.points.over_tb[box][:]
        pos_vector.append(eef_angle_axis.angle_axis.x)
        pos_vector.append(eef_angle_axis.angle_axis.y)
        pos_vector.append(eef_angle_axis.angle_axis.z)

        ur_script += self.movel(pos_vector,
                                vel=self.fast_speed,
                                accel=self.accel)

        ur_script += 'end\n'

        print('Sending ur script...')
        print(ur_script)

        result = self.robot_converse.send_ur_script(ur_script)
        if not result.success:
            print(result.error_reason)

        print('Move over %s done'%(box))

    def move_to_grip(self, box):
        eef_angle_axis = self.robot_converse.get_eef_angle_axis()
        
        ur_script = 'def move_to_grip_'+box+'():\n'

        pos_vector = self.app.points.to_grip_tb[box][:]
        pos_vector.append(eef_angle_axis.angle_axis.x)
        pos_vector.append(eef_angle_axis.angle_axis.y)
        pos_vector.append(eef_angle_axis.angle_axis.z)

        ur_script += self.movel(pos_vector,
                                vel=self.slow_speed,
                                accel=self.accel)

        ur_script += 'end\n'

        print('Sending ur script...')
        print(ur_script)

        result = self.robot_converse.send_ur_script(ur_script)
        if not result.success:
            print(result.error_reason)

        print('Move to grip %s done'%(box))

    def move_over_tower_low(self, box_tower, i):
        eef_angle_axis = self.robot_converse.get_eef_angle_axis()
        
        ur_script = 'def move_over_tower_low_box_'+str(i)+'():\n'

        pos_vector = box_tower['over'][:]
        pos_vector.append(eef_angle_axis.angle_axis.x)
        pos_vector.append(eef_angle_axis.angle_axis.y)
        pos_vector.append(eef_angle_axis.angle_axis.z)

        ur_script += self.movel(pos_vector,
                                vel=self.fast_speed,
                                accel=self.accel)

        ur_script += 'end\n'

        print('Sending ur script...')
        print(ur_script)

        result = self.robot_converse.send_ur_script(ur_script)
        if not result.success:
            print(result.error_reason)

        print('Move over tower box %d done'%(i))

    def move_to_release_tower_low(self, box_tower, i):
        eef_angle_axis = self.robot_converse.get_eef_angle_axis()
        
        ur_script = 'def move_to_release_tower_low_box_'+str(i)+'():\n'

        pos_vector = box_tower['release'][:]
        pos_vector.append(eef_angle_axis.angle_axis.x)
        pos_vector.append(eef_angle_axis.angle_axis.y)
        pos_vector.append(eef_angle_axis.angle_axis.z)

        ur_script += self.movel(pos_vector,
                                vel=self.slow_speed,
                                accel=self.accel)

        ur_script += 'end\n'

        print('Sending ur script...')
        print(ur_script)

        result = self.robot_converse.send_ur_script(ur_script)
        if not result.success:
            print(result.error_reason)

        print('Move over tower box %d done'%(i))

    def init_gripper(self):
        script_path = os.getcwd()
        script_path = os.path.join(script_path,
                                   'src/robo_builder_py/robo_builder_py/init_gripper.script')

        script_file = open(script_path,
                           'r')

        script = ''
        for line in script_file:
            if 'rq_set_force_norm (5)' in line:
                script += ('  rq_set_force_norm ('+str(self.gripper_force)+')\n')
            else:
                script += line

        script_file.close()

        result = self.robot_converse.send_ur_script(script)
        if not result.success:
            print(result.error_reason)

        print('Gripper initialized')

    def open_gripper(self):
        script_path = os.getcwd()
        script_path = os.path.join(script_path,
                                   'src/robo_builder_py/robo_builder_py/open_gripper.script')

        script_file = open(script_path,
                           'r')

        script = ''
        for line in script_file:
            script += line

        script_file.close()

        result = self.robot_converse.send_ur_script(script)
        if not result.success:
            print(result.error_reason)

        print('Gripper opened')

    def close_gripper(self):
        script_path = os.getcwd()
        script_path = os.path.join(script_path,
                                   'src/robo_builder_py/robo_builder_py/close_gripper.script')

        script_file = open(script_path,
                           'r')

        script = ''
        for line in script_file:
            script += line

        script_file.close()

        result = self.robot_converse.send_ur_script(script)
        if not result.success:
            print(result.error_reason)

        print('Gripper closed')

    def orient_box_sideways(self):
        ur_script = 'def orient_horizontally():\n'

        ur_script += self.movej(self.app.points.high_tower_pos_joints_list,
                                vel=self.fast_speed,
                                accel=self.accel)
        # Alternative
##        ur_script += self.movej(points.high_tower_pos_joints_list_2,
##                                vel=self.slow_speed)

        ur_script += 'end\n'

        print('Sending ur script...')
        print(ur_script)

        result = self.robot_converse.send_ur_script(ur_script)
        if not result.success:
            print(result.error_reason)

        print('Orienting horizontally done')

    def move_away_horizontally(self, box_tower):
        eef_angle_axis = self.robot_converse.get_eef_angle_axis()
        
        ur_script = 'def move_away_horizontally():\n'

        pos_vector = box_tower['over'][:]
        pos_vector[1] += self.app.points.cube_size
        pos_vector.append(eef_angle_axis.angle_axis.x)
        pos_vector.append(eef_angle_axis.angle_axis.y)
        pos_vector.append(eef_angle_axis.angle_axis.z)

        ur_script += self.movel(pos_vector,
                                vel=self.fast_speed,
                                accel=self.accel)

        ur_script += 'end\n'

        print('Sending ur script...')
        print(ur_script)

        result = self.robot_converse.send_ur_script(ur_script)
        if not result.success:
            print(result.error_reason)

        print('Moved away')

    def blink_tower(self):
        for i in range(3):
            for j in range(len(self.app.points.tower_sequence)):
                self.app.tower.itemconfigure(self.app.points.tower_sequence[j]['name'],
                                             fill='')
            time.sleep(2)
            for j in range(len(self.app.points.tower_sequence)):
                self.app.tower.itemconfigure(self.app.points.tower_sequence[j]['name'],
                                             fill='green')
            time.sleep(2)

    def destroy(self):
        self.robot_converse.destroy()
        self.robot_converse.destroy_node()
        
        rclpy.shutdown()
