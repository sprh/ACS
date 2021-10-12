#ifndef TASK2_RANDOM_H
#define TASK2_RANDOM_H
#include <cstdlib>
#include <ctime>
#include "../shape/point/point.h"

class Random {
public:
    Random(int f, int l) {
        if(f <= l) {
            first = f;
            last = l;
        } else {
            first = l;
            last = f;
        }
        // системные часы в качестве инициализатора
        srand(static_cast<unsigned int>(time(0)));
    }

    Random() {
        first = INT16_MIN;
        last = INT16_MAX;
        srand(static_cast<unsigned int>(time(0)));
    }
    // Генерация случайного числа в заданном диапазоне
    int Get() {
        return rand() % (last - first + 1) + first;
    }

    Point GetRandomPoint() {
        Point p = Point(rand(), rand());
    }
private:
    int first;
    int last;
};

#endif //TASK2_RANDOM_H
