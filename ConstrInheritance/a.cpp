#include "a.h"
#include <iostream>

A::A(int a)
{
    data_a = a;
    std::cout << __PRETTY_FUNCTION__ << std::endl;
}

int A::get_data_a()
{
    return data_a;
}
