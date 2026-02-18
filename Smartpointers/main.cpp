#include <iostream>
#include "Smartpointers.h"


int main()
{
    Smartpointers sm(15);
    Smartpointers sm1(sm);
    sm.set_data(20);
    std::cout << "Sm: " << sm.get_data() << std::endl;
    std::cout << "Sm1: " << sm1.get_data() << std::endl;
    return 0;
}