#include <iostream>
#include <vector>
#include <chrono>
#include <thread>
#include <random>
#include <mutex>
std::mutex m;
void fillvector(std::vector<int> &v)
{
    m.lock();
    for (auto &i : v)
    {
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
        i = rand() % 99;
    }
    m.unlock();
}
void showvector(std::vector<int> &v)
{
    m.lock();
    for (auto &i : v)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    m.unlock();
}
int main()
{

    srand(time(NULL));
    std::vector<int> MyVec(10);

    std::thread th_fill([&]()
                        { fillvector(MyVec); });

    std::thread th_show([&]()
                        { showvector(MyVec); });

    th_fill.join();
    th_show.join();
    return 0;
}
