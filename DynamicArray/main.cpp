#include <iostream>
#include "array.h"


int main()
{
    Array<int> arr;
    arr.push_back(15);
    arr.push_back(20);
    arr.push_back(10);
    for(int i = 0; i < arr.size(); i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}