#include "point.h"

void Point::Out(ofstream *ofst) {
    *ofst << "(x:" << x << ", y: " << y << ")";
}
