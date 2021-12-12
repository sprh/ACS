#include <iostream>

static int getSleepTime() {
    return rand() % 300 + 100; // between 100 and  350
}