import enum


class Color(enum.Enum):
    red = 0
    orange = 1
    yellow = 2
    green = 3
    light_blue = 4
    dark_blue = 5
    purple = 6


def get_color_from_int(number: int) -> Color:
    for color in Color:
        if color.value == number:
            return color
    return Color.red
