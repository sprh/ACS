#include "region.h"

Region::Region(const int &area, const int &bear_location) {
    area_ = area;
    bear_location_ = bear_location;
}

int Region::getArea() const {
    return area_;
}

bool Region::hasBear(const int &at) const {
    if (at != bear_location_) {
        return false;
    }
    return true;
}