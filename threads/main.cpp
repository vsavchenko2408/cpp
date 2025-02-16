#include <iostream>
#include <thread>
#include <chrono>
#include <mutex>
std::mutex m;

void show(char symbol)
{

    {
        // m.lock();
        std::lock_guard<std::mutex> guard(m);
        for (size_t i = 0; i < 10; ++i)
        {
            for (size_t j = 0; j < 10; ++j)
            {
                std::this_thread::sleep_for(std::chrono::milliseconds(25));
                std::cout << symbol;
            }
            std::cout << std::endl;
        }
    }
    // m.unlock();
    std::this_thread::sleep_for(std::chrono::milliseconds(2000));
}

int main()
{
    std::thread th1(show, '*');
    std::thread th2(show, '#');

    th1.join();
    th2.join();

    return 0;
}