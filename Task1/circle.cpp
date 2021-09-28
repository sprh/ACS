#include "circle.h"

// Ввод параметров круга из файла
void In(circle &c, ifstream &ifst) {
    int colorNumber;
    ifst >> c.x >> c.y >> c.radius >> colorNumber;
}

// Случайный ввод параметров круга
void InRnd(circle &c) {
    c.x = Random();
    c.y = Random();
    c.radius = Random();
    c.c = RandomColor();
}

// Вывод параметров круга в форматируемый поток
void Out(circle &c, ofstream &ofst) {
    ofst << "It is a Circle: x = " << c.x << ", y =" <<
    c.y << ", radius = " << c.radius << ", color = " <<
    c.c << ". Area = " << Area(c) << "\n";
}

// Вычисление площади круга
double Area(circle &c) {
    return 3.14 * pow(c.radius, 2);
}