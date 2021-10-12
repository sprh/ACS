#ifndef TASK2_POINT_H
#define TASK2_POINT_H
#include "iostream"
#include "fstream"
using std::ofstream;

class Point {
    int x, y; // Координаты
    virtual void Out(ofstream &ofst) = 0;
};


#endif //TASK2_POINT_H
