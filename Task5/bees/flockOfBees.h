#ifndef TASK5_FLOCKOFBEES_H
#define TASK5_FLOCKOFBEES_H


#include "../region/region.h"
#include "iostream"
#include <thread>

class FlockOfBees {
private:
    int bees_count_;
    std::string name_;

    void executeSearchRegion(Region *region);

public:
    FlockOfBees(const int &bees_count, const std::string &name);

    std::thread searchRegion(Region *region);
};


#endif //TASK5_FLOCKOFBEES_H
