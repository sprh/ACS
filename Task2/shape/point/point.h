#ifndef TASK2_POINT_H
#define TASK2_POINT_H
#include "iostream"
#include "fstream"
using std::ofstream;

class Point {
public:
    int x, y; // Координаты
    Point(): x(0), y(0) {}
    Point(int x, int y): x(x), y(y) {};
    void Out(ofstream *ofst);
};


#endif //TASK2_POINT_H
