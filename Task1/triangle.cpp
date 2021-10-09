//------------------------------------------------------------------------------
// triangle.cpp - содержит функции обработки треугольника
//------------------------------------------------------------------------------

#include "triangle.h"

//------------------------------------------------------------------------------
// Ввод параметров треугольника из потока
void In(triangle &t, ifstream &ifst) {
    string x1, x2, x3, y1, y2, y3,  colorNumber;
    ifst >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> colorNumber;
    t.p1.x = StringToInt(x1);
    t.p2.x = StringToInt(x2);
    t.p3.x = StringToInt(x3);
    t.p1.y = StringToInt(y1);
    t.p2.y = StringToInt(y2);
    t.p3.y = StringToInt(y3);
}

// Случайный ввод параметров треугольника
void InRnd(triangle &t) {
    t.p1.x = Random();
    t.p1.y = Random();
    do {
        t.p2.x = Random();
        t.p2.y = Random();
    } while (t.p1.x == t.p2.x || t.p1.y == t.p2.y);
    double firstSize = SideFromPoints(t.p1.x, t.p1.y, t.p2.x, t.p2.y);
    do {
        t.p3.x = Random();
        t.p3.y = Random();
    } while (firstSize + SideFromPoints(t.p1.x, t.p1.y, t.p3.x, t.p3.y) < SideFromPoints(t.p2.x, t.p2.y, t.p3.x, t.p3.y) ||
            firstSize + SideFromPoints(t.p2.x, t.p2.y, t.p3.x, t.p3.y) < SideFromPoints(t.p1.x, t.p1.y, t.p3.x, t.p3.y) ||
            SideFromPoints(t.p2.x, t.p2.y, t.p3.x, t.p3.y) + SideFromPoints(t.p1.x, t.p1.y, t.p3.x, t.p3.y) < firstSize);

}

// Длина стороны из 2 точек
double SideFromPoints(int x1, int y1, int x2, int y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}
//------------------------------------------------------------------------------
// Вывод параметров треугольника в поток
void Out(triangle &t, ofstream &ofst) {
    ofst << "It is Triangle: x1 = "
         << t.p1.x << ", y1 = " << t.p1.y
         << ", x2 = " << t.p2.x << ", y2 = " << t.p2.y <<
         ", x3 = " << t.p3.x << ", y3 = " << t.p3.y << ". Area = " << Area(t);
}

//------------------------------------------------------------------------------
// Вычисление площади треугольника
double Area(triangle &t) {
    double a = SideFromPoints(t.p1.x, t.p1.y, t.p2.x, t.p2.y);
    double b = SideFromPoints(t.p1.x, t.p1.y, t.p3.x, t.p3.y);
    double c = SideFromPoints(t.p2.x, t.p2.y, t.p3.x, t.p3.y);
    double s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}
