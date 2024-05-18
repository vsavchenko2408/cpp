#include <iostream>
#include "smartpointers.h"


int main()
{
    int a = 5;
    int* ptr1 = &a;
SmartPointer<int> ptr(ptr1);




    return 0;
}