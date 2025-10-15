#include <iostream>
#include "account.h"
#define DEBUG

void debug()
{
    Account ac;
    Account ac2;
    Account ac3;
    Account ac1(3600.0, "John", 18);
    if(ac1.draft_money(500.0))
    {
    std::cout << "You draft 500 money!" << std::endl;
    }
    std::cout << "Money: " << ac1.get_money() << std::endl;
    if(ac1.draft_money(5000))
    {
     std::cout << "You draft 5000 money!" << std::endl;       
    }
    std::cout << ac.get_ID() << std::endl;
    std::cout << ac1.get_ID() << std::endl;
    std::cout << ac2.get_ID() << std::endl;
    std::cout << ac3.get_ID() << std::endl;
}
int main()
{
    #ifdef DEBUG
    debug();
    #endif

    return 0;
}