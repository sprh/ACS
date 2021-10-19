//
// Created by Софья Тимохина on 12.10.2021.
//

#include "triangle.h"
Triangle::~Triangle() {
    delete this;
}

// Ввод параметров треугольника из файла
void Triangle::In(ifstream *ifst) {
    int colorNumber = ReadInt(ifst);
    p1.x = ReadInt(ifst);
    p1.y = ReadInt(ifst);
    p2.x = ReadInt(ifst);
    p2.y = ReadInt(ifst);
    p3.x = ReadInt(ifst);
    p3.y = ReadInt(ifst);
    color = Color::GetColor(colorNumber);
}

// Случайный ввод параметров треугольника
void Triangle::InRnd() {
    p1 = Random::GetRandomPoint();
    do {
        p2 = Random::GetRandomPoint();
    } while (p1.x == p2.y || p1.y == p2.y);
    do {
        p3 = Random::GetRandomPoint();
    } while (Point::SideFromPoints(p1, p2) + Point::SideFromPoints(p1, p3) < Point::SideFromPoints(p2, p3) ||
            Point::SideFromPoints(p1, p2) + Point::SideFromPoints(p2, p3) < Point::SideFromPoints(p1, p3) ||
             Point::SideFromPoints(p2, p3) + Point::SideFromPoints(p1, p3) < Point::SideFromPoints(p1, p2));
    color = Color::GetColor(Random::Get(1, 7));
}

// Вывод параметров треугольника в форматируемый поток
void Triangle::Out(ofstream *ofst) {
    *ofst << "It is Triangle: ";
    p1.Out(ofst);
    *ofst << ", ";
    p2.Out(ofst);
    *ofst << ", ";
    p3.Out(ofst);
    *ofst << ". ";
    Color::Out(color, ofst);
    *ofst << ". Area = " << Area() << ".\n";
}

// Вычисление периметра треугольника
double Triangle::Area() {
    double a = Point::SideFromPoints(p1, p2);
    double b = Point::SideFromPoints(p1, p3);
    double c = Point::SideFromPoints(p2, p3);
    double s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}
