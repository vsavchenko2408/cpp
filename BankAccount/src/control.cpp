#include "control.h"
    control::control()
    {

    }
    control::control(Account& acc)
    {
        acc_database.push_back(acc);
    }

    control::~control()
    {  
        acc_database.clear();
    }

    void control::create_account(double money, const std::string& name, size_t age)
    {
        acc_database.emplace_back(money, name, age);
    }
    void control::show_all_accounts()
    {
        for(auto it: acc_database)
        {
           std::cout<< "Name: " <<  it.get_name() << " ID: " << it.get_ID() << std:: endl;
        }
    }