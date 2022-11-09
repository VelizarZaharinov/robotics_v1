class Map:
    def __init__(self, **kwargs):
        # The initial map contains only the surroundings of the initial
        # position of the robot. The robot is in the center
        self.landscape = [[kwargs['fog'], kwargs['fog'], kwargs['fog']],
                          [kwargs['fog'], kwargs['initial_tile'], kwargs['fog']],
                          [kwargs['fog'], kwargs['fog'], kwargs['fog']]]
        # Flag not to check for map borders if all are found
        self.borders_found = [0, 0, 0, 0] # Four borders top to left
        # For saving the original value and position of marked tiles
        self.markers = {}
        # Display initial map
        self.print_map()

    def get_front_tile_type(self, pos, orient):
        if orient==0:
            tile = self.landscape[pos[1]-1][pos[0]]
        elif orient==1:
            tile = self.landscape[pos[1]][pos[0]+1]
        elif orient==2:
            tile = self.landscape[pos[1]+1][pos[0]]
        elif orient==3:
            tile = self.landscape[pos[1]][pos[0]-1]
        else:
            print('Unknown orientation')

        return tile

    def get_left_tile_type(self, pos, orient):
        if orient==0:
            tile = self.landscape[pos[1]][pos[0]-1]
        elif orient==1:
            tile = self.landscape[pos[1]-1][pos[0]]
        elif orient==2:
            tile = self.landscape[pos[1]][pos[0]+1]
        elif orient==3:
            tile = self.landscape[pos[1]+1][pos[0]]
        else:
            print('Unknown orientation')

        return tile

    def get_right_tile_type(self, pos, orient):
        if orient==0:
            tile = self.landscape[pos[1]][pos[0]+1]
        elif orient==1:
            tile = self.landscape[pos[1]+1][pos[0]]
        elif orient==2:
            tile = self.landscape[pos[1]][pos[0]-1]
        elif orient==3:
            tile = self.landscape[pos[1]-1][pos[0]]
        else:
            print('Unknown orientation')

        return tile

    def get_rear_tile_type(self, pos, orient):
        if orient==0:
            tile = self.landscape[pos[1]+1][pos[0]]
        elif orient==1:
            tile = self.landscape[pos[1]][pos[0]-1]
        elif orient==2:
            tile = self.landscape[pos[1]-1][pos[0]]
        elif orient==3:
            tile = self.landscape[pos[1]][pos[0]+1]
        else:
            print('Unknown orientation')

        return tile

    def get_front_tile_pos(self, pos, orient):
        if orient==0:
            tile_pos = [pos[0], pos[1]-1]
        elif orient==1:
            tile_pos = [pos[0]+1, pos[1]]
        elif orient==2:
            tile_pos = [pos[0], pos[1]+1]
        elif orient==3:
            tile_pos = [pos[0]-1, pos[1]]
        else:
            print('Unknown orientation')

        return tile_pos

    def get_left_tile_pos(self, pos, orient):
        if orient==0:
            tile_pos = [pos[0]-1, pos[1]]
        elif orient==1:
            tile_pos = [pos[0], pos[1]-1]
        elif orient==2:
            tile_pos = [pos[0]+1, pos[1]]
        elif orient==3:
            tile_pos = [pos[0], pos[1]+1]
        else:
            print('Unknown orientation')

        return tile_pos

    def get_right_tile_pos(self, pos, orient):
        if orient==0:
            tile_pos = [pos[0]+1, pos[1]]
        elif orient==1:
            tile_pos = [pos[0], pos[1]+1]
        elif orient==2:
            tile_pos = [pos[0]-1, pos[1]]
        elif orient==3:
            tile_pos = [pos[0], pos[1]-1]
        else:
            print('Unknown orientation')

        return tile_pos

    def get_rear_tile_pos(self, pos, orient):
        if orient==0:
            tile_pos = [pos[0], pos[1]+1]
        elif orient==1:
            tile_pos = [pos[0]-1, pos[1]]
        elif orient==2:
            tile_pos = [pos[0], pos[1]-1]
        elif orient==3:
            tile_pos = [pos[0]+1, pos[1]]
        else:
            print('Unknown orientation')

        return tile_pos

    def get_tile_relative_direction(self, tile_coords, pos, orient):
        diff_x = tile_coords[0] - pos[0]
        diff_y = tile_coords[1] - pos[1]
        
        if diff_y<0:
            tile_dir = 0
        elif diff_x>0:
            tile_dir = 1
        elif diff_y>0:
            tile_dir = 2
        else:
            tile_dir = 3

        diff_dir = tile_dir - orient

        if not diff_dir:
            rel_tile_dir = 0
        elif ((orient==3) and (diff_dir==-3)) or (diff_dir==1):
            rel_tile_dir = 1
        elif abs(diff_dir)==2:
            rel_tile_dir = 2
        else:
            rel_tile_dir = 3

        return rel_tile_dir

    def grow(self, cur_pos, fog=None):
        print(cur_pos)
        new_pos = [cur_pos[0],
                   cur_pos[1]]
        if (cur_pos[1]+1)==len(self.landscape):
            self.landscape.append([])
            for tile in range(len(self.landscape[cur_pos[1]])):
                self.landscape[-1].append(fog)
            print('map grows downwards')
        elif (cur_pos[1]-1)<0:
            self.landscape.insert(0, [])
            new_pos[1] += 1 # Important to increment here
            for tile in range(len(self.landscape[new_pos[1]])):
                self.landscape[0].append(fog)
            print('map grows upwards')
        elif (cur_pos[0]+1)==len(self.landscape[cur_pos[1]]):
            for tile in range(len(self.landscape)):
                self.landscape[tile].append(fog)
            print('map grows right')
        elif (cur_pos[0]-1)<0:
            for tile in range(len(self.landscape)):
                self.landscape[tile].insert(0, fog)
            new_pos[0] += 1
            print('map grows left')

        return new_pos

    def get_tile_on(self, pos):
        return self.landscape[pos[1]][pos[0]]

    def get_unexplored_tile(self):
        for i in range(len(self.landscape)):
            for j in range(len(self.landscape[i])):
                if self.landscape[i][j]==None:
                    return [j, i]

    def get_closest_unexplored_tile(self, cur_pos):
        for i in range(len(self.landscape)):
            for j in range(len(self.landscape[i])):
                if self.landscape[i][j]==None:
                    min_dist = pow(pow(i-cur_pos[1], 2)+pow(j-cur_pos[0], 2), 0.5)
                    pos = [j, i]
                    break

        for i in range(len(self.landscape)):
            for j in range(len(self.landscape[i])):
                if self.landscape[i][j]==None:
                    cur_dist = pow(pow(i-cur_pos[1], 2)+pow(j-cur_pos[0], 2), 0.5)
                    if cur_dist<min_dist:
                        min_dist = cur_dist
                        pos = [j, i]

        return pos

    def auto_fill_map_borders(self):
        if 0 in self.borders_found:
            if not self.borders_found[0]:
                self.check_upper_border()
            if not self.borders_found[1]:
                self.check_right_border()
            if not self.borders_found[2]:
                self.check_lower_border()
            if not self.borders_found[3]:
                self.check_left_border()

        self.print_map()

    def auto_fill_map_borders_edges(self):
        map_rows = len(self.landscape)
        for i in range(map_rows):
            if (not i) or (i==(map_rows-1)):
                for j in range(len(self.landscape[i])):
                    self.landscape[i][j] = 2
            else:
                self.landscape[i][0] = 2
                self.landscape[i][-1] = 2

        self.print_map()

    def check_upper_border(self):
        border_tiles_count = 0
        border_tiles_indices = []
        map_columns = len(self.landscape[0])
        for i in range(map_columns):
            if self.landscape[0][i]==35:
                border_tiles_count += 1
                border_tiles_indices.append(i)

        if border_tiles_count>2:
            for i in range(map_columns):
                self.landscape[0][i] = 35
            self.borders_found[0] = 1
        else:
            for i in range(len(border_tiles_indices)):
                if (border_tiles_indices[i]>0) and (border_tiles_indices[i]<(border_tiles_count-1)):
                    for j in range(map_columns):
                        self.landscape[0][i] = 35
                    self.borders_found[0] = 1
                    
    def check_right_border(self):
        map_rows = len(self.landscape)
        i = 0
        while i<map_rows:
            if self.landscape[i][-1]==35:
                for j in range(map_rows):
                    self.landscape[j][-1] = 35
                i = map_rows
                self.borders_found[1] = 1
            i += 1

    def check_lower_border(self):
        border_tiles_count = 0
        border_tiles_indices = []
        map_columns = len(self.landscape[-1])
        for i in range(map_columns):
            if self.landscape[-1][i]==35:
                border_tiles_count += 1
                border_tiles_indices.append(i)

        if border_tiles_count>2:
            for i in range(map_columns):
                self.landscape[-1][i] = 35
            self.borders_found[2] = 1
        else:
            for i in range(len(border_tiles_indices)):
                if (border_tiles_indices[i]>0) and (border_tiles_indices[i]<(border_tiles_count-1)):
                    for j in range(map_columns):
                        self.landscape[-1][i] = 35
                    self.borders_found[2] = 1

    def check_left_border(self):
        map_rows = len(self.landscape)
        i = 0
        while i<map_rows:
            if self.landscape[i][0]==35:
                for j in range(map_rows):
                    self.landscape[j][0] = 35
                i = map_rows
                self.borders_found[3] = 1
            i += 1

    def mark_position(self, pos, marker):
        self.markers[str(marker)] = [self.landscape[pos[1]][pos[0]], pos]
        self.landscape[pos[1]][pos[0]] = marker

    def erease_marker(self, marker):
        original_value = self.markers[str(marker)][0]
        pos = self.markers[str(marker)][1]
        self.landscape[pos[1]][pos[0]] = original_value

    def fill_obstacles(self, pattern_map):
        for i in range(len(pattern_map.landscape)):
            for j in range(len(pattern_map.landscape[i])):
                if pattern_map.landscape[i][j]==88:
                    self.landscape[i][j] = 88

        self.print_map()

    def clear_borders(self):
        no_borders_landscape = []
        col_num = len(self.landscape[0])
        for i in range(1, len(self.landscape)-1):
            no_borders_landscape.append(self.landscape[i][1:col_num-1])

        return no_borders_landscape

    def copy_map(self):
        copy = []
        for i in range(len(self.landscape)):
            copy.append(self.landscape[i][:])

        return copy

    def setup_for_mining(self, sequence):
        for i in range(len(self.landscape)):
            for j in range(len(self.landscape[i])):
                if not ([j, i] in sequence):
                    self.landscape[i][j] = 35

    def print_map(self):
        for i in range(len(self.landscape)):
            print(self.landscape[i])

class TilesMap(Map):
    def __init__(self, **kwargs):
        super().__init__(**kwargs)

    def update_map(self, orientation, tile_param, cur_x, cur_y, fog=None, moved=False):
        if moved:
            if self.landscape[cur_y][cur_x]==fog:
                self.landscape[cur_y][cur_x] = tile_param
        else:
            if orientation==0:
                if self.landscape[cur_y-1][cur_x]==fog:
                    self.landscape[cur_y-1][cur_x] = tile_param
            elif orientation==1:
                if self.landscape[cur_y][cur_x+1]==fog:
                    self.landscape[cur_y][cur_x+1] = tile_param
            elif orientation==2:
                if self.landscape[cur_y+1][cur_x]==fog:
                    self.landscape[cur_y+1][cur_x] = tile_param
            elif orientation==3:
                if self.landscape[cur_y][cur_x-1]==fog:
                    self.landscape[cur_y][cur_x-1] = tile_param
            else:
                print('Unknown orientation')

        self.print_map()

    def get_charging_station_coords(self, charging_station_tile):
        i = 0
        while i<len(self.landscape):
            j = 0
            while j<len(self.landscape[i]):
                if self.landscape[i][j]==charging_station_tile:
                    charge_tile_coords = [j, i]
                    i = len(self.landscape) - 1
                    j = len(self.landscape[i])
                else:
                    j += 1
            i += 1

        return charge_tile_coords

    def calc_distance_to_charging_station(self, tile_coords, charging_station_coords):
        return pow(pow(tile_coords[0]-charging_station_coords[0], 2)+pow(tile_coords[1]-charging_station_coords[1], 2), 0.5)

    def add_borders(self):
        # Check north for border
        if not self.borders_found[0]:
            flag = 0
            for i in range(1, len(self.landscape[0])-1):
                if self.landscape[0][i]==35:
                    flag = 1
                    break
            if flag:
                for i in range(len(self.landscape[0])):
                    self.landscape[0][i] = 35
                self.borders_found[0] = 1
        # Check east border
        if not self.borders_found[1]:
            flag = 0
            for i in range(1, len(self.landscape)-1):
                if self.landscape[i][-1]==35:
                    flag = 1
                    break
            if flag:
                for i in range(len(self.landscape)):
                    self.landscape[i][-1] = 35
                self.borders_found[1] = 1
        # Check south border
        if not self.borders_found[2]:
            flag = 0
            for i in range(1, len(self.landscape[-1])-1):
                if self.landscape[-1][i]==35:
                    flag = 1
                    break
            if flag:
                for i in range(len(self.landscape[-1])):
                    self.landscape[-1][i] = 35
                self.borders_found[2] = 1
        # Check west border
        if not self.borders_found[3]:
            flag = 0
            for i in range(1, len(self.landscape)-1):
                if self.landscape[i][0]==35:
                    flag = 1
                    break
            if flag:
                for i in range(len(self.landscape)):
                    self.landscape[i][0] = 35
                self.borders_found[3] = 1

    def complement_borders(self):
        if self.borders_found[0]:   
            self.landscape[0][0] = 35
            self.landscape[0][-1] = 35
        if self.borders_found[1]:
            self.landscape[0][-1] = 35
            self.landscape[-1][-1] = 35
        if self.borders_found[2]:
            self.landscape[-1][0] = 35
            self.landscape[-1][-1] = 35
        if self.borders_found[3]:
            self.landscape[0][0] = 35
            self.landscape[-1][0] = 35

class ExplorationMap(Map):
    def __init__(self, **kwargs):
        super().__init__(**kwargs)

    def exploration_check(self):
        fully_explored = True
        i = 0
        map_rows = len(self.landscape)
        while i<map_rows:
            if 0 in self.landscape[i]:
                fully_explored = False
                i = map_rows
            i += 1

        return fully_explored

    def update_map(self, orientation, cur_x, cur_y, tile_param=1, fog=0, moved=False):
        if moved:
            if self.landscape[cur_y][cur_x]==fog:
                self.landscape[cur_y][cur_x] = tile_param
        else:
            if orientation==0:
                if self.landscape[cur_y-1][cur_x]==fog:
                    self.landscape[cur_y-1][cur_x] = tile_param
            elif orientation==1:
                if self.landscape[cur_y][cur_x+1]==fog:
                    self.landscape[cur_y][cur_x+1] = tile_param
            elif orientation==2:
                if self.landscape[cur_y+1][cur_x]==fog:
                    self.landscape[cur_y+1][cur_x] = tile_param
            elif orientation==3:
                if self.landscape[cur_y][cur_x-1]==fog:
                    self.landscape[cur_y][cur_x-1] = tile_param
            else:
                print('Unknown orientation')

        self.print_map()

    def copy_borders(self, tile_map):
        # North
        if not self.borders_found[0]:
            if tile_map.borders_found[0]:
                for i in range(len(self.landscape[0])):
                    self.landscape[0][i] = 1
                self.borders_found[0] = 1
        # East
        if not self.borders_found[1]:
            if tile_map.borders_found[1]:
                for i in range(len(self.landscape)):
                    self.landscape[i][-1] = 1
                self.borders_found[1] = 1
        # South
        if not self.borders_found[2]:
            if tile_map.borders_found[2]:
                for i in range(len(self.landscape[-1])):
                    self.landscape[-1][i] = 1
                self.borders_found[2] = 1
        # West
        if not self.borders_found[3]:
            if tile_map.borders_found[3]:
                for i in range(len(self.landscape)):
                    self.landscape[i][0] = 1
                self.borders_found[3] = 1

    def complement_borders(self):
        if self.borders_found[0]:
            self.landscape[0][0] = 1
            self.landscape[0][-1] = 1
        if self.borders_found[1]:
            self.landscape[0][-1] = 1
            self.landscape[-1][-1] = 1
        if self.borders_found[2]:
            self.landscape[-1][0] = 1
            self.landscape[-1][-1] = 1
        if self.borders_found[3]:
            self.landscape[0][0] = 1
            self.landscape[-1][0] = 1

class PheromoneMap(Map):
    def __init__(self, **kwargs):
        super().__init__(**kwargs)

    def update_map(self, orientation, tile_param, cur_x, cur_y, fog=1.0, dirtiness=None, obstacles=None):
        if dirtiness:
            if self.landscape[cur_y][cur_x]==fog:
                if orientation==0:
                    if tile_param==dirtiness[1]:
                        self.landscape[cur_y][cur_x] = 1.1
                    elif tile_param==dirtiness[2]:
                        self.landscape[cur_y][cur_x] = 1.21
                elif orientation==1:
                    if tile_param==dirtiness[1]:
                        self.landscape[cur_y][cur_x] = 1.1
                    elif tile_param==dirtiness[2]:
                        self.landscape[cur_y][cur_x] = 1.21
                elif orientation==2:
                    if tile_param==dirtiness[1]:
                        self.landscape[cur_y][cur_x] = 1.1
                    elif tile_param==dirtiness[2]:
                        self.landscape[cur_y][cur_x] = 1.21
                elif orientation==3:
                    if tile_param==dirtiness[1]:
                        self.landscape[cur_y][cur_x] = 1.1
                    elif tile_param==dirtiness[2]:
                        self.landscape[cur_y][cur_x] = 1.21
                else:
                    print('Unknown orientation')
        else:
            if orientation==0:
                if self.landscape[cur_y-1][cur_x]==fog:
                    self.landscape[cur_y-1][cur_x] = 0.0
            elif orientation==1:
                if self.landscape[cur_y][cur_x+1]==fog:
                    self.landscape[cur_y][cur_x+1] = 0.0
            elif orientation==2:
                if self.landscape[cur_y+1][cur_x]==fog:
                    self.landscape[cur_y+1][cur_x] = 0.0
            elif orientation==3:
                if self.landscape[cur_y][cur_x-1]==fog:
                    self.landscape[cur_y][cur_x-1] = 0.0
            else:
                print('Unknown orientation')

        self.print_map()

    def deplete_pheromone(self, cur_x, cur_y, rate=1.1):
        self.landscape[cur_y][cur_x] /= rate

    def get_tile_pheromone_level(self, coords):
        return self.landscape[coords[1]][coords[0]]

    def reset(self, cur_pos):
        for i in range(len(self.landscape)):
            for j in range(len(self.landscape[i])):
                if self.landscape[i][j] and (self.landscape[i][j]<1.0):
                    self.landscape[i][j] = 1.0
        self.landscape[cur_pos[1]][cur_pos[0]] = 0.5

    def copy_borders(self, tile_map):
        # North
        if not self.borders_found[0]:
            if tile_map.borders_found[0]:
                for i in range(len(self.landscape[0])):
                    self.landscape[0][i] = 0.0
                self.borders_found[0] = 1
        # East
        if not self.borders_found[1]:
            if tile_map.borders_found[1]:
                for i in range(len(self.landscape)):
                    self.landscape[i][-1] = 0.0
                self.borders_found[1] = 1
        # South
        if not self.borders_found[2]:
            if tile_map.borders_found[2]:
                for i in range(len(self.landscape[-1])):
                    self.landscape[-1][i] = 0.0
                self.borders_found[2] = 1
        # West
        if not self.borders_found[3]:
            if tile_map.borders_found[3]:
                for i in range(len(self.landscape)):
                    self.landscape[i][0] = 0.0
                self.borders_found[3] = 1

    def complement_borders(self):
        if self.borders_found[0]:
            self.landscape[0][0] = 0.0
            self.landscape[0][-1] = 0.0
        if self.borders_found[1]:
            self.landscape[0][-1] = 0.0
            self.landscape[-1][-1] = 0.0
        if self.borders_found[2]:
            self.landscape[-1][0] = 0.0
            self.landscape[-1][-1] = 0.0
        if self.borders_found[3]:
            self.landscape[0][0] = 0.0
            self.landscape[-1][0] = 0.0

    def check_clean(self):
        clean_ok = True
        for i in range(len(self.landscape)):
            for j in range(len(self.landscape[i])):
                if self.landscape[i][j]>(1/1.1):
                    clean_ok = False
                    return clean_ok

        return clean_ok

    def get_dirty_tile_coords(self):
        for i in range(len(self.landscape)):
            for j in range(len(self.landscape[i])):
                if self.landscape[i][j]>(1/1.1):
                    return [j, i]

class ChargeMap(Map):
    def __init__(self, **kwargs):
        super().__init__(**kwargs)

    def update_map(self, cur_x, cur_y, delta):
        if self.landscape[cur_y][cur_x]==None:
            self.landscape[cur_y][cur_x] = delta
        else:
            self.landscape[cur_y][cur_x] += delta

        self.print_map()

    def calc_return_path(self):
        total_return_energy = 0
        for i in range(len(self.landscape)):
            for j in range(len(self.landscape[i])):
                if self.landscape[i][j]:
                    total_return_energy += self.landscape[i][j]

        return total_return_energy

    def reset(self, cur_pos):
        for i in range(len(self.landscape)):
            for j in range(len(self.landscape[i])):
                if self.landscape[i][j]:
                    self.landscape[i][j] = None
        self.landscape[cur_pos[1]][cur_pos[0]] = 0

    def convert_to_pheromone(self, initial_level, cur_pos, tiles_map, obstacles, rate=1.1):
        for i in range(len(self.landscape)):
            for j in range(len(self.landscape[i])):
                if not (self.landscape[i][j]==None):
                    self.landscape[i][j] = initial_level
                elif not (tiles_map.landscape[i][j] in obstacles) and (not (tiles_map.landscape[i][j]==None)):
                    self.landscape[i][j] = initial_level/rate
        self.landscape[cur_pos[1]][cur_pos[0]] = initial_level/1.1

    def get_tile_pheromone_level(self, coords):
        return self.landscape[coords[1]][coords[0]]

    def deplete_pheromone(self, cur_x, cur_y, rate=1.1):
        self.landscape[cur_y][cur_x] /= rate
        
