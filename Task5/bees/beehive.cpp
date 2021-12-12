#include "beehive.h"

void Beehive::startSearching() {
    Region *region1 = new Region(10);
    for (int i = 0; i < 2; ++i) {
        std::thread tr(&Beehive::searchRegion, this, region1, i);
        threads_.emplace_back(std::move(tr));
    }

    for(auto& thr : threads_) {
        thr.join();
    }
}

void Beehive::searchRegion(Region *region, const int &flock_index) {
    for (int i = 0; i < region->getArea(); ++i) {
        std::this_thread::sleep_for(std::chrono::milliseconds(getSleepTime()));
        std::cout << "[Flock " << flock_index << "] " << "in i = " << i << " " << '\n';
    }
}