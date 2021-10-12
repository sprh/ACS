#include "rectangle/rectangle.h"
#include "circle/circle.h"

Random Shape::rnd20(1, 20);
Random Shape::rnd3(1,2);

// Ввод параметров обобщенной фигуры из файла
Shape* Shape::StaticIn(ifstream *ifst) {
    int k;
    *ifst >> k;
    Shape* sp = nullptr;
    switch(k) {
        case 1:
            sp = new Rectangle;
            break;
        case 2:
            sp = new Circle;
            break;
        default:
            return nullptr;
    }
    sp->In(ifst);
    return sp;
}

// Случайный ввод обобщенной фигуры
Shape *Shape::StaticInRnd() {
    int k = Shape::rnd3.Get();
    Shape* sp = nullptr;
    switch(k) {
        case 1:
            sp = new Rectangle;
            break;
        default:
            return nullptr;
    }
    sp->InRnd();
    return sp;
}
