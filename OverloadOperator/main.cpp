#include <iostream>
using namespace std;
class MyClass
{
public:
MyClass operator+(MyClass &obj)
{
    MyClass temp;
    temp.x = this->x + obj.x;
    return temp;
}

MyClass& operator=(const MyClass &obj)
{
    this->x = obj.x;
    return *this;
}

void set_x(int a)
{
    this->x = a;
}

int get_x()
{
return this->x;
}

private:
int x;
};

int main()
{
MyClass a;
MyClass b;

a.set_x(15);
b.set_x(10);

a = a+b;
cout << a.get_x();

    return 0;
}