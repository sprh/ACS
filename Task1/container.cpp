//------------------------------------------------------------------------------
// container.cpp - содержит функции обработки контейнера
//------------------------------------------------------------------------------

#include "container.h"

//------------------------------------------------------------------------------
// Инициализация контейнера
void Init(container &c) {
    c.len = 0;
}

//------------------------------------------------------------------------------
// Очистка контейнера от элементов (освобождение памяти)
void Clear(container &c) {
    for(int i = 0; i < c.len; i++) {
        delete c.cont[i];
    }
    c.len = 0;
}

//------------------------------------------------------------------------------
// Ввод содержимого контейнера из указанного потока
void In(container &c, ifstream &ifst) {
    while(!ifst.eof()) {
        if((c.cont[c.len] = In(ifst)) != 0) {
            c.len++;
        }
    }
}

//------------------------------------------------------------------------------
// Случайный ввод содержимого контейнера
void InRnd(container &c, int size) {
    while(c.len < size) {
        if((c.cont[c.len] = InRnd()) != nullptr) {
            c.len++;
        }
    }
}

//------------------------------------------------------------------------------
// Вывод содержимого контейнера в указанный поток
void Out(container &c, ofstream &ofst) {
    ofst << "Container contains " << c.len << " elements." << endl;
    for(int i = 0; i < c.len; i++) {
        ofst << i << ": ";
        Out(*(c.cont[i]), ofst);
    }
}

// Среднее арифметическое площади фигур.
double AverageArea(container &c) {
    double sum = 0;
    for (int i = 0; i < c.len; i++) {
        sum += Area(*(c.cont[i]));
    }
    return sum / c.len;
}

// Удалить из контейнера те элементы, для которых значение, полу-
// ченное с использованием функции, общей для всех альтернатив,
// больше чем среднее арифметическое для всех элементов контейнера, полученное с ис-
// пользованием этой же функции. Остальные элементы передвинуть в началу контейнера
// с сохранением порядка.
void RemoveItemsWithAreaBiggerThanAverage(container &c) {
    int currentLen = 0;
    double averageArea = AverageArea(c);
    for (int i = 0; i < c.len; i ++) {
        if (Area(*(c.cont[i])) <= averageArea) {
            c.cont[currentLen] = c.cont[i];
            ++currentLen;
        } else {
            delete c.cont[i];
        }
    }
    c.len = currentLen;
}
