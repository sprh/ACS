#include "beehive.h"


void Beehive::createFlocks() {
    auto *fl1 = new FlockOfBees(1, "1");
    auto *fl2 = new FlockOfBees(1, "2");
    flocks_.push_back(fl1);
    flocks_.push_back(fl2);
}

void Beehive::startSearching() {
    Region *region1 = new Region(10);
    Region *region2 = new Region(10);
    threads_.push_back(flocks_.at(0)->searchRegion(region1));
    threads_.push_back(flocks_.at(1)->searchRegion(region2));
}