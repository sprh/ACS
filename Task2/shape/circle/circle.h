//
// Created by Софья Тимохина on 12.10.2021.
//

#ifndef TASK2_CIRCLE_H
#define TASK2_CIRCLE_H


#include "iostream"
#include "fstream"
#include "../point/point.h"
#include "../shape.h"
#include "../../random/random.h"
#include <cmath>

using std::ifstream;
using std::ofstream;

// Круг
class Circle: public Shape {
public:
    ~Circle();
    // Ввод параметров круга из файла
    virtual void In(ifstream *ifst);
    // Случайный ввод параметров круга
    virtual void InRnd();
    // Вывод параметров круга в форматируемый поток
    virtual void Out(ofstream *ofst);
    // Вычисление периметра круга
    virtual double Area();
private:
    Point center;
    int radius;
};


#endif //TASK2_CIRCLE_H
