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
void Color::Out(const Color::color& c, ofstream &ofst) {
    ofst << "color: ";
    switch (c) {
        case RED:
            ofst << "red";
        case ORANGE:
            ofst << "orange";
        case YELLOW:
            ofst << "yellow";
        case GREEN:
            ofst << "green";
        case LIGHTBLUE:
            ofst << "light blue";
        case DARKBLUE:
            ofst << "dark blue";
        case PURPLE:
            ofst << "purble";
    }
}