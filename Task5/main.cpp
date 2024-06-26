#include <iostream>
#include "bees/beehive.h"
#include <cstring>

void errMessage() {
    std::cout << "incorrect command line!\n"
            "  Waited:\n"
            "     command -n area regions_count bear_location\n"
            "  Or:\n"
            "     command -r\n";
}

// Generates regions by params
std::vector<Region*> createRegions(const int &area, const int &regions_count, const int &bear_location) {
    std::vector<Region*> regions;
    int size = area / regions_count;
    int additionalSize = area % regions_count;
    int current_area = 0;
    for (int i = 0; i < regions_count; ++i) {
        int region_size = size;
        if (additionalSize != 0) {
            ++region_size;
            --additionalSize;
        }
        int bear = bear_location > current_area && bear_location <= current_area + region_size ? bear_location - current_area : -1;
        current_area += region_size;
        regions.push_back(new Region(region_size, bear));
    }
    return regions;
}

// Creates random regions
std::vector<Region*> createRandomRegions() {
    int area = rand() % 1000 + 1;
    int regions_count = rand() % area + 1;
    int bear_location = rand() % area + 1;
    std::cout << "Generated data: area = " << area << ", regionsCount = " << regions_count << ", bearLocation = " << bear_location << "\n";
    return createRegions(area, regions_count, bear_location);
}

// Start point
int main(int argc, char* argv[]) {
    if (argc != 5 && argc != 2) {
        errMessage();
        return 1;
    }

    srand(time(0));
    std::cout << "Start\n";
    std::vector<Region*> regions;

    if (!strcmp(argv[1], "-n")) {
        try {
            int area = std::stoi(argv[2]);
            int regions_count = std::stoi(argv[3]);
            int bear_location = std::stoi(argv[4]);
            if (area <= 0 || regions_count <= 0 || bear_location <= 0) {
                std::cout << "Area, regions_count and bear's location should be positive integers!\n";
                return 2;
            } else if (area < regions_count) {
                std::cout << "Area should be greater or equals regions count!";
                return 2;
            } else if (bear_location > area) {
                std::cout << "Bear should be located in the area (bear_location <= area)!";
                return 2;
            } else if (area > 1000) {
                std::cout << "incorrect area. Set 0 < area <= 1000\n";
                return 2;
            }
            regions = createRegions(area, regions_count, bear_location);
        } catch (std::exception &e) {
            std::cout << "Area, regions_count and bear's location should be integers!\n"
                         "Failed with error: " << e.what();
            return 3;
        }
    } else if (!strcmp(argv[1], "-r")) {
        regions = createRandomRegions();
    } else {
        errMessage();
        return 4;
    }
    auto *beehive = new Beehive(regions);
    beehive->startSearching();
    std::cout << "Stop in "<< clock() / 10000.0;
    return 0;
}