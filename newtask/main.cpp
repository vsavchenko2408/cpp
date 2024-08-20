/*Продолжите программу, в которой объявлен класс PointND для представления точки в N-мерном пространстве (с N координатами):

class PointND {
 short* coords {nullptr}; // координаты точки
 size_t dims {0}; // число координат
public:
 PointND() = default;
 PointND(short* cds, size_t len) : dims(len)
 {
 coords = new short[dims];
 for(size_t i = 0;i < dims; ++i)
 coords[i] = cds[i];
 }
 ~PointND() { delete[] coords; }
};
Добавьте в этот класс необходимые методы (если нужно, то и поля) так, чтобы с его объектами можно было выполнять следующие команды:

short coords[] = {1, 2, 3, 4, 5};
PointND pt(coords, std::size(coords));
int val = pt[indx]; // получение значения координаты по индексу (от 0 до dims-1); если указывается не верный индекс, то возвращается 0
pt[indx] = val; // присвоение координате с индексом indx значения val; если указывается не верный индекс, то ничего не присваивается
PointND pt2;
pt2 = pt1; // в объекте pt2 создается свой массив coords с поэлементным копированием данных из объекта pt1 (поле dims также копируется)
pt2++; // увеличение каждой координаты на 1
++pt2; // увеличение каждой координаты на 1
pt1--; // уменьшение каждой координаты на 1
--pt1; // уменьшение каждой координаты на 1
pt += pt2; // к координатам coords объекта pt прибавляются соответствующие координаты объекта pt2
pt -= pt2; // из координат coords объекта pt вычитаются соответствующие координаты объекта pt2
Сложение и вычитание координат += и -= выполнять только в том случае, если длины массивов coords объектов равны между собой.
*/
#include <iostream>

using namespace std;

class PointND {
 short* coords {nullptr}; // координаты точки
 size_t dims {0}; // число координат
public:
 PointND() = default;
 PointND(short* cds, size_t len) : dims(len)
 {
 coords = new short[dims];
 for(size_t i = 0;i < dims; ++i)
 coords[i] = cds[i];
 }
 ~PointND() { delete[] coords; }
};