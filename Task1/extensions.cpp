#include "extensions.h"

// Converts string to int.
int StringToInt(std::string& str) {
    try {
        return atoi(str.c_str());
    } catch (const std::exception &_) {
        return 0;
    }
}
