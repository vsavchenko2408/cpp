#include <iostream>
#include "task.h"
#include <vector>
#include <chrono>
#include <thread>
#include <cstdlib>


int main()
{
    /*
    std::vector<Task> Tasks;
    Task job;
    Task home("To Home", false, 2);
    Tasks.emplace_back(job);
    Tasks.emplace_back(home);
    for(auto x: Tasks)
    {
        x.task_info();
    }
    */
  auto data = std::chrono::milliseconds(10);
  for(auto i = data.count(); i!=0;--i)
  {
std::cout << i << std::endl;
std::this_thread::sleep_for(std::chrono::milliseconds(1000));
  }
  system("beep -f 440 -l 500");
    //localtime();

    return 0;
}
