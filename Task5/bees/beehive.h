#ifndef TASK5_BEEHIVE_H
#define TASK5_BEEHIVE_H

#include "iostream"
#include "../region/region.h"
#include <vector>
#include <thread>
#include <mutex>
#include "../helpers/sleepTimeHelper.cpp"

class Beehive {
private:
    std::vector<std::thread> threads_;
    std::mutex mtx_;
    bool bear_found_;
    std::vector<Region*> regions_;

    void searchRegion(Region *region, const int &flock_index);

public:
    explicit Beehive(const std::vector<Region*> &regions);

    void startSearching();
};


#endif //TASK5_BEEHIVE_H
