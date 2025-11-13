#include <iostream>
#include <vector>
#include <chrono>
#include <thread>
#include <random>
#include <mutex>
std::mutex m;
void show(char symb)
{
    // m.lock();
    for (size_t i = 0; i < 10; ++i)
    {
        for (size_t j = 0; j < 10; ++j)
        {
            std::cout << symb;
            std::this_thread::sleep_for(std::chrono::milliseconds(100));
        }
        std::cout << std::endl;
    }
    // m.unlock();
}
int main()
{
    std::thread th1(show, '*');
    std::thread th2(show, '#');

    th1.join();
    th2.join();

    return 0;
}
