#include "MyClass.h"

MyClass::MyClass()
{
    x = 0;
    y = 0;
    z = 0;
}
MyClass::MyClass(int _x, int _y, int _z)
{
    x = _x;
    y = _y;
    z = _z;
}

void MyClass::set_xyz(int _x, int _y, int _z)
{
    x = _x;
    y = _y;
    z = _z;
}

void MyClass::show_xyz()
{
std::cout << "X: " << x << std::endl;
std::cout << "Y: " << y << std::endl;
std::cout << "Z: " << z << std::endl;
}