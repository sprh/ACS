#include <iostream>
#include "bees/beehive.h"

int main() {
    std::vector<Region*> regions;
    regions.push_back(new Region(10, 9));
    regions.push_back(new Region(15, -1));
    regions.push_back(new Region(15, -1));
    regions.push_back(new Region(15, -1));
    regions.push_back(new Region(15, -1));
    auto *b = new Beehive(regions);
    b->startSearching();
    return 0;
}