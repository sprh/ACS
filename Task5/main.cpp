#include <iostream>
#include "bees/beehive.h"
#include <cstring>

void errMessage1() {
    std::cout << "incorrect command line!\n"
            "  Waited:\n"
            "     command -n area regions_count bear_location"
            "  Or:\n"
            "     command -r\n";
}

std::vector<Region*> createRegions(const int &area, const int &regions_count, const int &bear_location) {

}

int main(int argc, char* argv[]) {
    if (argc != 5 && argc != 2) {
        errMessage1();
        return 1;
    }
    clock_t start_time = clock();
    std::cout << "Start\n";
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
                return 3;
            } else if (bear_location > area) {
                std::cout << "Bear should be located in the area (bear_location <= area)!";
                return 4;
            }
            std::vector<Region*> regions = createRegions(area, regions_count, bear_location);
        } catch (std::exception &e) {
            std::cout << "Area, regions_count and bear's location should be integers!\n"
                         "Failed with error: " << e.what();
            return 5;
        }
    }
    return 0;
}

