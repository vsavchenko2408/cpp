#include <iostream>
#include <thread>

void dowork1()
{
    while (true)
    {
        std::cout << "First thread" << std::endl;
    }
}

void dowork2()
{
    while (true)
    {
        std::cout << "Second thread" << std::endl;
    }
}

int main()
{
    thread td1(dowork1);
    thread td2(dowork2);

    td1.join();
    td2.join();

    return 0;
}
