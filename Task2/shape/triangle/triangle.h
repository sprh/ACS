#ifndef TASK2_TRIANGLE_H
#define TASK2_TRIANGLE_H


#include "../shape.h"
// Треугольник
class Triangle: public Shape {
public:
    ~Triangle();
    // Ввод параметров треугольника из файла
    virtual void In(ifstream *ifst);
    // Случайный ввод параметров треугольника
    virtual void InRnd();
    // Вывод параметров треугольника в форматируемый поток
    virtual void Out(ofstream *ofst);
    // Вычисление периметра треугольника
    virtual double Area();
private:
    Point p1, p2, p3;
};


#endif //TASK2_TRIANGLE_H
