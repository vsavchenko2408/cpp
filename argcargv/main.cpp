#include <iostream>

int main(int argc, char *argv[])
{
    for (size_t i = 0; i < argc; ++i)
    {
        std::cout << "Param: " << i << " " << argv[i] << std::endl;
    }
    std::cout << "Program sucessful!" << std::endl;
    return 0;
}