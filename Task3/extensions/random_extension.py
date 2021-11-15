import random

from shapes.color import Color
from shapes.point import Point


# Returns a random point with coordinates from lower_bound to upper_bound.
# Default is from -10.000 to 10.000.
def get_random_point(lower_bound: int = -10000, upper_bound: int = 10000) -> Point:
    return Point(get_random_int(lower_bound, upper_bound), get_random_int(lower_bound, upper_bound))


# Returns a random color.
def get_random_color() -> Color:
    return random.choice(list(Color))


# Returns a random integer value from lower_bound to upper_bound.
# # Default is from 1 to 10.000.
def get_random_int(lower_bound: int = 1, upper_bound: int = 10000) -> int:
    return random.randint(lower_bound, upper_bound)
