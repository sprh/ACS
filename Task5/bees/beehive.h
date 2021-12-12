#ifndef TASK5_BEEHIVE_H
#define TASK5_BEEHIVE_H

#include "iostream"
#include "../region/region.h"
#include <vector>
#include <thread>
#include "../helpers/sleepTimeHelper.cpp"

class Beehive {
private:
    std::vector<std::thread> threads_;

    void searchRegion(Region *region, const int &flock_index);

public:
    void startSearching();
};


#endif //TASK5_BEEHIVE_H
