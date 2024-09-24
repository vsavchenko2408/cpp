#include <iostream>

class A
{
int x=5;
int y=6;

friend void f();



};

void f(A& obj)
{
    std::cout << obj.x << " " << obj.y << std::endl;
}
int main()
{
A a;
f(a);
}