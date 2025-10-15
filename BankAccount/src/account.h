#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <iostream>

class Account
{
    
    double m_money;
    std::string m_name;
    size_t m_age;
    const int m_id;          // Індивідуальний ID для кожного об'єкта
    static int s_next_id; // Статичний лічильник для генерації нових ID
    public:
    Account() ;
    Account(double money, std::string name, size_t age);
    //Account(Account&) = delete;
    //Account& operator=(Account&) = delete;
    //Account& operator=(Account&&) = delete;
    //Account(Account&&) = delete;
    bool draft_money(double draft);
    float get_money(); 
    int get_ID();
    std::string get_name();
    size_t get_age();
};

#endif