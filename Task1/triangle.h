#ifndef __triangle__
#define __triangle__

//------------------------------------------------------------------------------
// triangle.h - содержит описание треугольника
//------------------------------------------------------------------------------

#include <fstream>
using namespace std;

#include "rnd.h"
#include "math.h"
#include "extensions.h"
#include "point.h"

//------------------------------------------------------------------------------
// треугольник
struct triangle {
    point p1, p2, p3;
};

// Ввод параметров треугольника из файла
void In(triangle &t, ifstream &ifst);

// Случайный ввод параметров треугольника
void InRnd(triangle &t);

// Вывод параметров треугольника в форматируемый поток
void Out(triangle &t, ofstream &ofst);

// Вычисление площади треугольника
double Area(triangle &t);

// Длина стороны из 2 точек
double SideFromPoints(int x1, int y1, int x2, int y2);

#endif //__triangle__
