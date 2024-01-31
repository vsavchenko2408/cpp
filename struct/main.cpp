#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

struct human
{
string name;
unsigned int age;
unsigned int weight;
unsigned int height;
int id = 100;
};

int main()
{

human man;
cout << sizeof(human) << endl;
cout << sizeof(man) << endl;

    return 0;
}