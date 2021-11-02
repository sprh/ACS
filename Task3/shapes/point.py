# Point class
class Point:
    x: int
    y: int

    # Point init.
    def __init__(self, x: int, y: int):
        self.x = x
        self.y = y

    # Returns a string with point data.
    def to_string(self) -> str:
        return 'x = %s, y = %s' % (self.x, self.y)


# Returns a side length from two points.
def side_from_points(p1: Point, p2: Point) -> float:
    return ((p1.x - p2.x) ** 2 + (p1.y - p2.y) ** 2) ** 0.5
