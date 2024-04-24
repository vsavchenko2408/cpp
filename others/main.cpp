#include <iostream>
#include "MyClass.h"
//#include <map>
using std::cin;
using std::cout;
using std::endl;



int main() 
{
MyClass mc;
mc.set_xyz(4,2,6);
mc.show_xyz();

system("pause");
    return 0;
}