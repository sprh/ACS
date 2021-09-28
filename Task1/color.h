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

// Получение цвета из номера
color ColorFromNumber(int& colorNumber);
#endif //__color__
