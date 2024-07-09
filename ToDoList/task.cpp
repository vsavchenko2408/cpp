#include "task.h"
#include <iostream>

Task::Task( std::string _work, bool _status, int _priority)
{
    work = _work; status = _status, priority = _priority;
}
Task::Task()
{
    std::cout << "Input a work: " << std::endl;
    std::cin >> work;
    status = false;
    std::cout << "Input priority: " << std::endl;
    std::cin >> priority;
}

void Task::task_info()
{
    std::cout << "Task: " << work << std::endl;
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

void Task::complete()
{
    status = true;
}
