from color import Color


# A shape class
class Shape:
    color: Color

    # A default init for every shape; contains only color.
    def __init__(self, color: Color):
        self.color = color

    # Returns a shape as a string.
    def to_string(self) -> str:
        return "It is a %s shape" % self.color
