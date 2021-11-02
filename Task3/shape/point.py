import random


class Point:
    x: int
    y: int

    def __init__(self, x: int, y: int):
        self.x = x
        self.y = y

    def to_string(self) -> str:
        return 'x = %s, y = %s' % (self.x, self.y)


def side_from_points(p1: Point, p2: Point) -> float:
    return ((p1.x - p2.x) ** 2 + (p1.y - p2.y) ** 2) ** 0.5


def get_random_point() -> Point:
    return Point(random.randint(1, 1000000), random.randint(1, 1000000))
