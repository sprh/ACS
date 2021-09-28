#ifndef __color__
#define __color__

//------------------------------------------------------------------------------
// color.h - содержит тип данных, представляющий цвет.
//-----------------------------------------------------------------------------
enum color {
    red,
    orange,
    yellow,
    green,
    lightblue,
    darkblue,
    purple,
};

color ColorFromNumber(int& number) {
    switch (number) {
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
#endif //__color__
