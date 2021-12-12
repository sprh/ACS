#include <iostream>

static int getSleepTime() {
    return rand() % 300 + 50; // between 100 and  350
}