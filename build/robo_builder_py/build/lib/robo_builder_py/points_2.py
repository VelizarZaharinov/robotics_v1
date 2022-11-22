cube_size = 0.110

home_pos = {'x':-0.171,
            'y':-0.682,
            'z':0.428,
            'rx':0,
            'ry':3.178,
            'rz':0}

home_pos_ta_joints = {'shoulder_pan_joint':-1.571,
                      'shoulder_lift_joint':-1.571,
                      'elbow_joint':-1.571,
                      'wrist_1_joint':-1.571,
                      'wrist_2_joint':1.571,
                      'wrist_3_joint':1.571}
home_pos_ta_joints_list = [-1.571, -1.571, -1.571, -1.571, 1.571, 1.571]
home_pos_tb_joints = {'shoulder_pan_joint':0.0,
                      'shoulder_lift_joint':-1.571,
                      'elbow_joint':-1.571,
                      'wrist_1_joint':-1.571,
                      'wrist_2_joint':1.571,
                      'wrist_3_joint':0.0}
home_pos_tb_joints_list = [0.0, -1.571, -1.571, -1.571, 1.571, 0.0]
high_tower_pos_joints = {'shoulder_pan_joint':-1.571,
                         'shoulder_lift_joint':-1.571,
                         'elbow_joint':-1.571,
                         'wrist_1_joint':0.0,
                         'wrist_2_joint':1.571,
                         'wrist_3_joint':0.0}
high_tower_pos_joints_list = [-1.571, -1.571, -1.571, 0.0, 1.571, 0.0]
high_tower_pos_joints_list_2 = [-1.571, -1.571, -1.571, 3.142, -1.571, 0.0]

ta_points = {'a1':[-0.400, -0.970, -0.080, 0.450],
             'a2':[-0.400, -0.280, -0.080, 0.800],
             'a3':[0.180, -0.280, -0.080, 0.800],
             'a4':[0.180, -0.970, -0.080, 0.450]}

safe_height_over = 0.250
grip_height_first_floor = -0.060
grip_height_second_floor = 0.050

over_tb = {'box1':[0.491, -0.134, safe_height_over],
           'box2':[0.487, 0.042, safe_height_over],
           'box3':[0.491, 0.240, safe_height_over],
           'box4':[0.690, -0.143, safe_height_over],
           'box5':[0.701, 0.039, safe_height_over],
           'box6':[0.690, 0.230, safe_height_over],
           'box7':[0.888, -0.144, safe_height_over],
           'box8':[0.900, 0.044, safe_height_over],
           'box9':[0.887, 0.226, safe_height_over],
           'box10':[0.491, -0.134, safe_height_over],
           'box11':[0.491, 0.240, safe_height_over],
           'box12':[0.701, 0.039, safe_height_over],
           'box13':[0.888, -0.144, safe_height_over],
           'box14':[0.887, 0.226, safe_height_over]}
to_grip_tb = {'box1':[0.491, -0.134, grip_height_first_floor],
              'box2':[0.487, 0.042, grip_height_first_floor],
              'box3':[0.491, 0.240, grip_height_first_floor],
              'box4':[0.690, -0.143, grip_height_first_floor],
              'box5':[0.701, 0.039, grip_height_first_floor],
              'box6':[0.690, 0.230, grip_height_first_floor],
              'box7':[0.888, -0.144, grip_height_first_floor],
              'box8':[0.900, 0.044, grip_height_first_floor],
              'box9':[0.887, 0.226, grip_height_first_floor],
              'box10':[0.491, -0.134, grip_height_first_floor],
              'box11':[0.491, 0.240, grip_height_second_floor],
              'box12':[0.701, 0.039, grip_height_second_floor],
              'box13':[0.888, -0.144, grip_height_second_floor],
              'box14':[0.887, 0.226, grip_height_second_floor]}

# Farthest first variant for table A
box_sequence_farthest_first = ['box14', 'box13', 'box12', 'box11', 'box10', 'box9', 'box8',
                               'box6', 'box7', 'box5', 'box3', 'box4', 'box2', 'box1']
box_sequence_closest_first = ['box10', 'box1', 'box4', 'box13', 'box7', 'box2', 'box12',
                              'box5', 'box8', 'box11', 'box3', 'box6', 'box14', 'box9']

safe_z_offset = 3*cube_size/4
safe_over_tower = []
tower_levels = 8
for i in range(tower_levels):
    safe_over_tower.append(ta_points['a4'][2]+(i+1)*cube_size+safe_z_offset)

tower_start_x = ta_points['a4'][0] - cube_size/2.0 + 0.01
tower_start_y = ta_points['a4'][1] + 0.5

# This is effectively b3 in the tower
first_cube_in_tower_over = [tower_start_x, tower_start_y, safe_over_tower[0]]
first_cube_in_tower_release = [tower_start_x, tower_start_y, -0.060]

b0 = {'over':[first_cube_in_tower_over[0]-3*cube_size,
              first_cube_in_tower_over[1],
              safe_over_tower[0]],
      'release':[first_cube_in_tower_release[0]-3*cube_size,
                 first_cube_in_tower_release[1],
                 first_cube_in_tower_release[2]]}
b1 = {'over':[first_cube_in_tower_over[0]-2*cube_size,
              first_cube_in_tower_over[1],
              safe_over_tower[0]],
      'release':[first_cube_in_tower_release[0]-2*cube_size,
                 first_cube_in_tower_release[1],
                 first_cube_in_tower_release[2]]}
b2 = {'over':[first_cube_in_tower_over[0]-cube_size,
              first_cube_in_tower_over[1],
              safe_over_tower[0]],
      'release':[first_cube_in_tower_release[0]-cube_size,
                 first_cube_in_tower_release[1],
                 first_cube_in_tower_release[2]]}
b3 = {'over':first_cube_in_tower_over,
      'release':first_cube_in_tower_release}
b4 = {'over':[first_cube_in_tower_over[0]-2*cube_size,
              first_cube_in_tower_over[1],
              safe_over_tower[1]],
      'release':[first_cube_in_tower_release[0]-2*cube_size,
                 first_cube_in_tower_release[1],
                 first_cube_in_tower_release[2]+cube_size]}
b5 = {'over':[first_cube_in_tower_over[0]-cube_size,
              first_cube_in_tower_over[1],
              safe_over_tower[1]],
      'release':[first_cube_in_tower_release[0]-cube_size,
                 first_cube_in_tower_release[1],
                 first_cube_in_tower_release[2]+cube_size]}
b6 = {'over':[first_cube_in_tower_over[0],
              first_cube_in_tower_over[1],
              safe_over_tower[1]],
      'release':[first_cube_in_tower_release[0],
                 first_cube_in_tower_release[1],
                 first_cube_in_tower_release[2]+cube_size]}
b7 = {'over':[first_cube_in_tower_over[0]-cube_size,
              first_cube_in_tower_over[1],
              safe_over_tower[2]],
      'release':[first_cube_in_tower_release[0]-cube_size,
                 first_cube_in_tower_release[1],
                 first_cube_in_tower_release[2]+2*cube_size]}
b8 = {'over':[first_cube_in_tower_over[0],
              first_cube_in_tower_over[1],
              safe_over_tower[2]],
      'release':[first_cube_in_tower_release[0],
                 first_cube_in_tower_release[1],
                 first_cube_in_tower_release[2]+2*cube_size]}
b9 = {'over':[first_cube_in_tower_over[0],
              first_cube_in_tower_over[1],
              safe_over_tower[3]],
      'release':[first_cube_in_tower_release[0],
                 first_cube_in_tower_release[1],
                 first_cube_in_tower_release[2]+3*cube_size]}
b10 = {'over':[first_cube_in_tower_over[0],
              first_cube_in_tower_over[1],
              safe_over_tower[4]],
       'release':[first_cube_in_tower_release[0],
                  first_cube_in_tower_release[1],
                  first_cube_in_tower_release[2]+4*cube_size]}
b11 = {'over':[first_cube_in_tower_over[0],
              first_cube_in_tower_over[1],
              safe_over_tower[5]],
       'release':[first_cube_in_tower_release[0],
                  first_cube_in_tower_release[1],
                  first_cube_in_tower_release[2]+5*cube_size]}
b12 = {'over':[first_cube_in_tower_over[0],
              first_cube_in_tower_over[1],
              safe_over_tower[6]],
       'release':[first_cube_in_tower_release[0],
                  first_cube_in_tower_release[1],
                  first_cube_in_tower_release[2]+6*cube_size]}
b13 = {'over':[first_cube_in_tower_over[0],
              first_cube_in_tower_over[1],
              safe_over_tower[7]],
       'release':[first_cube_in_tower_release[0],
                  first_cube_in_tower_release[1],
                  first_cube_in_tower_release[2]+7*cube_size]}

tower = [[b13, 0, 0, 0],
         [b12, 0, 0, 0],
         [b11, 0, 0, 0],
         [b10, 0, 0, 0],
         [b9, 0, 0, 0],
         [b8, b7, 0, 0],
         [b6, b5, b4, 0],
         [b3, b2, b1, b0]]

tower_sequence = [b3, b2, b6, b1, b5, b8, b0, b4, b7, b9, b10, b11, b12, b13]
