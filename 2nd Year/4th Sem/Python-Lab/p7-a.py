import math

class Shape:
    def __init__(self):
        self.area = 0
        self.name = ""
    
    def showarea(self):
        print("The area of ",self.name," is ",self.area," units.")

class Circle(Shape):
    def __init__(self, radius):
        self.radius = radius
        self.area = 0
        self.name = "Circle"
    
    def Calccirc(self):
        self.area = math.pi*self.radius*self.radius
    
radius=int(input("Enter the radius : "))
c1 = Circle(radius)
c1.Calccirc()
c1.showarea()

class Triangle(Shape):
    def __init__(self, base, height):
        self.base = base
        self.height = height
        self.area = 0
        self.name = "Triangle"
    def CalcTria(self):
        self.area = 0.5*self.base*self.height

base = int(input("Enter the base : "))
height = int(input("Enter the height : "))
t1 = Triangle(base,height)
t1.CalcTria()
t1.showarea()

class Rectangle(Shape):
    def __init__(self,length,breadth):
        self.length = length
        self.breadth = breadth
        self.area = 0
        self.name = "Rectangle"
    def CalcRect(self):
        self.area = self.length*self.breadth

length = int(input("Enter the length : "))
breadth = int(input("Enter the breadth : "))
r1 = Rectangle(length,breadth)
r1.CalcRect()
r1.showarea()