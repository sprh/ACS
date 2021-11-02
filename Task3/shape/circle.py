import math

from extensions.random_extension import get_random_point, get_random_int, get_random_color
from shape import Shape
from point import Point
from shape.color import Color


class Circle(Shape):
    __radius: int
    __center: Point

    def __init__(self, radius: int, center: Point, color: Color):
        Shape.__init__(self, color)
        self.__radius = radius
        self.__center = center

    def to_string(self) -> str:
        return "It is a {color} circle: center: " \
               "{center}, radius: {radius}. Area = {area}". \
            format(color=self.__color, center=self.__center.to_string(),
                   radius=self.__radius, area=self.area())

    def area(self) -> float:
        return math.pi * self.__radius ** 2


def get_random_figure() -> Circle:
    return Circle(get_random_int(), get_random_point(), get_random_color())
