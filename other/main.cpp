#include <iostream>

class A
{
int x=5;
int y=6;
public:
friend void f(A& obj);

};

void f(A& obj)
{
   std::cout <<  obj.x << std::endl;
   std::cout <<  obj.y << std::endl;
}

int main()
{
A a;
f(a);
}