#ifndef TASK2_SHAPE_H
#define TASK2_SHAPE_H
#include "iostream"
#include "fstream"
#include "../random/random.h"

using std::ifstream;
using std::ofstream;

class Shape {
protected:
    static Random rnd20;
    static Random rnd2;
public:
    virtual ~Shape() {};
    // Ввод обобщенной фигуры
    static Shape *StaticIn(ifstream &ifdt);
    // Ввод обобщенной фигуры
    virtual void In(ifstream &ifdt) = 0;
    // Случайный ввод обобщенной фигуры
    static Shape *StaticInRnd();
    // Виртуальный метод ввода случайной фигуры
    virtual void InRnd() = 0;
    // Вывод обобщенной фигуры
    virtual void Out(ofstream &ofst) = 0;
    // Вычисление периметра обобщенной фигуры
    virtual double Area() = 0;
};


#endif //TASK2_SHAPE_H