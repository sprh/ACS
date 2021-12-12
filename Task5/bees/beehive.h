#ifndef TASK5_BEEHIVE_H
#define TASK5_BEEHIVE_H

#include "iostream"
#include "flockOfBees.h"
#include <vector>
#include <thread>

class Beehive {
private:
    std::vector<std::thread> threads_;
    std::vector<FlockOfBees*> flocks_;

public:
    void createFlocks();
    void startSearching();
};


#endif //TASK5_BEEHIVE_H
