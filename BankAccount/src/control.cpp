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
    bool control::draft_money(int id_draft, double draft_money)
    {
        bool find = false;
        for(auto it: acc_database)
        {
            if(id_draft == it.get_ID())
            {
                find = true;
                it.draft_money(draft_money);
                return false;
            }
            else
            {
                find = false;
            }
        }
            return false;
    }

    bool control::add_money(int id_add, double add_money)
    {
          bool find = false;
        for(auto it: acc_database)
        {
            if(id_add == it.get_ID())
            {
                find = true;
                it.add_money(add_money);
                return false;
            }
            else
            {
                find = false;
            }
        }
            return false;      
    }
    bool control::save_database()
    {
        file_database.open("Database.bin",std::ios::out);
        if(file_database.is_open())
        {
        for(auto it : acc_database)
        {
            file_database << it << std::endl;
        }
        std::cout << "Database is saved" << std::endl;
        file_database.close();
        return true;
        }
        else
        {
            std::cerr << "Dont open file!" << std::endl;
            file_database.close();
            return false;
        }

    }