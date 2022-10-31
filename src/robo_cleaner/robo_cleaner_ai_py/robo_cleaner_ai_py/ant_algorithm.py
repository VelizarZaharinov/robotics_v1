class AntAlgorithm:
    def __init__(self):
        self.max_probability = 1.0

    def calculate_probability(self, possible_tiles_coords, pheromone_map, target_tile=None):
        tile_probability = {'front':None,
                            'right':None,
                            'rear':None,
                            'left':None}

        pheromone_levels = self.get_pheromone_levels(possible_tiles_coords,
                                                     pheromone_map)

        if target_tile:
            possible_tiles_distances = self.calc_distances(possible_tiles_coords,
                                                           target_tile)

            norm = self.calc_normalizer(pheromone_levels,
                                        possible_tiles_distances)
        else:
            total_pheromone = self.sum_pheromone(possible_tiles_coords,
                                                 pheromone_levels)
        
        for direction in pheromone_levels.keys():
            if pheromone_levels[direction]:
                if target_tile:
                    try:
                        tile_probability[direction] = pheromone_levels[direction]/(possible_tiles_distances[direction]*norm)
                    except ZeroDivisionError:
                        tile_probability[direction] = self.max_probability
                else:                    
                    tile_probability[direction] = pheromone_levels[direction]/total_pheromone

        print(tile_probability)

        return tile_probability

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

    def calc_normalizer(self, pheromone_levels, possible_tiles_distances):
        norm = 0
        for direction in pheromone_levels.keys():
            if pheromone_levels[direction]:
                norm += pheromone_levels[direction]*possible_tiles_distances[direction]

        print(norm)

        return norm
        
