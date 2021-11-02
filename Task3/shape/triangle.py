from extensions.random_extension import get_random_point, get_random_color
from shape import Shape
from point import side_from_points, Point
from color import Color


# Triangle figure.
class Triangle(Shape):
    __p1: Point
    __p2: Point
    __p3: Point

    # Init of a triangle.
    def __init__(self, p1: Point, p2: Point, p3: Point, color: Color):
        Shape.__init__(self, color)
        self.__p1 = p1
        self.__p2 = p2
        self.__p3 = p3

    # Method to get a data as a string.
    def to_string(self) -> str:
        return "It is a {color} triangle: " \
               "{p1}, {p2}, {p3}. Area = {area}".\
            format(color=self.__color, p1=self.__p1.to_string(),
                   p2=self.__p2.to_string(), p3=self.__p3.to_string(), area=self.area())

    # Returns an area of the triangle.
    def area(self) -> float:
        a = side_from_points(self.__p1, self.__p2)
        b = side_from_points(self.__p1, self.__p3)
        c = side_from_points(self.__p2, self.__p3)
        s = (a + b + c) / 2
        return (s * (s - a) * (s - b) * (s - c)) ** 0.5


# Returns a random triangle.
def get_random_figure() -> Triangle:
    return Triangle(get_random_point(), get_random_point(), get_random_point(), get_random_color())
