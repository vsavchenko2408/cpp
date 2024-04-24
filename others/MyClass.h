#ifndef MYCLASS_H
#define MYCLASS_H
#include <iostream>
class MyClass
{
public:
MyClass();
MyClass(int,int,int);
void set_xyz(int _x, int _y, int _z);
void show_xyz();
private:

int x,y,z;
};

#endif
