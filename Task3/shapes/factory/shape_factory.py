import shapes.color
from extensions.random_extension import get_random_int
from shapes.circle import Circle
from shapes.point import Point
from shapes.rectangle import Rectangle
from shapes.shape import Shape
from shapes.triangle import Triangle
from shapes.color import get_color_from_int


def get_random_shape() -> Shape:
    shape_number = get_random_int(1, 3)
    if shape_number == 1:
        return Rectangle.get_random_rectangle()
    elif shape_number == 2:
        return Triangle.get_random_triangle()
    return Circle.get_random_circle()


def get_shape(data: [int]) -> Shape:
    key = data[0]
    if key == 1:
        return Rectangle(Point(data[1], data[2]), Point(data[3], data[4]), get_color_from_int(data[5]))
    elif key == 2:
        return Triangle(Point(data[1], data[2]), Point(data[3], data[4]), Point(data[5], data[6]),
                        get_color_from_int(data[7]))
    elif key == 3:
        return Circle(data[1], Point(data[2], data[3]), get_color_from_int(data[4]))
    else:
        raise ValueError
