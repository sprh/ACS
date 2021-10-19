#ifndef TASK2_RANDOM_H
#define TASK2_RANDOM_H
#include <cstdlib>
#include <ctime>
#include "cmath"
#include "../shape/point/point.h"

class Random {
public:
    // Генерация случайного числа в заданном диапазоне
    static int Get(int left, int right) {
        if (left > right) {
            return -1;
        }
        return left + (rand() % (right - left + 1));
    }

    static int Get() {
        return rand();
    }

    static Point GetRandomPoint() {
        Point p = Point(rand(), rand());
        return p;
    }
};

#endif //TASK2_RANDOM_H
