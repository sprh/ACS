#include "circle.h"

Circle::~Circle() = default;

// Ввод параметров круга из файл
void Circle::In(ifstream *ifst) {
    int colorNumber = ReadInt(ifst);
    center.x = ReadInt(ifst);
    center.y = ReadInt(ifst);
    radius = ReadInt(ifst);
    color = Color::GetColor(colorNumber);
}

// Случайный ввод параметров круга
void Circle::InRnd() {
    center = Random::GetRandomPoint();
    radius = abs(Random::Get());
    color = Color::GetColor(Random::Get(1, 7));
}

// Вывод параметров круга в форматируемый поток
void Circle::Out(ofstream *ofst) {
    *ofst << "It is Circle: ";
    center.Out(ofst);
    *ofst << ". ";
    Color::Out(color, ofst);
    *ofst << ". Area = " << Area() << ".\n";
}

// Вычисление периметра круга
double Circle::Area() {
    return 3.14 * pow(radius, 2);
}
