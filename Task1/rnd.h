#ifndef __rnd__
#define __rnd__

#include <cstdlib>
#include "color.h"

//------------------------------------------------------------------------------
// rnd.h - содержит генератор случайных чисел в диапазоне от 1 до 20
//------------------------------------------------------------------------------

inline int Random() {
    return rand() % 20 + 1;
}

inline color RandomColor() {
    int colorNumber = rand() % 6 + 1;
    return ColorFromNumber(colorNumber);
}
#endif //__rnd__
