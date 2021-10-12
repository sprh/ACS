#ifndef TASK2_RECTANGLE_H
#define TASK2_RECTANGLE_H

#include "iostream"
#include "fstream"
#include "../point/point.h"
#include "../shape.h"
#include "../../random/random.h"

using std::ifstream;
using std::ofstream;

// Прямоугольник
class Rectangle: public Shape {
public:
    virtual ~Rectangle();
    // Ввод параметров прямоугольника из файла
    virtual void In(ifstream &ifst);
    // Случайный ввод параметров прямоугольника
    virtual void InRnd();
    // Вывод параметров прямоугольника в форматируемый поток
    virtual void Out(ofstream &ofst);
    // Вычисление периметра прямоугольника
    virtual double Area();
private:
     Point p1, p2;
};

#endif //TASK2_RECTANGLE_H
