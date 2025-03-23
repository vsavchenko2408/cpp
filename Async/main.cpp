
#include <future>
#include <iostream>
#include <thread>
#include <chrono>
int foo(int a, int b)
{
    std::mutex m;
    m.lock();
    std::cout << "Thread ID: " << std::this_thread::get_id() << std::endl;
    m.unlock();
    return a + b;
}

int main()
{
    int a = 5;
    int b = 10;
    std::future<int> resultFuture = std::async( &foo, a, b);
    std::cout << "Start cicle" << std::endl;
    for (size_t i = 0; i < 10; ++i)
    {
        std::mutex m;
        m.lock();
        std::cout << "i: " << foo(i, b) << std::endl;
        m.unlock();
    }
    std::cout << "Finish cicle" << std::endl;    
    int res = resultFuture.get();

    std::cout << res << std::endl;

    return 0;
}
