#include "rectangle.h"

Rectangle::~Rectangle() {
    delete this;
}

// Ввод параметров прямоугольника из файла
void Rectangle::In(ifstream *ifst) {
    int colorNumber = ReadInt(ifst);
    p1.x = ReadInt(ifst);
    p1.y = ReadInt(ifst);
    p2.x = ReadInt(ifst);
    p2.y = ReadInt(ifst);
    color = Color::GetColor(colorNumber);
}

// Случайный ввод параметров прямоугольника
void Rectangle::InRnd() {
    Random rnd = Random();
    Random rndColor = Random(1, 7);
    p1 = rnd.GetRandomPoint();
    do {
        p2 = rnd.GetRandomPoint();
    } while (!(p1.x < p2.y && p1.y > p2.y));
    color = Color::GetColor(rndColor.Get());
}

// Вывод параметров прямоугольника в форматируемый поток
void Rectangle::Out(ofstream *ofst) {
    *ofst << "It is Rectangle: ";
    p1.Out(ofst);
    *ofst << ", ";
    p2.Out(ofst);
    *ofst << ". ";
    Color::Out(color, ofst);
    *ofst << ". Area = " << Area() << ".\n";
}

// Вычисление периметра прямоугольника
double Rectangle::Area() {
    return 0.5 * (p2.x - p1.x) * (p1.y - p2.y);
}
