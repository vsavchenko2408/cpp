#ifndef CONTROL_H
#define CONTROL_H
#include "account.h"
#include <deque>

class control
{
private:
    std::deque<Account> acc_database;
public:
    control();
    control(Account& acc);
    ~control();
    void create_account(double money, const std::string& name, size_t age);
    void show_all_accounts();
};





#endif