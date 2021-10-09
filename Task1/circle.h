#ifndef __circle__
#define __circle__

//------------------------------------------------------------------------------
// circle.h - содержит описание круга  и его интерфейса
//------------------------------------------------------------------------------
#include <fstream>
using namespace std;

#include "rnd.h"
#include "math.h"
#include "extensions.h"
#include "point.h"

struct circle {
    point center;// координаты центра.
    int radius; // радиус.
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