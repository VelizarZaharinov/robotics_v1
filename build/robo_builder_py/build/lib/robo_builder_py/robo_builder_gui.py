import tkinter

import robo_builder_py.controls as controls
import robo_builder_py.robo_builder as robo_builder
import robo_builder_py.points as points

class RobotApp:
    def __init__(self, root):
        # Copy root window
        self.environment_window = root

        # GUI params
        self.box_side = 50
        self.box_spacing = 100

        # Configure main window
        self.environment_window.title('UR10e Tower Builder')
        self.environment_window.protocol('WM_DELETE_WINDOW',
                                         self.close_app)
        self.environment_window.rowconfigure(0,
                                             weight=1)
        self.environment_window.columnconfigure(0,
                                                weight=1)
        self.environment_window.geometry('650x900')

        # Init points
        self.points = points.Points()

        # Create robot
        self.robot = robo_builder.RobotAi(self)

        # Create gui
        self.create_robot_environment()
        self.control_window = controls.RoboControl(self.environment_window,
                                                   self)

    def create_robot_environment(self):
        # Frame holding the environment
        self.environment_frame = tkinter.LabelFrame(self.environment_window,
                                                    bd=2,
                                                    text='Robot environment')
        self.environment_frame.rowconfigure(0,
                                            weight=1)
        self.environment_frame.rowconfigure(1,
                                            weight=1)
        self.environment_frame.columnconfigure(0,
                                               weight=1)
        self.environment_frame.columnconfigure(1,
                                               weight=1)
        # Create environment objects
        self.create_table_a()
        self.create_table_b()
        self.create_tower()

        self.place_cubes_on_table_a()
        self.place_cubes_on_table_b()
        self.place_tower_cubes()

        self.environment_frame.grid(row=0,
                                    column=0,
                                    sticky='nesw')

    def create_table_a(self):
        frame = tkinter.Frame(self.environment_frame,
                              bd=2,
                              relief='groove')
        frame.rowconfigure(0,
                           weight=1)
        frame.columnconfigure(0,
                              weight=1)
        self.table_a = tkinter.Canvas(frame,
                                      height=2*self.box_spacing+self.box_side,
                                      width=2*self.box_spacing+self.box_side)

        self.table_a.grid(row=0,
                          column=0,
                          sticky='nesw')
        frame.grid(row=1,
                   column=0,
                   sticky='nesw')

    def create_table_b(self):
        frame1 = tkinter.Frame(self.environment_frame,
                               bd=2,
                               relief='groove')
        frame2 = tkinter.Frame(self.environment_frame,
                               bd=2,
                               relief='groove')
        frame1.rowconfigure(0,
                            weight=1)
        frame1.columnconfigure(0,
                               weight=1)
        frame2.rowconfigure(0,
                            weight=1)
        frame2.columnconfigure(0,
                               weight=1)
        self.table_b_lvl1 = tkinter.Canvas(frame1,
                                           height=2*self.box_spacing+self.box_side,
                                           width=2*self.box_spacing+self.box_side)
        self.table_b_lvl2 = tkinter.Canvas(frame2,
                                           height=2*self.box_spacing+self.box_side,
                                           width=2*self.box_spacing+self.box_side)

        self.table_b_lvl1.grid(row=0,
                               column=0,
                               sticky='nesw')
        self.table_b_lvl2.grid(row=0,
                               column=0,
                               sticky='nesw')
        frame1.grid(row=0,
                    column=1,
                    sticky='nesw')
        frame2.grid(row=1,
                    column=1,
                    sticky='nesw')

    def create_tower(self):
        frame = tkinter.Frame(self.environment_frame,
                              bd=2,
                              relief='groove')
        frame.rowconfigure(0,
                           weight=1)
        frame.columnconfigure(0,
                              weight=1)
        self.tower = tkinter.Canvas(frame,
                                    height=2*self.box_spacing+self.box_side,
                                    width=2*self.box_spacing+self.box_side)

        self.tower.grid(row=0,
                        column=0,
                        sticky='nesw')
        frame.grid(row=0,
                   column=0,
                   sticky='nesw')

    def place_cubes_on_table_a(self, layout='y'):
        if layout=='y':
            if self.table_a.find_withtag('top_view_tower_box0'):
                for i in range(4):
                    self.table_a.coords('top_view_tower_box'+str(i),
                                        i*self.box_side+self.box_spacing, self.box_spacing,
                                        (i+1)*self.box_side+self.box_spacing, self.box_spacing+self.box_side)
            else:
                for i in range(4):
                    self.table_a.create_rectangle(i*self.box_side+self.box_spacing, self.box_spacing,
                                                  (i+1)*self.box_side+self.box_spacing, self.box_spacing+self.box_side,
                                                  tags='top_view_tower_box'+str(i))
        else:
            if self.table_a.find_withtag('top_view_tower_box0'):
                for i in range(4):
                    self.table_a.coords('top_view_tower_box'+str(i),
                                        self.box_spacing, i*self.box_side+self.box_spacing,
                                        self.box_spacing+self.box_side, (i+1)*self.box_side+self.box_spacing)
            else:
                for i in range(4):
                    self.table_a.create_rectangle(self.box_spacing, i*self.box_side+self.box_spacing,
                                                  self.box_spacing+self.box_side, (i+1)*self.box_side+self.box_spacing,
                                                  tags='top_view_tower_box'+str(i))

    def place_cubes_on_table_b(self):
        box_n = 1
        for i in range(3):
            for j in range(3):
                self.table_b_lvl1.create_rectangle(j*self.box_spacing+self.box_side/2, i*self.box_spacing+self.box_side/2,
                                                   j*self.box_spacing+3*self.box_side/2, i*self.box_spacing+3*self.box_side/2,
                                                   tags='box'+str(box_n))
                self.table_b_lvl1.create_text(j*self.box_spacing+self.box_side, i*self.box_spacing+self.box_side,
                                              tags='box'+str(box_n-1)+'_text',
                                              text='box'+str(box_n))
                box_n += 1

        for i in range(3):
            for j in range(3):
                if (i in [0, 2]) and (j in [0, 2]):
                    self.table_b_lvl2.create_rectangle(j*self.box_spacing+self.box_side/2, i*self.box_spacing+self.box_side/2,
                                                       j*self.box_spacing+3*self.box_side/2, i*self.box_spacing+3*self.box_side/2,
                                                       tags='box'+str(box_n))
                    self.table_b_lvl2.create_text(j*self.box_spacing+self.box_side, i*self.box_spacing+self.box_side,
                                                  tags='box'+str(box_n-1)+'_text',
                                                  text='box'+str(box_n))
                    box_n += 1
                elif (i==1) and (j==1):
                    self.table_b_lvl2.create_rectangle(j*self.box_spacing+self.box_side/2, i*self.box_spacing+self.box_side/2,
                                                       j*self.box_spacing+3*self.box_side/2, i*self.box_spacing+3*self.box_side/2,
                                                       tags='box'+str(box_n))
                    self.table_b_lvl2.create_text(j*self.box_spacing+self.box_side, i*self.box_spacing+self.box_side,
                                                  tags='box'+str(box_n-1)+'_text',
                                                  text='box'+str(box_n))
                    box_n += 1

    def place_tower_cubes(self):
        for i in range(len(self.points.tower)):
            for j in range(len(self.points.tower[i])):
                if self.points.tower[i][j]:
                    self.tower.create_rectangle(j*self.box_side+self.box_spacing, i*self.box_side+self.box_spacing/3,
                                                (j+1)*self.box_side+self.box_spacing, (i+1)*self.box_side+self.box_spacing/3,
                                                tags=self.points.tower[i][j]['name'])
                    self.tower.create_text(j*self.box_side+self.box_side/2+self.box_spacing, i*self.box_side+self.box_side/2+self.box_spacing/3,
                                           tags=self.points.tower[i][j]['name']+'_text',
                                           text=self.points.tower[i][j]['name'])

    def close_app(self):
        self.robot.destroy()
        self.environment_window.destroy()

def main():
    app = RobotApp(tkinter.Tk())

    app.environment_window.mainloop()

if __name__=='__main__':
    main()
