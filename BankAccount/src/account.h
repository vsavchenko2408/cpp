#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <iostream>

class Account
{
    
    double m_money;
    std::string m_name;
    size_t m_age;
    static int ID;
    public:
    Account() ;
    Account(double money, std::string name, size_t age) ;
    bool draft_money(double draft);
    float get_money(); 
};

#endif