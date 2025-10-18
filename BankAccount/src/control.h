#ifndef CONTROL_H
#define CONTROL_H
#include "account.h"
#include <fstream>
#include <deque>

class control
{
private:
    std::deque<Account> acc_database;
    std::fstream file_database;
public:
    control();
    control(Account& acc);
    ~control();
    void create_account(double money, const std::string& name, size_t age);
    void show_all_accounts();
    bool draft_money(int id_draft, double draft_money);
    bool add_money(int id_add, double add_money);
    bool save_database();
};





#endif