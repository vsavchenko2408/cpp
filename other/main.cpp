#include <iostream>
#include <thread>
#include <chrono>
#include <future>
void dowork1()
{
    using namespace std::chrono_literals;
    while (true)
    {
        std::cout << "First thread: " << std::this_thread::get_id << std::endl;
        std::this_thread::sleep_for(1000ms);
    }
}

void dowork2()
{
    using namespace std::chrono_literals;
    while (true)
    {
        std::cout << "Second thread:  " << std::this_thread::get_id << std::endl;
        std::this_thread::sleep_for(1000ms);
    }
}

int main()
{

    // std::thread td1(dowork1);

    // std::thread td2(dowork2);

    // td1.join();
    // td2.join();
    std::async(dowork1);
    std::async(dowork2);
    return 0;
}
