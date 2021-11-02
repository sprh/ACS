from extensions.random_extension import get_random_int
from shapes.circle import Circle
from shapes.rectangle import Rectangle
from shapes.shape import Shape
from shapes.triangle import Triangle


def get_random_shape() -> Shape:
    shape_number = get_random_int(1, 3)
    if shape_number == 1:
        return Rectangle.get_random_rectangle()
    elif shape_number == 2:
        return Triangle.get_random_triangle()
    return Circle.get_random_circle()