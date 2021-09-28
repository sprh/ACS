#ifndef __circle__
#define __circle__

//------------------------------------------------------------------------------
// circle.h - содержит описание круга  и его интерфейса
//------------------------------------------------------------------------------
#include <fstream>
using namespace std;

#include "rnd.h"
#include "color.h"
#include "math.h"

struct circle {
    int x, y; // координаты центра.
    int radius; // радиус.
    color c; // цвет.
};

// Ввод параметров круга из файла
void In(circle &c, ifstream &ifst);

// Случайный ввод параметров круга
void InRnd(circle &c);

// Вывод параметров круга в форматируемый поток
void Out(circle &c, ofstream &ofst);

// Вычисление площади круга
double Area(circle &c);

#endif //__circle__