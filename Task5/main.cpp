#include <iostream>
#include "bees/beehive.h"

int main() {
    auto *b = new Beehive();
    b->startSearching();
    return 0;
}