#include <iostream>
#include "data.h"

int main()
{
    int b = 15;
    Data a(b);
    std::cout << a.get_data() << std::endl;
}