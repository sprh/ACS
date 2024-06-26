#ifndef __shape__
#define __shape__

//------------------------------------------------------------------------------
// shape.h - содержит описание обобщающей геометрической фигуры,
//------------------------------------------------------------------------------

#include "rectangle.h"
#include "triangle.h"
#include "circle.h"
#include "extensions.h"

//------------------------------------------------------------------------------
// структура, обобщающая все имеющиеся фигуры
struct shape {
    // значения ключей для каждой из фигур
    enum key {RECTANGLE, TRIANGLE, CIRCLE};
    enum color {RED, ORANGE, YELLOW, GREEN, LIGHTBLUE, DARKBLUE, PURPLE};
    key k; // ключ
    color col; // цвет
    // используемые альтернативы
    union { // используем простейшую реализацию
        rectangle r;
        triangle t;
        circle c;
    };
};

// Ввод обобщенной фигуры
shape *In(ifstream &ifdt);

// Случайный ввод обобщенной фигуры
shape *InRnd();

// Вывод обобщенной фигуры
void Out(shape &s, ofstream &ofst);

// Вычисление периметра обобщенной фигуры
double Area(shape &s);

#endif
