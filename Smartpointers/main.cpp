#include <iostream>
#include "Smartpointers.h"


int main()
{
    Smartpointers sm(15);
    std::cout << sm.get_data() << std::endl;
    Smartpointers sm1(sm);
    std::cout << sm.get_data() << std::endl;

    return 0;
}