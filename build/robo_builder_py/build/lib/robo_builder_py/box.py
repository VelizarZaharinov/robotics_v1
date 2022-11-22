class Box:
    def __init__(self, pos_vector):
        self.pos_vector = pos_vector

    def update_pos(self, new_pos):
        self.pos_vector = new_pos
