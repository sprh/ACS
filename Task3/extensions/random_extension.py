import random

from shape.color import Color
from shape.point import Point


def get_random_point() -> Point:
    return Point(random.randint(1, 1000000), random.randint(1, 1000000))


def get_random_color() -> Color:
    return random.choice(list(Color))
