#include "circle.h"

Circle::~Circle() {
    delete this;
}

// Ввод параметров круга из файл
void Circle::In(ifstream *ifst) {
    int colorNumber;
    *ifst >> colorNumber >> center.x >> center.y >> radius;
    color = Color::GetColor(colorNumber);
}

// Случайный ввод параметров круга
void Circle::InRnd() {
    Random rnd = Random();
    Random rndColor = Random(1, 7);
    center = rnd.GetRandomPoint();
    radius = abs(rnd.Get());
    color = Color::GetColor(rndColor.Get());
}

// Вывод параметров круга в форматируемый поток
void Circle::Out(ofstream *ofst) {
    *ofst << "It is Circle: ";
    center.Out(ofst);
    *ofst << ". ";
    Color::Out(color, ofst);
    *ofst << "\n";
}

// Вычисление периметра круга
double Circle::Area() {
    return 3.14 * pow(radius, 2);
}
