from shapes.color import Color


# A shape class
class Shape:
    __color: Color

    # A default init for every shapes; contains only color.
    def __init__(self, color: Color):
        self.__color = color

    # Returns a shapes as a string.
    def to_string(self) -> str:
        return "It is a %s shapes" % self.__color

    def area(self) -> float:
        return 0.0

