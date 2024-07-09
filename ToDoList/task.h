#ifndef TASK_H
#define TASK_H
#include <iostream>
class Task
{
    std::string work;
    bool status;
    int priority;
    

public:
    Task( std::string _work, bool _status, int _priority);  //args constr
    Task();                                                 //default const
    void task_info();                                       //display all info
    void set_priority(int _priority);                       //set priority
    void complete();                                        //change status

};

#endif // TASK_H
