class AntAlgorithm:
    def __init__(self):
        self.max_probability = 1.0

    def calculate_probability_exploration(self, possible_tiles_coords, pheromone_map, explored_tiles_map):
        tile_probability = {'front':None,
                            'right':None,
                            'rear':None,
                            'left':None}

        pheromone_levels = self.get_pheromone_levels(possible_tiles_coords,
                                                     pheromone_map)

        exploration = self.get_exploration(possible_tiles_coords,
                                           explored_tiles_map)

        norm = self.calc_normalizer_exploration(pheromone_levels,
                                                exploration)
        
        for direction in pheromone_levels.keys():
            if pheromone_levels[direction]:
                tile_probability[direction] = pheromone_levels[direction]*exploration[direction]/norm

        print(tile_probability)

        return tile_probability

    def calculate_probability_with_target(self, possible_tiles_coords, pheromone_map, target_tile):
        tile_probability = {'front':None,
                            'right':None,
                            'rear':None,
                            'left':None}

        pheromone_levels = self.get_pheromone_levels(possible_tiles_coords,
                                                     pheromone_map)
        
        possible_tiles_distances = self.calc_distances(possible_tiles_coords,
                                                       target_tile)

        norm = self.calc_normalizer_distance(pheromone_levels,
                                             possible_tiles_distances)
        
        for direction in pheromone_levels.keys():
            if pheromone_levels[direction]:
                try:
                    tile_probability[direction] = pheromone_levels[direction]/(possible_tiles_distances[direction]*norm)
                except ZeroDivisionError:
                    tile_probability[direction] = self.max_probability

        print(tile_probability)

        return tile_probability

    def calculate_probability_low_energy_return(self, possible_tiles_coords, charge_map, charging_tile):
        tile_probability = {'front':None,
                            'right':None,
                            'rear':None,
                            'left':None}

        pheromone_levels = self.get_pheromone_levels(possible_tiles_coords,
                                                     charge_map)

        possible_tiles_distances = self.calc_distances(possible_tiles_coords,
                                                       charging_tile)

        norm = self.calc_normalizer_distance_charge(pheromone_levels,
                                                    possible_tiles_distances)
        
        for direction in pheromone_levels.keys():
            if pheromone_levels[direction]:
                try:
                    tile_probability[direction] = pow(pheromone_levels[direction], 2)/(possible_tiles_distances[direction]*norm)
                except ZeroDivisionError:
                    tile_probability[direction] = self.max_probability

        print(tile_probability)

        return tile_probability

##    def calculate_probability(self, possible_tiles_coords, pheromone_map, explored_tiles_map=[], target_tile=None):
##        tile_probability = {'front':None,
##                            'right':None,
##                            'rear':None,
##                            'left':None}
##
##        pheromone_levels = self.get_pheromone_levels(possible_tiles_coords,
##                                                     pheromone_map)
##
##        if target_tile:
##            possible_tiles_distances = self.calc_distances(possible_tiles_coords,
##                                                           target_tile)
##
##            norm = self.calc_normalizer_distance(pheromone_levels,
##                                                 possible_tiles_distances)
##        else:
##            exploration = self.get_exploration(possible_tiles_coords,
##                                               explored_tiles_map)
##
##            norm = self.calc_normalizer_exploration(pheromone_levels,
##                                                    exploration)
##        
##        for direction in pheromone_levels.keys():
##            if pheromone_levels[direction]:
##                if target_tile:
##                    try:
##                        tile_probability[direction] = pheromone_levels[direction]/(possible_tiles_distances[direction]*norm)
##                    except ZeroDivisionError:
##                        tile_probability[direction] = self.max_probability
##                else:                    
##                    tile_probability[direction] = pheromone_levels[direction]*exploration[direction]/norm
##
##        print(tile_probability)
##
##        return tile_probability

    def get_pheromone_levels(self, possible_tiles_coords, pheromone_map):
        pheromone_levels = {'front':None,
                            'right':None,
                            'rear':None,
                            'left':None}
        
        for direction in possible_tiles_coords.keys():
            if possible_tiles_coords[direction]:
                pheromone_levels[direction] = pheromone_map.get_tile_pheromone_level(possible_tiles_coords[direction])

        print(pheromone_levels)

        return pheromone_levels

    def get_exploration(self, possible_tiles_coords, explored_tiles_map):
        explored_tiles = {'front':None,
                          'right':None,
                          'rear':None,
                          'left':None}

        for direction in possible_tiles_coords.keys():
            if possible_tiles_coords[direction]:
                if explored_tiles_map.get_tile_on(possible_tiles_coords[direction]):
                    explored_tiles[direction] = 1/1.1
                else:
                    explored_tiles[direction] = 1.0

        print(explored_tiles)

        return explored_tiles

    def sum_pheromone(self, possible_tiles_coords, pheromone_levels):
        total_pheromone = 0
        for direction in pheromone_levels.keys():
            if pheromone_levels[direction]:
                total_pheromone += pheromone_levels[direction]

        print(total_pheromone)

        return total_pheromone

    def calc_distances(self, possible_tiles_coords, target_tile):
        possible_tiles_distances = {'front':None,
                                    'right':None,
                                    'rear':None,
                                    'left':None}

        for direction in possible_tiles_coords.keys():
            if possible_tiles_coords[direction]:
                possible_tiles_distances[direction] = pow((pow(target_tile[0]-possible_tiles_coords[direction][0], 2)+pow(target_tile[1]-possible_tiles_coords[direction][1], 2)), 0.5)

        print(possible_tiles_distances)

        return possible_tiles_distances

    def calc_normalizer_distance(self, pheromone_levels, possible_tiles_distances):
        norm = 0
        for direction in pheromone_levels.keys():
            if pheromone_levels[direction]:
                norm += pheromone_levels[direction]*possible_tiles_distances[direction]

        print(norm)

        return norm

    def calc_normalizer_distance_charge(self, pheromone_levels, possible_tiles_distances):
        norm = 0
        for direction in pheromone_levels.keys():
            if pheromone_levels[direction]:
                norm += pow(pheromone_levels[direction], 2)*possible_tiles_distances[direction]

        print(norm)

        return norm

    def calc_normalizer_exploration(self, pheromone_levels, exploration):
        norm = 0
        for direction in pheromone_levels.keys():
            if pheromone_levels[direction]:
                norm += pheromone_levels[direction]*exploration[direction]

        print(norm)

        return norm
        
