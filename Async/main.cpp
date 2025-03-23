
#include <future>
#include <iostream>

int foo(int a, int b)
{
    return a + b;
}

int main()
{
    int a = 5;
    int b = 10;
std::future<int> resultFuture = std::async(std::launch::async,foo, a, b);
int res = resultFuture.get();;
std::cout << res << std::endl;
}
