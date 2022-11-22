class Points:
    def __init__(self):
        self.cube_size = 0.110

        self.ta_points = {'a1':[-0.400, -0.970, -0.080, 0.450],
                          'a2':[-0.400, -0.280, -0.080, 0.800],
                          'a3':[0.180, -0.280, -0.080, 0.800],
                          'a4':[0.180, -0.970, -0.080, 0.450]}

        self.safe_height_over = 0.170
        self.grip_height_first_floor = -0.060
        self.grip_height_second_floor = 0.050
        self.release_on_tower = -0.060

        self.over_tb = {'box1':[0.491, -0.134, self.safe_height_over],
                        'box2':[0.487, 0.042, self.safe_height_over],
                        'box3':[0.491, 0.240, self.safe_height_over],
                        'box4':[0.690, -0.143, self.safe_height_over],
                        'box5':[0.701, 0.039, self.safe_height_over],
                        'box6':[0.690, 0.230, self.safe_height_over],
                        'box7':[0.888, -0.144, self.safe_height_over],
                        'box8':[0.900, 0.044, self.safe_height_over],
                        'box9':[0.887, 0.226, self.safe_height_over],
                        'box10':[0.491, -0.134, self.safe_height_over],
                        'box11':[0.491, 0.240, self.safe_height_over],
                        'box12':[0.701, 0.039, self.safe_height_over],
                        'box13':[0.888, -0.144, self.safe_height_over],
                        'box14':[0.887, 0.226, self.safe_height_over]}
        self.to_grip_tb = {'box1':[0.491, -0.134, self.grip_height_first_floor],
                           'box2':[0.487, 0.042, self.grip_height_first_floor],
                           'box3':[0.491, 0.240, self.grip_height_first_floor],
                           'box4':[0.690, -0.143, self.grip_height_first_floor],
                           'box5':[0.701, 0.039, self.grip_height_first_floor],
                           'box6':[0.690, 0.230, self.grip_height_first_floor],
                           'box7':[0.888, -0.144, self.grip_height_first_floor],
                           'box8':[0.900, 0.044, self.grip_height_first_floor],
                           'box9':[0.887, 0.226, self.grip_height_first_floor],
                           'box10':[0.491, -0.134, self.grip_height_second_floor],
                           'box11':[0.491, 0.240, self.grip_height_second_floor],
                           'box12':[0.701, 0.039, self.grip_height_second_floor],
                           'box13':[0.888, -0.144, self.grip_height_second_floor],
                           'box14':[0.887, 0.226, self.grip_height_second_floor]}

        safe_z_offset = self.cube_size/4
        self.safe_over_tower = []
        tower_levels = 8
        for i in range(tower_levels):
            self.safe_over_tower.append(self.ta_points['a4'][2]+(i+1)*self.cube_size+safe_z_offset)

        # Closest first variant for table B
        self.box_sequence_b = ['box10', 'box1', 'box4', 'box13', 'box7', 'box2', 'box12',
                               'box5', 'box8', 'box11', 'box3', 'box6', 'box14', 'box9']

        self.preset_along_y()

    def preset_along_y(self, custom=False):
        self.home_pos_ta_joints = {'shoulder_pan_joint':-1.571,
                                   'shoulder_lift_joint':-1.571,
                                   'elbow_joint':-1.571,
                                   'wrist_1_joint':-1.571,
                                   'wrist_2_joint':1.571,
                                   'wrist_3_joint':0.0}
        self.home_pos_ta_joints_list = [-1.571, -1.571, -1.571, -1.571, 1.571, 0.0]
        self.home_pos_tb_joints = {'shoulder_pan_joint':0.0,
                                   'shoulder_lift_joint':-1.571,
                                   'elbow_joint':-1.571,
                                   'wrist_1_joint':-1.571,
                                   'wrist_2_joint':1.571,
                                   'wrist_3_joint':1.571}
        self.home_pos_tb_joints_list = [0.0, -1.571, -1.571, -1.571, 1.571, 1.571]
        self.high_tower_pos_joints = {'shoulder_pan_joint':-1.571,
                                      'shoulder_lift_joint':-1.571,
                                      'elbow_joint':-1.571,
                                      'wrist_1_joint':0.0,
                                      'wrist_2_joint':1.571,
                                      'wrist_3_joint':0.0}
        self.high_tower_pos_joints_list = [-1.571, -1.571, -1.571, 0.0, 1.571, 0.0]
        self.high_tower_pos_joints_list_2 = [-1.571, -1.571, -1.571, 3.142, -1.571, 0.0]
                           
        # This is effectively b3 in the tower
        self.first_cube_in_tower_over = [self.ta_points['a4'][0]-self.cube_size, self.ta_points['a4'][1]+self.cube_size, self.safe_over_tower[0]]
        self.first_cube_in_tower_release = [self.ta_points['a4'][0]-self.cube_size, self.ta_points['a4'][1]+self.cube_size, self.release_on_tower]

        self.calculate_tower_y()

        self.tower = [[self.b13, 0, 0, 0],
                      [self.b12, 0, 0, 0],
                      [self.b11, 0, 0, 0],
                      [self.b10, 0, 0, 0],
                      [self.b9, 0, 0, 0],
                      [self.b8, self.b7, 0, 0],
                      [self.b6, self.b5, self.b4, 0],
                      [self.b3, self.b2, self.b1, self.b0]]
        
        self.tower_sequence = [self.b3, self.b2, self.b6, self.b1, self.b5, self.b8, self.b0, self.b4, self.b7,
                               self.b9, self.b10, self.b11, self.b12, self.b13]

    def calculate_tower_y(self):
        self.b0 = {'over':[self.first_cube_in_tower_over[0],
                           self.first_cube_in_tower_over[1]+3*self.cube_size,
                           self.safe_over_tower[0]],
                   'release':[self.first_cube_in_tower_release[0],
                              self.first_cube_in_tower_release[1]+3*self.cube_size,
                              self.first_cube_in_tower_release[2]],
                   'name':'b0'}
        self.b1 = {'over':[self.first_cube_in_tower_over[0],
                           self.first_cube_in_tower_over[1]+2*self.cube_size,
                           self.safe_over_tower[0]],
                   'release':[self.first_cube_in_tower_release[0],
                              self.first_cube_in_tower_release[1]+2*self.cube_size,
                              self.first_cube_in_tower_release[2]],
                   'name':'b1'}
        self.b2 = {'over':[self.first_cube_in_tower_over[0],
                           self.first_cube_in_tower_over[1]+self.cube_size,
                           self.safe_over_tower[0]],
                   'release':[self.first_cube_in_tower_release[0],
                              self.first_cube_in_tower_release[1]+self.cube_size,
                              self.first_cube_in_tower_release[2]],
                   'name':'b2'}
        self.b3 = {'over':self.first_cube_in_tower_over,
                   'release':self.first_cube_in_tower_release,
                   'name':'b3'}
        self.b4 = {'over':[self.first_cube_in_tower_over[0],
                           self.first_cube_in_tower_over[1]+2*self.cube_size,
                           self.safe_over_tower[1]],
                   'release':[self.first_cube_in_tower_release[0],
                              self.first_cube_in_tower_release[1]+2*self.cube_size,
                              self.first_cube_in_tower_release[2]+self.cube_size],
                   'name':'b4'}
        self.b5 = {'over':[self.first_cube_in_tower_over[0],
                           self.first_cube_in_tower_over[1]+self.cube_size,
                           self.safe_over_tower[1]],
                   'release':[self.first_cube_in_tower_release[0],
                              self.first_cube_in_tower_release[1]+self.cube_size,
                              self.first_cube_in_tower_release[2]+self.cube_size],
                   'name':'b5'}
        self.b6 = {'over':[self.first_cube_in_tower_over[0],
                           self.first_cube_in_tower_over[1],
                           self.safe_over_tower[1]],
                   'release':[self.first_cube_in_tower_release[0],
                              self.first_cube_in_tower_release[1],
                              self.first_cube_in_tower_release[2]+self.cube_size],
                   'name':'b6'}
        self.b7 = {'over':[self.first_cube_in_tower_over[0],
                           self.first_cube_in_tower_over[1]+self.cube_size,
                           self.safe_over_tower[2]],
                   'release':[self.first_cube_in_tower_release[0],
                              self.first_cube_in_tower_release[1]+self.cube_size,
                              self.first_cube_in_tower_release[2]+2*self.cube_size],
                   'name':'b7'}
        self.b8 = {'over':[self.first_cube_in_tower_over[0],
                           self.first_cube_in_tower_over[1],
                           self.safe_over_tower[2]],
                   'release':[self.first_cube_in_tower_release[0],
                              self.first_cube_in_tower_release[1],
                              self.first_cube_in_tower_release[2]+2*self.cube_size],
                   'name':'b8'}
        self.b9 = {'over':[self.first_cube_in_tower_over[0],
                           self.first_cube_in_tower_over[1],
                           self.safe_over_tower[3]],
                   'release':[self.first_cube_in_tower_release[0],
                              self.first_cube_in_tower_release[1],
                              self.first_cube_in_tower_release[2]+3*self.cube_size],
                   'name':'b9'}
        self.b10 = {'over':[self.first_cube_in_tower_over[0],
                            self.first_cube_in_tower_over[1],
                            self.safe_over_tower[4]],
                    'release':[self.first_cube_in_tower_release[0],
                               self.first_cube_in_tower_release[1],
                               self.first_cube_in_tower_release[2]+4*self.cube_size],
                    'name':'b10'}
        self.b11 = {'over':[self.first_cube_in_tower_over[0],
                            self.first_cube_in_tower_over[1],
                            self.safe_over_tower[5]],
                    'release':[self.first_cube_in_tower_release[0],
                               self.first_cube_in_tower_release[1],
                               self.first_cube_in_tower_release[2]+5*self.cube_size],
                    'name':'b11'}
        self.b12 = {'over':[self.first_cube_in_tower_over[0],
                            self.first_cube_in_tower_over[1],
                            self.safe_over_tower[6]],
                    'release':[self.first_cube_in_tower_release[0],
                               self.first_cube_in_tower_release[1],
                               self.first_cube_in_tower_release[2]+6*self.cube_size],
                    'name':'b12'}
        self.b13 = {'over':[self.first_cube_in_tower_over[0],
                            self.first_cube_in_tower_over[1],
                            self.safe_over_tower[7]],
                    'release':[self.first_cube_in_tower_release[0],
                               self.first_cube_in_tower_release[1],
                               self.first_cube_in_tower_release[2]+7*self.cube_size],
                    'name':'b13'}

    def preset_along_x(self, custom=False):
        self.home_pos_ta_joints = {'shoulder_pan_joint':-1.571,
                                   'shoulder_lift_joint':-1.571,
                                   'elbow_joint':-1.571,
                                   'wrist_1_joint':-1.571,
                                   'wrist_2_joint':1.571,
                                   'wrist_3_joint':-1.571}
        self.home_pos_ta_joints_list = [-1.571, -1.571, -1.571, -1.571, 1.571, -1.571]
        self.home_pos_tb_joints = {'shoulder_pan_joint':0.0,
                                   'shoulder_lift_joint':-1.571,
                                   'elbow_joint':-1.571,
                                   'wrist_1_joint':-1.571,
                                   'wrist_2_joint':1.571,
                                   'wrist_3_joint':0.0}
        self.home_pos_tb_joints_list = [0.0, -1.571, -1.571, -1.571, 1.571, 0.0]
        self.high_tower_pos_joints = {'shoulder_pan_joint':-1.571,
                                      'shoulder_lift_joint':-1.571,
                                      'elbow_joint':-1.571,
                                      'wrist_1_joint':0.0,
                                      'wrist_2_joint':1.571,
                                      'wrist_3_joint':0.0}
        self.high_tower_pos_joints_list = [-1.571, -1.571, -1.571, 0.0, 1.571, 0.0]
        self.high_tower_pos_joints_list_2 = [-1.571, -1.571, -1.571, 3.142, -1.571, 0.0]

        self.tower_start_x = self.ta_points['a4'][0] - self.cube_size/2.0
        self.tower_start_y = self.ta_points['a4'][1] + 0.5

        # This is effectively b3 in the tower
        self.first_cube_in_tower_over = [self.tower_start_x, self.tower_start_y, self.safe_over_tower[0]]
        self.first_cube_in_tower_release = [self.tower_start_x, self.tower_start_y, self.release_on_tower]

        self.calculate_tower_x()

        self.tower = [[self.b13, 0, 0, 0],
                      [self.b12, 0, 0, 0],
                      [self.b11, 0, 0, 0],
                      [self.b10, 0, 0, 0],
                      [self.b9, 0, 0, 0],
                      [self.b8, self.b7, 0, 0],
                      [self.b6, self.b5, self.b4, 0],
                      [self.b3, self.b2, self.b1, self.b0]]

        self.tower_sequence = [self.b3, self.b2, self.b6, self.b1, self.b5, self.b8, self.b0, self.b4, self.b7,
                               self.b9, self.b10, self.b11, self.b12, self.b13]

    def calculate_tower_x(self):
        self.b0 = {'over':[self.first_cube_in_tower_over[0]-3*self.cube_size,
                           self.first_cube_in_tower_over[1],
                           self.safe_over_tower[0]],
                   'release':[self.first_cube_in_tower_release[0]-3*self.cube_size,
                              self.first_cube_in_tower_release[1],
                              self.first_cube_in_tower_release[2]],
                   'name':'b0'}
        self.b1 = {'over':[self.first_cube_in_tower_over[0]-2*self.cube_size,
                           self.first_cube_in_tower_over[1],
                           self.safe_over_tower[0]],
                   'release':[self.first_cube_in_tower_release[0]-2*self.cube_size,
                              self.first_cube_in_tower_release[1],
                              self.first_cube_in_tower_release[2]],
                   'name':'b1'}
        self.b2 = {'over':[self.first_cube_in_tower_over[0]-self.cube_size,
                           self.first_cube_in_tower_over[1],
                           self.safe_over_tower[0]],
                   'release':[self.first_cube_in_tower_release[0]-self.cube_size,
                              self.first_cube_in_tower_release[1],
                              self.first_cube_in_tower_release[2]],
                   'name':'b2'}
        self.b3 = {'over':self.first_cube_in_tower_over,
                   'release':self.first_cube_in_tower_release,
                   'name':'b3'}
        self.b4 = {'over':[self.first_cube_in_tower_over[0]-2*self.cube_size,
                           self.first_cube_in_tower_over[1],
                           self.safe_over_tower[1]],
                   'release':[self.first_cube_in_tower_release[0]-2*self.cube_size,
                              self.first_cube_in_tower_release[1],
                              self.first_cube_in_tower_release[2]+self.cube_size],
                   'name':'b4'}
        self.b5 = {'over':[self.first_cube_in_tower_over[0]-self.cube_size,
                           self.first_cube_in_tower_over[1],
                           self.safe_over_tower[1]],
                   'release':[self.first_cube_in_tower_release[0]-self.cube_size,
                              self.first_cube_in_tower_release[1],
                              self.first_cube_in_tower_release[2]+self.cube_size],
                   'name':'b5'}
        self.b6 = {'over':[self.first_cube_in_tower_over[0],
                           self.first_cube_in_tower_over[1],
                           self.safe_over_tower[1]],
                   'release':[self.first_cube_in_tower_release[0],
                              self.first_cube_in_tower_release[1],
                              self.first_cube_in_tower_release[2]+self.cube_size],
                   'name':'b6'}
        self.b7 = {'over':[self.first_cube_in_tower_over[0]-self.cube_size,
                           self.first_cube_in_tower_over[1],
                           self.safe_over_tower[2]],
                   'release':[self.first_cube_in_tower_release[0]-self.cube_size,
                              self.first_cube_in_tower_release[1],
                              self.first_cube_in_tower_release[2]+2*self.cube_size],
                   'name':'b7'}
        self.b8 = {'over':[self.first_cube_in_tower_over[0],
                           self.first_cube_in_tower_over[1],
                           self.safe_over_tower[2]],
                   'release':[self.first_cube_in_tower_release[0],
                              self.first_cube_in_tower_release[1],
                              self.first_cube_in_tower_release[2]+2*self.cube_size],
                   'name':'b8'}
        self.b9 = {'over':[self.first_cube_in_tower_over[0],
                           self.first_cube_in_tower_over[1],
                           self.safe_over_tower[3]],
                   'release':[self.first_cube_in_tower_release[0],
                              self.first_cube_in_tower_release[1],
                              self.first_cube_in_tower_release[2]+3*self.cube_size],
                   'name':'b9'}
        self.b10 = {'over':[self.first_cube_in_tower_over[0],
                            self.first_cube_in_tower_over[1],
                            self.safe_over_tower[4]],
                    'release':[self.first_cube_in_tower_release[0],
                               self.first_cube_in_tower_release[1],
                               self.first_cube_in_tower_release[2]+4*self.cube_size],
                    'name':'b10'}
        self.b11 = {'over':[self.first_cube_in_tower_over[0],
                            self.first_cube_in_tower_over[1],
                            self.safe_over_tower[5]],
                    'release':[self.first_cube_in_tower_release[0],
                               self.first_cube_in_tower_release[1],
                               self.first_cube_in_tower_release[2]+5*self.cube_size],
                    'name':'b11'}
        self.b12 = {'over':[self.first_cube_in_tower_over[0],
                            self.first_cube_in_tower_over[1],
                            self.safe_over_tower[6]],
                    'release':[self.first_cube_in_tower_release[0],
                               self.first_cube_in_tower_release[1],
                               self.first_cube_in_tower_release[2]+6*self.cube_size],
                    'name':'b12'}
        self.b13 = {'over':[self.first_cube_in_tower_over[0],
                            self.first_cube_in_tower_over[1],
                            self.safe_over_tower[7]],
                    'release':[self.first_cube_in_tower_release[0],
                               self.first_cube_in_tower_release[1],
                               self.first_cube_in_tower_release[2]+7*self.cube_size],
                    'name':'b13'}
