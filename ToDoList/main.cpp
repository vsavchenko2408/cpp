#include <iostream>
#include "task.h"
#include <vector>



int main()
{
    std::vector<Task> Tasks;
    Task job;
    Task home("To Home", false, 2);
    Tasks.emplace_back(job);
    Tasks.emplace_back(home);
    for(auto x: Tasks)
    {
        x.task_info();
    }
    return 0;
}
