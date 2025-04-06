#include <iostream>

int main(int argc, char *argv[]) // argc = size, argv = parameters
{
    for (size_t i = 0; i < argc; ++i)
    {
        std::cout << i << ": " << argv[i] << std::endl;
    }

    return 0;
}