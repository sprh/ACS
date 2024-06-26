#include "beehive.h"

Beehive::Beehive(const std::vector<Region*> &regions) {
    bear_found_ = false;
    regions_ = regions;
}

void Beehive::startSearching() {
    for (int i = 0; i < regions_.size(); ++i) {
        std::thread tr(&Beehive::searchRegion, this,regions_[i], i + 1);
        threads_.emplace_back(std::move(tr));
    }

    for(auto& thr : threads_) {
        thr.join();
    }
}

void Beehive::searchRegion(Region *region, const int &flock_index) {
    for (int i = 0; i < region->getArea(); ++i) {
        {
            std::lock_guard<std::mutex> lock(mtx_);
            // Check if another one flock didn't find a bear
            if (bear_found_) {
                std::cout << "[Flock " << flock_index << "] got a signal that the bear was found.\n";
                break;
            }
            std::cout << "[Flock " << flock_index << "] searching in the point " << i + 1 << " " << '\n';
            // Check if we found a bear
            if (region->hasBear(i + 1)) {
                std::cout << "[Flock " << flock_index << "] found a bear!\n";
                std::cout << "**I'm against violence so they dispersed peacefully**\n";
                bear_found_ = true;
                break;
            } else if (i == region->getArea()) {
                std::cout << "[Flock " << flock_index << "] didn't find a bear!\n";
            }
        }
        std::this_thread::sleep_for(std::chrono::milliseconds(getSleepTime()));
    }
}