#ifndef TASK2_CONTAINER_H
#define TASK2_CONTAINER_H

#include "fstream"
#include "iostream"
#include "../shape/shape.h"

using std::ifstream;
using std::ofstream;

class Container {
public:
    Container();
    ~Container();   // Ввод содержимого контейнера из указанного потока
    void In(ifstream &ifst);
    // Случайный ввод содержимого контейнера
    void InRnd(int size);
    // Вывод содержимого контейнера в указанный поток
    void Out(ofstream &ofst);
    // Вычисление суммы периметров всех фигур в контейнере
    double AverageArea(Container &c);
    // Удалить из контейнера те элементы, для которых значение, полу-
    // ченное с использованием функции, общей для всех альтернатив,
    // больше чем среднее арифметическое для всех элементов контейнера, полученное с ис-
    // пользованием этой же функции. Остальные элементы передвинуть в началу контейнера
    // с сохранением порядка.
    void RemoveItemsWithAreaBiggerThanAverage(Container &c);
private:
    void Clear();    // Очистка контейнера от данных
    int len; // текущая длина
    Shape* storage[10000];
};

#endif //TASK2_CONTAINER_H
