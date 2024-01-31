#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

struct human
{

char a;
double d;
};

int main()
{

human man;
cout << "Human: " << sizeof(human) << endl;
cout << "Man: " << sizeof(man) << endl;

    return 0;
}