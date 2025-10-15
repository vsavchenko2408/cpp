#include <iostream>
#include "account.h"
#define DEBUG

void debug()
{

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

}
int main()
{
    #ifdef DEBUG
    debug();
    #endif
    
    return 0;
}