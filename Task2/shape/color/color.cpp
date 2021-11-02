#include "color.h"


Color::color Color::GetColor(const int& colorNumber) {
    switch (colorNumber) {
        case 1:
            return RED;
        case 2:
            return ORANGE;
        case 3:
            return YELLOW;
        case 4:
            return GREEN;
        case 5:
            return LIGHTBLUE;
        case 6:
            return DARKBLUE;
        default:
            return PURPLE;
    }
}
void Color::Out(const Color::color& c, ofstream *ofst) {
    *ofst << "Color: ";
    switch (c) {
        case RED:
            *ofst << "red";
            break;
        case ORANGE:
            *ofst << "orange";
            break;
        case YELLOW:
            *ofst << "yellow";
            break;
        case GREEN:
            *ofst << "green";
            break;
        case LIGHTBLUE:
            *ofst << "light blue";
            break;
        case DARKBLUE:
            *ofst << "dark blue";
            break;
        case PURPLE:
            *ofst << "purble";
            break;
    }
}