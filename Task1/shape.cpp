//------------------------------------------------------------------------------
// shape.cpp - содержит процедуры связанные с обработкой обобщенной фигуры
// и создания произвольной фигуры
//------------------------------------------------------------------------------

#include "shape.h"
#include <iostream>
#include "extensions.h"

void SetColor(shape* sp, int colorNumber) {
    switch (colorNumber) {
        case 1:
            sp->col = shape::RED;
            break;
        case 2:
            sp->col = shape::ORANGE;
            break;
        case 3:
            sp->col = shape::YELLOW;
            break;
        case 4:
            sp->col = shape::GREEN;
            break;
        case 5:
            sp->col = shape::LIGHTBLUE;
            break;
        case 6:
            sp->col = shape::DARKBLUE;
            break;
        default:
            sp->col = shape::PURPLE;
            break;
    }
}

void OutColor(shape& sp, ofstream &ofst) {
    switch (sp.col) {
        case shape::RED:
            ofst << ". Color: red.";
            break;
        case shape::ORANGE:
            ofst << ". Color: orange.";
            break;
        case shape::YELLOW:
            ofst << ". Color: yellow.";
            break;
        case shape::GREEN:
            ofst << ". Color: green.";
            break;
        case shape::LIGHTBLUE:
            ofst << ". Color: light blue.";
            break;
        case shape::DARKBLUE:
            ofst << ". Color: dark blue.";
            break;
        case shape::PURPLE:
            ofst << ". Color: purple.";
            break;
    }
}

//------------------------------------------------------------------------------
// Ввод параметров обобщенной фигуры из файла
shape* In(ifstream &ifst) {
    shape *sp;
    int k;
    string kAsString;
    ifst >> kAsString;
    k = StringToInt(kAsString);
    string color;
    ifst >> color;
    int colorNumber = StringToInt(color);
    switch(k) {
        case 1:
            sp = new shape;
            sp->k = shape::RECTANGLE;
            In(sp->r, ifst);
            SetColor(sp, colorNumber);
            return sp;
        case 2:
            sp = new shape;
            sp->k = shape::TRIANGLE;
            In(sp->t, ifst);
            SetColor(sp, colorNumber);
            return sp;
        case 3:
            sp = new shape;
            sp->k = shape::CIRCLE;
            In(sp->c, ifst);
            SetColor(sp, colorNumber);
            return sp;
        default:
            return 0;
    }
}

// Случайный ввод обобщенной фигуры
shape *InRnd() {
    shape *sp;
    int k = rand() % 2 + 1;
    int color = rand() % 7 + 1;
    switch(k) {
        case 1:
            sp = new shape;
            sp->k = shape::RECTANGLE;
            InRnd(sp->r);
            SetColor(sp, color);
            return sp;
        case 2:
            sp = new shape;
            sp->k = shape::TRIANGLE;
            InRnd(sp->t);
            SetColor(sp, color);
            return sp;
        case 3:
            sp = new shape();
            sp->k = shape::CIRCLE;
            InRnd(sp->c);
            SetColor(sp, color);
            return sp;
        default:
            return 0;
    }
}

//------------------------------------------------------------------------------
// Вывод параметров текущей фигуры в поток
void Out(shape &s, ofstream &ofst) {
    switch(s.k) {
        case shape::RECTANGLE:
            Out(s.r, ofst);
            OutColor(s, ofst);
            break;
        case shape::TRIANGLE:
            Out(s.t, ofst);
            OutColor(s, ofst);
            break;
        case shape::CIRCLE:
            Out(s.c, ofst);
            OutColor(s, ofst);
        default:
            ofst << "Incorrect figure!" << endl;
    }
}

//------------------------------------------------------------------------------
// Вычисление площади фигуры
double Area(shape &s) {
    switch(s.k) {
        case shape::RECTANGLE:
            return Area(s.r);
        case shape::TRIANGLE:
            return Area(s.t);
        case shape::CIRCLE:
            return Area(s.c);
        default:
            return 0.0;
    }
}


