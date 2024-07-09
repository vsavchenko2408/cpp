#include <iostream>
using std::cout;
using std::endl;

int foo(int data)
{
    data +=100;
    return data;
}

int main()
{

int(*ptrfoo) (int)= foo;
cout << (*ptrfoo)(15) << endl;

system("pause");
}