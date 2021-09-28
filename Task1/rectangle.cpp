//------------------------------------------------------------------------------
// rectangle.cpp - содержит процедуру ввода параметров
// для уже созданного прямоугольника
//------------------------------------------------------------------------------

#include "rectangle.h"

//------------------------------------------------------------------------------
// Ввод параметров прямоугольника из файла
void In(rectangle &r, ifstream &ifst) {
    int colorNumber;
    ifst >> r.x1 >> r.y1 >> r.x2 >> r.y2 >> colorNumber;
    r.c = ColorFromNumber(colorNumber);
}

// Случайный ввод параметров прямоугольника
void InRnd(rectangle &r) {
    r.x1 = Random();
    r.y1 = Random();
    do {
        r.x2 = Random();
        r.y2 = Random();
    } while (!(r.x1 < r.x2 && r.y1 > r.y2));
    r.c = RandomColor();
}

//------------------------------------------------------------------------------
// Вывод параметров прямоугольника в форматируемый поток
void Out(rectangle &r, ofstream &ofst) {
    ofst << "It is Rectangle: x1 = " << r.x1 << ", y1 = " << r.y1 <<
    ", x2 = " << r.x2 << ", y2 = " << r.y2 << ", color = " << r.c <<
    ".  Area = " << Area(r) << "\n";
}

//------------------------------------------------------------------------------
// Вычисление площади прямоугольника
double Area(rectangle &r) {
    return 0.5 * (r.x2 - r.x1) * (r.y1 - r.y2);
}
