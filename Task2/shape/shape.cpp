#include "rectangle/rectangle.h"
#include "circle/circle.h"
#include "triangle/triangle.h"

// Ввод параметров обобщенной фигуры из файла
Shape* Shape::StaticIn(ifstream *ifst) {
    int k;
    k = ReadInt(ifst);
    Shape* sp = nullptr;
    switch(k) {
        case 1:
            sp = new Rectangle;
            break;
        case 2:
            sp = new Circle;
            break;
        case 3:
            sp = new Triangle;
            break;
        default:
            return nullptr;
    }
    sp->In(ifst);
    return sp;
}

// Случайный ввод обобщенной фигуры
Shape *Shape::StaticInRnd() {
    int k = Random::Get(1, 3);
    Shape* sp = nullptr;
    switch(k) {
        case 1:
            sp = new Rectangle;
            break;
        case 2:
            sp = new Circle;
            break;
        case 3:
            sp = new Triangle;
            break;
        default:
            return nullptr;
    }
    sp->InRnd();
    return sp;
}
