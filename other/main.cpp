#include <iostream>
#include <cstdlib>
#include <unistd.h>

int main()
{
    size_t count = 0;
    while (count != 10)
    {
        std::cout << "1";
        usleep(10000);
        std::system("clear");
        std::cout << '2';
        usleep(10000);
        std::system("clear");
        // std::cout << '\n';
        std::cout << '3';
        usleep(10000);
        std::system("clear");
        // std::cout << '\n';
        std::cout << '4';
        usleep(10000);
        std::system("clear");
        count++;
    }
    return 0;
}
