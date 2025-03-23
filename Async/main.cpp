
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
auto result = std::async(foo, a, b);
auto res = result.get();
std::cout << res << std::endl;
}
