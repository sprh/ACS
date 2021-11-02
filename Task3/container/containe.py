from typing import TextIO

from shapes.factory.shape_factory import get_random_shape
from shapes.shape import Shape


class Container:
    __shapes: [Shape]
    __len: int

    def __init__(self, shapes: [Shape], len: int):
        self.__shapes = shapes
        self.__len = len

    @classmethod
    def in_from_file(cls, file: TextIO):
        lines = file.readlines()
        for line in lines:
            for item in line.split():
                print(item)
        return cls([], 0)

    @classmethod
    def in_random(cls, count: int):
        return cls([get_random_shape() for _ in range(count)], count)

    def out(self, file: TextIO):
        file.write('Container contains {len} elements.\n'.format(len=self.__len))
        for i in range(self.__len):
            file.write("{i}: {shape}.\n".format(i=i + 1, shape=self.__shapes[i].to_string()))

