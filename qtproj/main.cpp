#include <iostream>
#include "task.h"


int main()
{
    Task one("Test1", false, 1);
    one.task_info();
    one.set_priority(2);
    one.task_info();


    return 0;
}
