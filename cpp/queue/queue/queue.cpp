/*
Задание 3:
Реализуйте класс Stack, представляющий стек.
Стек должен иметь методы для добавления элемента на вершину стека,
удаления элемента с вершины стека и получения значения верхнего элемента без его удаления.
*/

#include <queue>
#include <iostream>
#include<stack>
using namespace std;
class mystack
{
private:
    int* arr;
    int lng;
    int indx;
public:
    mystack(int lng)
    {
        indx = 0;
        arr = new int[lng];
    };
    ~mystack()
    {
        delete[] arr;
    };
    
};
int main()
{

    
 
    return 0;
}

