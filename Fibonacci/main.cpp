#include <iostream>

void fib(int val)
{
    unsigned long int a = 0;
    unsigned long int b = 1;
    unsigned long int next = 1;
    while(next <= val)
    {
        next = a + b;
        a = b;
        b = next;
        std::cout << next << std::endl;
    }
}
int main()
{
    fib(1000);
}