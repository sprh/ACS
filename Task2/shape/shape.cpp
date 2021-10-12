//
// Created by Софья Тимохина on 12.10.2021.
//

#include "shape.h"
Random Shape::rnd20(1, 20);
Random Shape::rnd2(1,2);

// Ввод параметров обобщенной фигуры из файла
Shape* Shape::StaticIn(ifstream &ifst) {
    int k;
    ifst >> k;
    Shape* sp = nullptr;
    sp->In(ifst);
    return sp;
}

// Случайный ввод обобщенной фигуры
Shape *Shape::StaticInRnd() {
    int k = Shape::rnd2.Get();
    Shape* sp = nullptr;
    sp->InRnd();
    return sp;
}
