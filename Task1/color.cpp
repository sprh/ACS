#include "color.h"

color ColorFromNumber(int& colorNumber) {
    switch (colorNumber) {
        case 1:
            return red;
        case 2:
            return orange;
        case 3:
            return yellow;
        case 4:
            return green;
        case 5:
            return lightblue;
        case 6:
            return darkblue;
        default:
            return purple;
    }

}