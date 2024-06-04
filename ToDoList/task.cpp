#include "task.h"
#include <iostream>

Task::Task( std::string _name, bool _status, int _priority)
{
    name = _name; status = _status, priority = _priority;
}

void Task::task_info()
{
    std::cout << "Task: " << name << std::endl;
    {
        if(status) std::cout << "Complete!" << std::endl;
        else std::cout << "Incomplete!" << std::endl;
    }
    std::cout << "Priority: " << priority << std::endl;
}

void Task::set_priority(int _priority)
{
    priority = _priority;
}
