#include <iostream>
#include "MyLibrary.h"
//#include <map>
using std::cin;
using std::cout;
using std::endl;
using MyLib::MyClass;


int main() 
{
MyLib::MyClass mc;

mc.set_data(15);
cout << mc.get_data();


//system("pause");
    return 0;
}