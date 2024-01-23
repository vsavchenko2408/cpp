/*
Указатель: переменная которая содержит адрес переменной
тип* имя - указатель = & - взятие адреса переменной

Ссылка - псевдоним другого объекта или значения
тип &имя = объект
*/
#include <iostream>
#include <random>
using std::cout;
using std::cin;
using std::endl;

void fillarray(int* arr, const int N)
{
    for (int i = 0; i < N; i++)
    {
        arr[i] = rand();
    }
}

int main()
{
    srand(time(NULL));
    const int N = 10;
    int arr[N];
    fillarray(arr, N);

    for (int i = 0; i < N; i++)
    {
        cout << "Arr: " << i+1 << " = " << arr[i] << endl;
        cout << "Address: " << i+1 << " = " << &arr[i] << endl;
    }
  
    return 0;
}

