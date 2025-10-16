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

    bool control::save_database()
    {
        file_database.open("Database.bin", file_database.binary | file_database.in | file_database.out);
        if(file_database.is_open())
        {
        for(auto it : acc_database)
        {
            file_database << it << std::endl;
        }

        file_database.close();
        return true;
        }
        else
        {
            std::cerr << "Dont open file!" << std::endl;
            return false;
        }

    }