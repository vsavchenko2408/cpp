#include <iostream>
#include <fstream>
using std::cout;
using std::endl;
using std::cin;

int main()
{
std::fstream file;
char str[] = "file.txt";
file.open(str);
if(!file.is_open())
{
    std::cerr << "Error open file!" << endl;
}
else
{
    file << "Some text!" << endl;
}
    return 0;
}