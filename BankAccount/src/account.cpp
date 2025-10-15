#include "account.h"

int Account::ID = 0; // Static member initialization

Account::Account() : m_name("nobody"), m_money(0), m_age(14)
    {
        ID++;
    }
    Account::Account(double money, std::string name, size_t age) : m_money(money), m_name(name), m_age(age)
    {
        ID++;
    }


    bool Account::draft_money(double draft)
    {
        if(m_money > draft)
        {
            m_money -= draft;
            return true;
        }
        else
        {
            std::cout << "Not enought money!" << std::endl;
        }
        return false;
    }

    float Account::get_money()
    {
        return m_money;
    }