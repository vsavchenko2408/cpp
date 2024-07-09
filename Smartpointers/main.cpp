#include <iostream>
#include "smartpointers.h"


int main()
{
    int* ptr_a = new int(5); 
    
SmartPointer<int> ptr(ptr_a);

SmartPointer<int> ptr1(ptr_a);

std::cout << (ptr<ptr1) << std::endl;

    return 0;
}