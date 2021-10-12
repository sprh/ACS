#include <iostream>
#include <fstream>
#include <cstdlib> // для функций rand() и srand()
#include <cstring>

#include "container/container.h"

void errMessage1() {
    cout << "incorrect command line!\n"
            "  Waited:\n"
            "     command -f infile outfile01 outfile02\n"
            "  Or:\n"
            "     command -n number outfile01 outfile02\n";
}

void errMessage2() {
    cout << "incorrect qualifier value!\n"
            "  Waited:\n"
            "     command -f infile outfile01 outfile02\n"
            "  Or:\n"
            "     command -n number outfile01 outfile02\n";
}

//------------------------------------------------------------------------------
int main(int argc, char* argv[]) {
    if(argc != 5) {
        errMessage1();
        return 1;
    }
    clock_t startTime = clock();
    std::cout << "Start\n";
    Container* c = new Container();
    if(!strcmp(argv[1], "-f")) {
        try {
            ifstream ifst(argv[2]);
            c->In(&ifst);
        } catch (std::exception e) {
            std::cout << "Failed: " << e.what();
        }
    }
    else if(!strcmp(argv[1], "-n")) {
        int size = std::stoi(argv[2]);
        if((size < 1) || (size > 10000)) {
            cout << "incorrect numer of figures = "
                 << size
                 << ". Set 0 < number <= 10000\n";
            return 3;
        }
        // системные часы в качестве инициализатора
        srand(static_cast<unsigned int>(time(0)));
        // Заполнение контейнера генератором случайных фигур
        c->InRnd(size);
    }
    else {
        errMessage2();
        return 2;
    }

    // Вывод содержимого контейнера в файл.
    ofstream ofst1(argv[3]);
    ofst1 << "Filled container:\n";
    c->Out(&ofst1);

    // The 2nd part of task
    ofstream ofst2(argv[4]);
    ofst2 << "Average area: " << c->AverageArea();
    ofst2 << "Items with area lower than average:\n";
    c->RemoveItemsWithAreaBiggerThanAverage();
    c->Out(&ofst2);

    cout << "Stop in "<< ((double)(clock() - startTime)) / CLOCKS_PER_SEC;
    return 0;
}
