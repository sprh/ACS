#include "point.h"

void Point::Out(ofstream *ofst) {
    *ofst << "(x:" << x << ", y: " << y << ")";
}

double Point::SideFromPoints(const Point& p1, const Point& p2) {
    return sqrt(pow(p1.x - p2.x, 2) + pow(p2.y - p1.y, 2));
}
