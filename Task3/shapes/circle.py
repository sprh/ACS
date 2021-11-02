import math

from extensions.random_extension import get_random_int, get_random_point, get_random_color
from shapes.shape import Shape
from shapes.point import Point
from shapes.color import Color


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
            format(color=self.color.name, center=self.__center.to_string(),
                   radius=self.__radius, area=self.area())

    def area(self) -> float:
        return math.pi * self.__radius ** 2

    @classmethod
    # Returns a random circle.
    def get_random_circle(cls):
        return cls(get_random_int(), get_random_point(), get_random_color())
