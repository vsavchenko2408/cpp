#include <iostream>
#include "Array.h"

int main()
{
    Array<int> ar(10);
    std::cout << "Size: " << ar.get_size() << std::endl;
}