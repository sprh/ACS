//------------------------------------------------------------------------------
// triangle.cpp - содержит функции обработки треугольника
//------------------------------------------------------------------------------

#include "triangle.h"

//------------------------------------------------------------------------------
// Ввод параметров треугольника из потока
void In(triangle &t, ifstream &ifst) {
    string x1, x2, x3, y1, y2, y3,  colorNumber;
    ifst >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> colorNumber;
    t.x1 = StringToInt(x1);
    t.x2 = StringToInt(x2);
    t.x3 = StringToInt(x3);
    t.y1 = StringToInt(y1);
    t.y2 = StringToInt(y2);
    t.y3 = StringToInt(y3);
}

// Случайный ввод параметров треугольника
void InRnd(triangle &t) {
    t.x1 = Random();
    t.y1 = Random();
    do {
        t.x2 = Random();
        t.y2 = Random();
    } while (!(t.x1 != t.x2 && t.y1 != t.y2));
    double firstSize = SideFromPoints(t.x1, t.y1, t.x2, t.y2);
    do {
        t.x3 = Random();
        t.y3 = Random();
    } while (firstSize + SideFromPoints(t.x1, t.y1, t.x3, t.y3) < SideFromPoints(t.x2, t.y2, t.x3, t.y3) ||
            firstSize + SideFromPoints(t.x2, t.y2, t.x3, t.y3) < SideFromPoints(t.x1, t.y1, t.x3, t.y3) ||
            SideFromPoints(t.x2, t.y2, t.x3, t.y3) + SideFromPoints(t.x1, t.y1, t.x3, t.y3) < firstSize);

}

// Длина стороны из 2 точек
double SideFromPoints(int x1, int y1, int x2, int y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}
//------------------------------------------------------------------------------
// Вывод параметров треугольника в поток
void Out(triangle &t, ofstream &ofst) {
    ofst << "It is Triangle: x1 = "
         << t.x1 << ", y1 = " << t.y1
         << ", x2 = " << t.x2 << ", y2 = " << t.y2 <<
         ", x3 = " << t.x3 << ", y3 = " << t.y3 << ". Area = " << Area(t);
}

//------------------------------------------------------------------------------
// Вычисление площади треугольника
double Area(triangle &t) {
    double a = SideFromPoints(t.x1, t.y1, t.x2, t.y2);
    double b = SideFromPoints(t.x1, t.y1, t.x3, t.y3);
    double c = SideFromPoints(t.x2, t.y2, t.x3, t.y3);
    double s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}
