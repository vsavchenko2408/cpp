#include <iostream>
using std::cout;
using std::endl;

class MyClass
{
int* data;

public:
MyClass(){}
MyClass(int value)
{
    cout << "Constr" << this << endl;
    data = new int(value);
}
MyClass(const MyClass& obj)
{
    cout << "Constr Copy" << this << endl;
    data = new int(*(obj.data));
}
~MyClass()
{
    delete data;
    cout << "Destr" << this << endl;
}
}; 

int main()
{
    MyClass a(10);
    MyClass b = a;


    return 0;
}