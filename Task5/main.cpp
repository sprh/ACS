#include <iostream>
#include "bees/flockOfBees.h"
#include "bees/beehive.h"

int main() {
    Beehive *b = new Beehive();
    b->createFlocks();
    b->startSearching();
    return 0;
}
