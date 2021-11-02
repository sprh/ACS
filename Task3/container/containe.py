from typing import TextIO

from shapes.factory.shape_factory import get_random_shape, get_shape
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
        shapes = []
        len = 0
        shape_number = 0
        for line in lines:
            shape_number += 1
            try:
                shapes.append(get_shape(list(map(int, line.split()))))
                len += 1
            except ValueError:
                print('[Shape {number}] Shape params should be integer values; key should be between '
                      '1 and 3!'.format(number=shape_number))
            except IndexError:
                print('[Shape {number}] Each line should contains all data for '
                      'a shape!'.format(number=shape_number))
        return cls(shapes, len)

    @classmethod
    def in_random(cls, count: int):
        return cls([get_random_shape() for _ in range(count)], count)

    def out(self, file: TextIO):
        file.write('Container contains {len} elements.\n'.format(len=self.__len))
        for i in range(self.__len):
            file.write("{i}: {shape}.\n".format(i=i + 1, shape=self.__shapes[i].to_string()))

    def average_area(self):
        if self.__len == 0:
            return 0.0
        area_sum = 0.0
        for shape in self.__shapes:
            area_sum += shape.area()
        return area_sum / self.__len

    def remove_items_with_area_bigger_than_average(self):
        current_len = 0
        average_area = self.average_area()
        for i in range(self.__len):
            if self.__shapes[i].area() <= average_area:
                self.__shapes[current_len] = self.__shapes[i]
                current_len += 1
        self.__len = current_len
