#include <iostream>
#include "account.h"
#include "control.h"
#define DEBUG
/*
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
*/

int main()
{
    control accounts;
    short choise = -1;
    do
    {
        std::cout << "Hello. This is program for banc accounts." << std::endl;
        std::cout << "Choose what do you need: " << std::endl;
        std::cout << "For created account enter 1: " << std::endl;
        std::cout << "For draft money enter 2: " << std::endl;
        std::cout << "For add money enter 3: " << std::endl;
        std::cout << "For show all accounts enter 4: " << std::endl;
        std::cout << "Save all accounts enter 5:" << std::endl;
        std::cout << "For exit enter 0" << std::endl;
        std::cin >> choise;
        switch (choise)
        {
        case 1:
        {
            std::cout << "Enter name: ";
            std::string name;
            std::cin >> name;
            std::cout << "Age: ";
            size_t age;
            std::cin >> age;
            std::cout << "Money:  ";
            double money;
            std::cin >> money;
            accounts.create_account(money, name, age);
            break;
        }
        case 2:
        {
            std::cout << "Please enter ID account to draft money: " ;
            int id_draft = 0;
            std::cin >> id_draft;
            std::cout << "How money do you want draft: ";
            double draft_money = 0;
            std::cin >> draft_money;
            accounts.draft_money(id_draft, draft_money);
            break;
        }
        case 3:
        {
            std::cout << "Please enter ID account to add money: " ;
            int id_add = 0;
            std::cin >> id_add;
            std::cout << "How money do you want add: ";
            double add_money = 0;
            std::cin >> add_money;
            accounts.add_money(id_add, add_money);   
            break;         
        }
        case 4:
        {
            accounts.show_all_accounts();
            break;
        }
        case 5:
        {
            accounts.save_database();
        }
        default:
        {
            std::cerr << "Wrong input" << std::endl;
        }
            break;
        }
    }
    while(choise != 0);
/*
    #ifdef DEBUG
   // debug();
    control accounts;
    accounts.create_account(2500, "John", 15);
    accounts.create_account(3500, "Sara", 19);
    accounts.show_all_accounts();
    accounts.save_database();
    #endif
*/
    return 0;
}