#include "circle.h"

Circle::~Circle() {
    delete this;
}

void Circle::In(ifstream *ifst) {
    int colorNumber;
    *ifst >> colorNumber >> center.x >> center.y >> radius;
    color = Color::GetColor(colorNumber);
}

void Circle::InRnd() {
    Random rnd = Random();
    Random rndColor = Random(1, 7);
    center = rnd.GetRandomPoint();
    radius = abs(rnd.Get());
    color = Color::GetColor(rndColor.Get());
}

void Circle::Out(ofstream *ofst) {
    *ofst << "It is Circle: ";
    center.Out(ofst);
    *ofst << ". ";
    Color::Out(color, ofst);
    *ofst << "\n";
}

double Circle::Area() {
    return 3.14 * pow(radius, 2);
}
