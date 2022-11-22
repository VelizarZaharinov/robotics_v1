import tkinter

class RoboControl(tkinter.Toplevel):
    def __init__(self, master, app):
        # Save the main app
        self.app = app
        
        # Setup self
        tkinter.Toplevel.__init__(self)
        self.protocol('WM_DELETE_WINDOW',
                      self.close_override)
        self.transient(master)

        # Create controls
        self.create_init_buttons()
        self.create_tower_start_point_settings()
        self.create_tower_layout_settings()
        self.create_table_b_sequence()
        self.create_tower_sequence()
        self.create_speed_settings()
        self.create_gripper_settings()
        self.create_release_height_on_tower_setting()
        self.create_build_interface()

    def create_init_buttons(self):
        frame = tkinter.LabelFrame(self,
                                   bd=2,
                                   text='Initialization')

        power_on = tkinter.Button(frame,
                                  text='Power On',
                                  command=self.power_on_callback)
        release_breaks = tkinter.Button(frame,
                                        text='Release Breaks',
                                        command=self.release_brakes_callback)
        init_gripper = tkinter.Button(frame,
                                      text='Ready Gripper',
                                      command=self.init_gripper_callback)
        open_gripper = tkinter.Button(frame,
                                      text='Open Gripper',
                                      command=self.open_gripper_callback)
        close_gripper = tkinter.Button(frame,
                                       text='Close Gripper',
                                       command=self.close_gripper_callback)
        homing = tkinter.Button(frame,
                                text='Go Home',
                                command=self.home_callback)

        power_on.grid(row=0,
                      column=0)
        release_breaks.grid(row=0,
                            column=1)
        init_gripper.grid(row=0,
                          column=2)
        open_gripper.grid(row=0,
                          column=3)
        close_gripper.grid(row=0,
                           column=4)
        homing.grid(row=0,
                    column=5)
        frame.grid(row=0,
                   column=0)        

    def create_tower_start_point_settings(self):
        frame = tkinter.LabelFrame(self,
                                   bd=2,
                                   text='Start of Tower XY')

        self.first_cube_in_tower_x = tkinter.StringVar()
        self.first_cube_in_tower_y = tkinter.StringVar()
        start_of_tower_x = tkinter.Entry(frame,
                                         textvariable=self.first_cube_in_tower_x)
        start_of_tower_y = tkinter.Entry(frame,
                                         textvariable=self.first_cube_in_tower_y)
        self.first_cube_in_tower_x.set(self.app.points.first_cube_in_tower_over[0])
        self.first_cube_in_tower_y.set(self.app.points.first_cube_in_tower_over[1])

        start_of_tower_x.grid(row=0,
                              column=0)
        start_of_tower_y.grid(row=0,
                              column=1)
        frame.grid(row=1,
                   column=0,
                   sticky='nesw')

    def create_tower_layout_settings(self):
        frame = tkinter.LabelFrame(self,
                                   bd=2,
                                   text='Layout')

        self.layout_xy = tkinter.IntVar()

        along_x = tkinter.Radiobutton(frame,
                                      text='Along X',
                                      value=0,
                                      variable=self.layout_xy,
                                      command=self.layout_callback)
        along_y = tkinter.Radiobutton(frame,
                                      text='Along Y',
                                      value=1,
                                      variable=self.layout_xy,
                                      command=self.layout_callback)
        self.layout_xy.set(1)

        along_x.grid(row=0,
                     column=0)
        along_y.grid(row=0,
                     column=1)
        frame.grid(row=2,
                   column=0,
                   sticky='nesw')

    def create_table_b_sequence(self):
        frame = tkinter.LabelFrame(self,
                                   bd=2,
                                   text='Sequence Table B')

        self.sequence_table_b = tkinter.StringVar()

        sequence = tkinter.Entry(frame,
                                 textvariable=self.sequence_table_b,
                                 width=68)

        sequence_string = ''
        for box in self.app.points.box_sequence_b:
            sequence_string += (box+' ')

        self.sequence_table_b.set(sequence_string)

        sequence.grid(row=0,
                      column=0)
        frame.grid(row=3,
                   column=0,
                   sticky='nesw')

    def create_tower_sequence(self):
        frame = tkinter.LabelFrame(self,
                                   bd=2,
                                   text='Sequence Tower')

        self.tower_sequence = tkinter.StringVar()

        sequence = tkinter.Entry(frame,
                                 textvariable=self.tower_sequence,
                                 width=68)

        sequence_string = ''
        for box in self.app.points.tower_sequence:
            sequence_string += (box['name']+' ')

        self.tower_sequence.set(sequence_string)

        sequence.grid(row=0,
                      column=0)
        frame.grid(row=4,
                   column=0,
                   sticky='nesw')

    def create_speed_settings(self):
        frame = tkinter.LabelFrame(self,
                                   bd=2,
                                   text='Speed and Acceleration')

        self.slow_speed = tkinter.StringVar()
        self.fast_speed = tkinter.StringVar()
        self.accel = tkinter.StringVar()
        slow_speed = tkinter.Entry(frame,
                                   textvariable=self.slow_speed)
        fast_speed = tkinter.Entry(frame,
                                   textvariable=self.fast_speed)
        accel = tkinter.Entry(frame,
                              textvariable=self.accel)

        self.slow_speed.set(self.app.robot.slow_speed)
        self.fast_speed.set(self.app.robot.fast_speed)
        self.accel.set(self.app.robot.accel)

        slow_speed.grid(row=0,
                        column=0)
        fast_speed.grid(row=0,
                        column=1)
        accel.grid(row=0,
                   column=2)
        frame.grid(row=5,
                   column=0,
                   sticky='nesw')

    def create_gripper_settings(self):
        frame = tkinter.LabelFrame(self,
                                   bd=2,
                                   text='Enable Gripper and Set Force')

        self.enable_gripper = tkinter.IntVar()
        use_gripper = tkinter.Checkbutton(frame,
                                          command=self.enable_gripper_callback,
                                          text='Enable Gripper',
                                          variable=self.enable_gripper)
        self.enable_gripper.set(0)

        self.gripper_force = tkinter.StringVar()
        grip_force = tkinter.Entry(frame,
                                   textvariable=self.gripper_force)
        self.gripper_force.set(self.app.robot.gripper_force)

        use_gripper.grid(row=0,
                         column=0)
        grip_force.grid(row=0,
                        column=1)
        frame.grid(row=6,
                   column=0,
                   sticky='nesw')

    def create_release_height_on_tower_setting(self):
        frame = tkinter.LabelFrame(self,
                                   bd=2,
                                   text='Release height on tower')

        self.release_height_tower = tkinter.StringVar()
        release_height = tkinter.Entry(frame,
                                       textvariable=self.release_height_tower)
        self.release_height_tower.set(self.app.points.release_on_tower)

        release_height.grid(row=0,
                            column=0)
        frame.grid(row=7,
                   column=0,
                   sticky='nesw')

    def create_build_interface(self):
        frame = tkinter.LabelFrame(self,
                                   bd=2,
                                   text='Building the Tower')
        frame.rowconfigure(0,
                           weight=1)
        frame.columnconfigure(0,
                              weight=1)

        build = tkinter.Button(frame,
                               text='BUILD',
                               command=self.build_callback)

        build.grid(row=0,
                   column=0,
                   sticky='nesw')
        frame.grid(row=8,
                   column=0,
                   sticky='nesw')

    def power_on_callback(self):
        result = self.app.robot.robot_converse.power_on_robot()

        if not result.success:
            print(result.message)
        else:
            print('Successfully powered on!')

    def release_brakes_callback(self):
        result = self.app.robot.robot_converse.release_brakes()

        if not result.success:
            print(result.message)
        else:
            print('Successfully released brakes!')

    def init_gripper_callback(self):
        if self.app.robot.gripper_connected:
            self.app.robot.gripper_force = int(self.gripper_force.get())
            self.app.robot.init_gripper()

    def open_gripper_callback(self):
        if self.app.robot.gripper_connected:
            self.app.robot.open_gripper()

    def close_gripper_callback(self):
        if self.app.robot.gripper_connected:
            self.app.robot.close_gripper()

    def home_callback(self):
        speed = float(self.slow_speed.get())
        self.app.robot.home_ta(speed)

    def layout_callback(self):
        if self.layout_xy.get():
            self.app.points.preset_along_y()
            self.app.place_cubes_on_table_a(layout='y')
        else:
            self.app.points.preset_along_x()
            self.app.place_cubes_on_table_a(layout='x')
            
        self.first_cube_in_tower_x.set(self.app.points.first_cube_in_tower_over[0])
        self.first_cube_in_tower_y.set(self.app.points.first_cube_in_tower_over[1])

    def enable_gripper_callback(self):
        if self.enable_gripper.get():
            self.app.robot.gripper_connected = True
        else:
            self.app.robot.gripper_connected = False

    def build_callback(self):
        self.get_user_input()

    def get_user_input(self):        
        # Get tower start position
        self.app.points.first_cube_in_tower_over[0] = float(self.first_cube_in_tower_x.get())
        self.app.points.first_cube_in_tower_over[1] = float(self.first_cube_in_tower_y.get())

        # Get table B sequence
        seq_b = self.sequence_table_b.get()
        seq_b_split = seq_b.split()
        self.app.points.box_sequence_b = seq_b_split[:]

        # Get speed and acceleration
        self.app.robot.slow_speed = float(self.slow_speed.get())
        self.app.robot.fast_speed = float(self.fast_speed.get())
        self.app.robot.accel = float(self.accel.get())

        # Get gripper settings
        if self.enable_gripper.get():
            self.app.robot.gripper_connected = True
            self.app.robot.gripper_force = int(self.gripper_force.get())
        else:
            self.app.robot.gripper_connected = False

        # Get height release over tower setting
        self.app.points.release_on_tower = float(self.release_height_tower.get())

        # Build tower
        if self.layout_xy.get():
            # Along Y
            self.app.points.preset_along_y()
            # Get tower sequence
##            seq_tower = self.tower_sequence.get()
##            seq_tower_split = seq_tower.split()
##            new_tower_seq = []
##            for box in seq_tower_split:
##                for i in range(len(self.app.points.tower_sequence)):
##                    if self.app.points.tower_sequence[i]['name']==box:
##                        new_tower_seq.append(self.app.points.tower_sequence[i])
##                        break
##            self.app.points.tower_sequence = new_tower_seq
            self.app.robot.build_tower_y(self.app.points)
        else:
            # Along X
            self.app.points.preset_along_x()
            # Get tower sequence
##            seq_tower = self.tower_sequence.get()
##            seq_tower_split = seq_tower.split()
##            new_tower_seq = []
##            for box in seq_tower_split:
##                for i in range(len(self.app.points.tower_sequence)):
##                    if self.app.points.tower_sequence[i]['name']==box:
##                        new_tower_seq.append(self.app.points.tower_sequence[i])
##                        break
##            self.app.points.tower_sequence = new_tower_seq
            self.app.robot.build_tower_x(self.app.points)

    def close_override(self):
        pass
