#ifndef TASK5_BEEHIVE_H
#define TASK5_BEEHIVE_H

#include "iostream"
#include "../region/region.h"
#include <vector>
#include <thread>
#include <mutex>
#include "../helpers/sleepTimeHelper.cpp"

// Bees home
class Beehive {
private:
    // All running threads (flocks of bees as threads)
    std::vector<std::thread> threads_;
    // mutex
    std::mutex mtx_;
    // Flag to check if the bear was found
    bool bear_found_;
    // Regions to check bear
    std::vector<Region*> regions_;

    //  A private method to search the bear
    void searchRegion(Region *region, const int &flock_index);

public:
    // Constructor with regions
    explicit Beehive(const std::vector<Region*> &regions);

    // Method to start searching
    void startSearching();
};


#endif //TASK5_BEEHIVE_H
