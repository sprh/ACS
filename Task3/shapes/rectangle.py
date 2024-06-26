from extensions.random_extension import get_random_point, get_random_color
from shapes.shape import Shape
from shapes.point import Point
from shapes.color import Color


# Rectangle figure.
class Rectangle(Shape):
    __p1: Point
    __p2: Point

    # Init of a rectangle.
    def __init__(self, p1: Point, p2: Point, color: Color):
        Shape.__init__(self, color)
        self.__p1 = p1
        self.__p2 = p2

    # Returns a string with rectangle data.
    def to_string(self) -> str:
        return "It is a {color} rectangle: " \
               "{p1}, {p2}. Area = {area}". \
            format(color=self.color.name, p1=self.__p1.to_string(),
                   p2=self.__p2.to_string(), area=self.area())

    # Returns an area of a rectangle.
    def area(self) -> float:
        return 0.5 * (self.__p2.x - self.__p1.x) * (self.__p1.y - self.__p2.y)

    # Returns a random rectangle.
    @classmethod
    def get_random_rectangle(cls):
        return cls(get_random_point(), get_random_point(), get_random_color())

