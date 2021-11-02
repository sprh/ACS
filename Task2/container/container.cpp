#include "container.h"

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
void Container::In(ifstream *ifst) {
    while(!ifst->eof()) {
        if((storage[len] = Shape::StaticIn(ifst)) != nullptr) {
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
void Container::Out(ofstream *ofst) {
    *ofst << "Container contains " << len << " elements.\n";
    for(int i = 0; i < len; i++) {
        *ofst << i << ": ";
        storage[i]->Out(ofst);
    }
}

// Вычисление средней площади всех фигур в контейнере
double Container::AverageArea() {
    double sum = 0;
    for (int i = 0; i < len; i ++) {
        sum += storage[i]->Area();
    }
    return sum / len;
}
// Удалить из контейнера те элементы, для которых значение, полу-
// ченное с использованием функции, общей для всех альтернатив,
// больше чем среднее арифметическое для всех элементов контейнера, полученное с ис-
// пользованием этой же функции. Остальные элементы передвинуть в началу контейнера
// с сохранением порядка.
void Container::RemoveItemsWithAreaBiggerThanAverage() {
    int currentLen = 0;
    double averageArea = AverageArea();
    for (int i = 0; i < len; i ++) {
        if (storage[i]->Area() <= averageArea) {
            storage[currentLen] = storage[i];
            ++currentLen;
        }
    }
    len = currentLen;
}
