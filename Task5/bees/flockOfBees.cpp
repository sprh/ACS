#include "flockOfBees.h"

FlockOfBees::FlockOfBees(const int &bees_count, const std::string &name) {
    bees_count_ = bees_count;
    name_ = name;
}

std::thread FlockOfBees::searchRegion(Region *region) {
    std::thread t1(&FlockOfBees::executeSearchRegion, this, region);
    return t1;
}

void FlockOfBees::executeSearchRegion(Region *region) {
    for (int i = 0; i < region->getArea(); ++i) {
        std::cout << "in i = " << i << " " << name_ << '\n';
    }
}

