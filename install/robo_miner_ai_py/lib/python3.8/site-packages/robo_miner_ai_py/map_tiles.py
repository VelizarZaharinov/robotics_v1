class Map:
    def __init__(self, **kwargs):
        # The initial map contains only the surroundings of the initial
        # position of the robot. The robot is in the center
        self.landscape = [[None, None, None],
                          [None, kwargs['initial_tile'], None],
                          [None, None, None]]
        # Flag not to check for map borders if all are found
        self.borders_found = [0, 0, 0, 0] # Four borders top to left
        # For saving the original value and position of marked tiles
        self.markers = {}
        
        self.update_map(kwargs['orientation'],
                        kwargs['surroundings'],
                        kwargs['cur_pos'][0],
                        kwargs['cur_pos'][1])
                        

    def update_map(self, orientation, surroundings, cur_x, cur_y):
        if orientation==0:
            if self.landscape[cur_y][cur_x-1]==None:
                self.landscape[cur_y][cur_x-1] = surroundings[0]
            if self.landscape[cur_y-1][cur_x]==None:
                self.landscape[cur_y-1][cur_x] = surroundings[1]
            if self.landscape[cur_y][cur_x+1]==None:
                self.landscape[cur_y][cur_x+1] = surroundings[2]
        elif orientation==1:
            if self.landscape[cur_y-1][cur_x]==None:
                self.landscape[cur_y-1][cur_x] = surroundings[0]
            if self.landscape[cur_y][cur_x+1]==None:
                self.landscape[cur_y][cur_x+1] = surroundings[1]
            if self.landscape[cur_y+1][cur_x]==None:
                self.landscape[cur_y+1][cur_x] = surroundings[2]
        elif orientation==2:
            if self.landscape[cur_y][cur_x+1]==None:
                self.landscape[cur_y][cur_x+1] = surroundings[0]
            if self.landscape[cur_y+1][cur_x]==None:
                self.landscape[cur_y+1][cur_x] = surroundings[1]
            if self.landscape[cur_y][cur_x-1]==None:
                self.landscape[cur_y][cur_x-1] = surroundings[2]
        elif orientation==3:
            if self.landscape[cur_y+1][cur_x]==None:
                self.landscape[cur_y+1][cur_x] = surroundings[0]
            if self.landscape[cur_y][cur_x-1]==None:
                self.landscape[cur_y][cur_x-1] = surroundings[1]
            if self.landscape[cur_y-1][cur_x]==None:
                self.landscape[cur_y-1][cur_x] = surroundings[2]
        else:
            print('Unknown orientation')

        self.print_map()

    def update_explored_map(self, tile_map, obstacles):
        for i in range(len(tile_map)):
            for j in range(len(tile_map[i])):
                if tile_map[i][j] in obstacles:
                    self.landscape[i][j] = tile_map[i][j]

        self.print_map()

    def get_tile_front(self, pos, orient):
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

    def get_tile_left(self, pos, orient):
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

    def get_tile_right(self, pos, orient):
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

    def get_tile_rear(self, pos, orient):
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

    def get_tile_on(self, pos):
        return self.landscape[pos[1]][pos[0]]

    def get_unexplored_tile(self):
        for i in range(len(self.landscape)):
            for j in range(len(self.landscape[i])):
                if self.landscape[i][j]==None:
                    return [j, i]

    def get_marker_tile(self, marker):
        return self.markers[str(marker)][1]
        
    def grow(self, cur_pos):
        if (cur_pos[1]+1)==len(self.landscape):
            self.landscape.append([])
            for tile in range(len(self.landscape[cur_pos[1]])):
                self.landscape[-1].append(None)
            print('map grows downwards')
        elif (cur_pos[1]-1)<0:
            self.landscape.insert(0, [])
            cur_pos[1] += 1 # Important to increment here
            for tile in range(len(self.landscape[cur_pos[1]])):
                self.landscape[0].append(None)
            print('map grows upwards')
        elif (cur_pos[0]+1)==len(self.landscape[cur_pos[1]]):
            for tile in range(len(self.landscape)):
                self.landscape[tile].append(None)
            print('map grows right')
        elif (cur_pos[0]-1)<0:
            for tile in range(len(self.landscape)):
                self.landscape[tile].insert(0, None)
            cur_pos[0] += 1
            print('map grows left')

        return cur_pos

    def exploration_check(self):
        fully_explored = True
        i = 0
        map_rows = len(self.landscape)
        while i<map_rows:
            if None in self.landscape[i]:
                fully_explored = False
                i = map_rows
            i += 1

        return fully_explored

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

    def print_map(self):
        for i in range(len(self.landscape)):
            print(self.landscape[i])
