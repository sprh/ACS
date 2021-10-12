#ifndef TASK2_EXTENSION_H
#define TASK2_EXTENSION_H

#include "iostream"
#include "fstream"
#include "string"
using std::ifstream;

static int ReadInt(ifstream *ifst) {
    std::string number;
    *ifst >> number;
    try {
        return atoi(number.c_str());
    } catch (const std::exception &_) {
        return 0;
    }
}
#endif //TASK2_EXTENSION_H
