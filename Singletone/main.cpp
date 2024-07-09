#include <iostream>
using std::cout;
using std::cin;
using std::endl;

class A
{
A(){}
A(A &obj){}

int data;
public:
A(int _data)
{
    data = _data;
}
int get_data()
{
    return data;
}
};

int main()
{

A obj(10);



    return 0;
}