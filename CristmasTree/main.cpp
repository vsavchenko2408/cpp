#include <iostream>

int main()
{

    for (size_t i = 1; i < 15; ++i)
    {
        for (size_t j = 0; j < 15 - i; ++j)
        {
            std::cout << " ";
        }
        for (size_t k = 0; k < 2 * i - 1; ++k)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    for (size_t l = 0; l < 15 - 1; ++l)
    {
        std::cout << " ";
    }
    std::cout << "||" << std::endl;
}