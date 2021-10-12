#include "container.h"

#include <iostream>

// Конструктор контейнера
Container::Container(): len(0), storage() {}

// Деструктор контейнера
Container::~Container() {
    Clear();
}

// Очистка контейнера от элементов (освобождение памяти)
void Container::Clear() {
    for(int i = 0; i < len; i++) {
        delete storage[i];
    }
    len = 0;
}

// Ввод содержимого контейнера из указанного потока
void Container::In(ifstream &ifst) {
    while(!ifst.eof()) {
        if((storage[len] = Shape::StaticIn(ifst)) != 0) {
            len++;
        }
    }
}

// Случайный ввод содержимого контейнера
void Container::InRnd(int size) {
    while(len < size) {
        if((storage[len] = Shape::StaticInRnd()) != nullptr) {
            len++;
        }
    }
}

// Вывод содержимого контейнера в указанный поток
void Container::Out(ofstream &ofst) {
    ofst << "Container contains " << len << " elements.\n";
    for(int i = 0; i < len; i++) {
        ofst << i << ": ";
        storage[i]->Out(ofst);
    }
}

// Вычисление средней площади всех фигур в контейнере
double Container::AverageArea() {
    return 0.0;
}
// Удалить из контейнера те элементы, для которых значение, полу-
// ченное с использованием функции, общей для всех альтернатив,
// больше чем среднее арифметическое для всех элементов контейнера, полученное с ис-
// пользованием этой же функции. Остальные элементы передвинуть в началу контейнера
// с сохранением порядка.
void Container::RemoveItemsWithAreaBiggerThanAverage() {

}
