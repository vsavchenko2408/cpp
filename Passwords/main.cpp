#include <iostream>


int main()
{
    srand(time(0));
    std::cout << "Enter password's length: ";
    int length;
    std::cin >> length;
    char* str = new char[length+1];
    for(int i = 0; i < length; i++)
    {
        str[i] = rand()%93+33;
    }
    std::cout << "Your pass: " << str << std::endl;
    delete[] str;
}