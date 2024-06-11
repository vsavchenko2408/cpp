#ifndef B_H
#define B_H
#include "a.h"
#include <iostream>
class B : public A
{
    int data_b;
public:
    B(int b, int a): A::A(a)
    {
        data_b = b;
        std::cout << __PRETTY_FUNCTION__ << std::endl;
    }

    int get_data_a();
    int get_data_b();
};
#endif // B_H
