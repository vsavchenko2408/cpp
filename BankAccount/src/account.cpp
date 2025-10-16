#include "account.h"

int Account::s_next_id = 1; // Починаємо з 1

Account::Account() : m_name("nobody"), m_money(0), m_age(14), m_id(s_next_id++)
{
}

Account::Account(double money, std::string name, size_t age) 
    : m_money(money), m_name(name), m_age(age), m_id(s_next_id++)
{
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

    float Account::get_money() const
    {
        return m_money;
    }
    int Account::get_ID() const
    {
        return m_id;
    }
    std::string Account::get_name() const
    {
        return m_name;
    }

    size_t Account::get_age() const
    {
        return m_age;
    }