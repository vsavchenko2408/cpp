#include <iostream>
#include "Array.h"

int main()
{
    Array<int> ar(10);
    std::cout << "Size: " << ar.get_size() << std::endl;
    try
    {
    for(int i = 0; i < (ar.get_size()+1);i++)
    {
        ar[i] = i+1;
    }
    }catch(const std::out_of_range& e)
    {
        std::cout << "Error: " << e.what() << std::endl;
    }
    for(int j = 0; j < ar.get_size();j++)
    {
        std::cout << ar[j] << std::endl;
    }
}