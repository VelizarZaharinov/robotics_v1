class PheromoneMap:
    def __init__(self, landscape, explored_tiles_map, obstacles):
        self.landscape = landscape
        self.obstacles = obstacles

        # Initial pheromoen levels
        self.init_pheromone_levels(1.0,
                                   explored_tiles_map)

    def init_pheromone_levels(self, pheromone_level, explored_tiles_map):
        for i in range(len(self.landscape)):
            for j in range(len(self.landscape[i])):
                if not (self.landscape[i][j] in self.obstacles):
                    if explored_tiles_map.landscape[i][j]==1:
                        self.landscape[i][j] = pheromone_level/2.0
                    else:
                        self.landscape[i][j] = pheromone_level
                else:
                    self.landscape[i][j] = 0.0

    def decrease_pheromone(self, pos):
        self.landscape[pos[1]][pos[0]] /= 2.0

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

    def get_tile_pheromone_level(self, coords):
        return self.landscape[coords[1]][coords[0]]

    def reset(self):
        for i in range(len(self.landscape)):
            for j in range(len(self.landscape[i])):
                if self.landscape[i][j]:
                    self.landscape[i][j] = 1.0

    def setup_for_mining(self, sequence):
        for i in range(len(self.landscape)):
            for j in range(len(self.landscape[i])):
                if [j, i] in sequence:
                    self.landscape[i][j] = 1.0
                else:
                    self.landscape[i][j] = 0.0

    def print_map(self):
        for i in range(len(self.landscape)):
            print(self.landscape[i])
