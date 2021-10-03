#ifndef __rectangle__
#define __rectangle__

//------------------------------------------------------------------------------
// rectangle.h - содержит описание прямоугольника  и его интерфейса
//------------------------------------------------------------------------------

#include <fstream>
using namespace std;

# include "rnd.h"
#include "extensions.h"

// прямоугольник
struct rectangle {
    int x1, y1; // первая точка.
    int x2, y2; // вторая точка.
};

// Ввод параметров прямоугольника из файла
void In(rectangle &r, ifstream &ifst);

// Случайный ввод параметров прямоугольника
void InRnd(rectangle &r);

// Вывод параметров прямоугольника в форматируемый поток
void Out(rectangle &r, ofstream &ofst);

// Вычисление площади прямоугольника
double Area(rectangle &r);

#endif //__rectangle__
