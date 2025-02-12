#include <iostream>
#include <thread>
#include <mutex>

std::mutex mt;

const void display(int *arr, const int N, char symbol)
{
    for (size_t i = 0; i < N; ++i)
    {
        std::cout << symbol;
    }
    std::cout << std::endl;
}
void foo()
{
    const int N = 10;
    int arr[N];
    char symbol;
    std::cout << "Enter symbol: ";
    std::cin >> symbol;
    display(arr, N, symbol);
}
int main()
{
    std::thread th1(foo);
    std::thread th2(foo);

    th1.join();
    th2.join();

    return 0;
}