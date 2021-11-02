from typing import TextIO

from shapes.factory.shape_factory import get_random_shape
from shapes.shape import Shape


class Container:
    __shapes: [Shape]

    def __init__(self, shapes: [Shape]):
        self.__shapes = shapes

    @classmethod
    def create_from_file(cls, file: TextIO):
        lines = file.readlines()
        for line in lines:
            for item in line.split():
                print(item)

    @classmethod
    def create_random(cls, count: int):
        return cls(get_random_shape() for _ in range(count))
