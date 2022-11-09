class MapTile:
    def __init__(self, tile_type=None, pheromone_level=1.0, explored=False):
        self.tile_type = tile_type
        self.pheromone_level = pheromone_level
        self.explored = explored
        self.path_to_charging_station = False

    def is_charging_station(self, charging_station):
        result = False
        if self.tile_type==charging_station:
            result = True

        return result

    def is_dirty(self, dirtiness):
        result = False
        if self.tile_type in dirtiness:
            result = True

        return result

    def is_obstacle(self, obstacles):
        result = False
        if self.tile_type in obstacles:
            result = True

        return result

class Map:
    def __init__(self):
        # The initial map contains only the surroundings of the initial
        # position of the robot. The robot is in the center
        self.landscape = [[MapTile(), MapTile(), MapTile()],
                          [MapTile(), MapTile(), MapTile()],
                          [MapTile(), MapTile(), MapTile()]]
        # Flag not to check for map borders if all are found
        self.borders_found = [0, 0, 0, 0] # Four borders top to left
        # Display initial map
        self.print_map()

    def print_map(self):
        self.print_tile_types()
        self.print_pheromone_levels()
        self.print_exploration()

    def print_tile_types(self):
        print('Map of tile types:')
        for i in range(len(self.landscape)):
            row = '[ '
            for j in range(len(self.landscape[i])):
                row += str(self.landscape[i][j].tile_type).rjust(5)
            row += ' ]'
            print(row)

    def print_pheromone_levels(self):
        print('Map of pheromone levels:')
        for i in range(len(self.landscape)):
            row = '[ '
            for j in range(len(self.landscape[i])):
                row += str(round(self.landscape[i][j].pheromone_level, 3)).rjust(5)
            row += ' ]'
            print(row)

    def print_exploration(self):
        print('Map of exploration:')
        for i in range(len(self.landscape)):
            row = '[ '
            for j in range(len(self.landscape[i])):
                row += str(self.landscape[i][j].explored).rjust(6)
            row += ' ]'
            print(row)

def main():
    level_map = Map()

if __name__=='__main__':
    main()

        
