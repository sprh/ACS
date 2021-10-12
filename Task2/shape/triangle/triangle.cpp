//
// Created by Софья Тимохина on 12.10.2021.
//

#include "triangle.h"
Triangle::~Triangle() {
    delete this;
}

// Ввод параметров треугольника из файла
void Triangle::In(ifstream *ifst) {
    int colorNumber;
    *ifst >> colorNumber >> p1.x >> p1.y >> p2.x >> p2.y >> p3.x >> p3.y;
    color = Color::GetColor(colorNumber);
}

// Случайный ввод параметров треугольника
void Triangle::InRnd() {
    Random rnd = Random();
    Random rndColor = Random(1, 7);
    p1 = rnd.GetRandomPoint();
    do {
        p2 = rnd.GetRandomPoint();
    } while (p1.x == p2.y || p1.y == p2.y);
    do {
        p3 = rnd.GetRandomPoint();
    } while (Point::SideFromPoints(p1, p2) + Point::SideFromPoints(p1, p3) < Point::SideFromPoints(p2, p3) ||
            Point::SideFromPoints(p1, p2) + Point::SideFromPoints(p2, p3) < Point::SideFromPoints(p1, p3) ||
             Point::SideFromPoints(p2, p3) + Point::SideFromPoints(p1, p3) < Point::SideFromPoints(p1, p2));
    color = Color::GetColor(rndColor.Get());
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
    *ofst << "\n";
}

// Вычисление периметра треугольника
double Triangle::Area() {
    double a = Point::SideFromPoints(p1, p2);
    double b = Point::SideFromPoints(p1, p3);
    double c = Point::SideFromPoints(p2, p3);
    double s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}
