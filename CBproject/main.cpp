#include <iostream>
#include "MyClass.h"
using std::cout;
using std::cin;
using std::endl;
template <typename T1, typename T2>
T1 MyFoo(T1 a, T2 b)
{
if(a>b)
return a;
else if (a<b)
return b;
}

int main()
{
/*
MyClass obj1;
obj1.set_data(14,25);
obj1.get_data();
MyClass obj2;
obj2.set_data(1,5);
obj2.get_data();
*/
cout << MyFoo('F',400);
    return 0;
}
