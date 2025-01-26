#include <iostream>
#include <thread>
void foo()
{
    for (size_t i = 0; i < 100000000000; ++i)
    {
        std::cout << __PRETTY_FUNCTION__ << std::endl;
    }
}

int main()
{
    std::thread th1(foo);

    th1.join();
    system("pause");
    return 0;
}