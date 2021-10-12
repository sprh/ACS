#ifndef TASK2_COLOR_H
#define TASK2_COLOR_H

#include "fstream"
using std::ofstream;
class Color {
public:
    enum color {
        RED, ORANGE, YELLOW, GREEN, LIGHTBLUE, DARKBLUE, PURPLE
    };

    static color GetColor(const int &number);

    static void Out(const color &c, ofstream *ofst);
};

#endif //TASK2_COLOR_H
