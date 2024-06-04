#ifndef TASK_H
#define TASK_H
#include <iostream>
class Task
{
    std::string name;
    bool status;
    int priority;

public:
    Task( std::string _name, bool _status, int _priority);  //args constr
    Task() = default;                                       //default const
    void task_info();                                       //display all info
    void set_priority(int _priority);

};

#endif // TASK_H
