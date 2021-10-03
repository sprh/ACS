#include "circle.h"

// Ввод параметров круга из файла
void In(circle &c, ifstream &ifst) {
    string x, y, radius, colorNumber;
    ifst >> x >> y >> radius >> colorNumber;
    c.x = StringToInt(x);
    c.y = StringToInt(y);
    c.radius = StringToInt(radius);
    int color = StringToInt(colorNumber);
}

// Случайный ввод параметров круга
void InRnd(circle &c) {
    c.x = Random();
    c.y = Random();
    c.radius = Random();
}

// Вывод параметров круга в форматируемый поток
void Out(circle &c, ofstream &ofst) {
    ofst << "It is a Circle: x = " << c.x << ", y =" <<
    c.y << ", radius = " << c.radius << ". Area = " << Area(c);
}

// Вычисление площади круга
double Area(circle &c) {
    return 3.14 * pow(c.radius, 2);
}