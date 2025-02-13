#include <iostream>
#include <thread>
#include <chrono>
void DoWork(bool work)
{
    while (work)
    {
        std::cout << "Working!" << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(2000));
    }
}

void TenIter()
{
    for (size_t i = 0; i < 10; ++i)
    {
        std::cout << "Work " << i + 1 << "sec" << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    }
}
int main()
{
    std::thread th1(DoWork, true);
    std::thread th2(TenIter);

    th1.detach();
    th2.join();
    return 0;
}