import random

from shapes.color import Color
from shapes.point import Point


def get_random_point() -> Point:
    return Point(random.randint(1, 1000000), random.randint(1, 1000000))


def get_random_color() -> Color:
    return random.choice(list(Color))


def get_random_int(left_bound: int = 1, right_bound: int = 10000) -> int:
    return random.randint(left_bound, right_bound)
