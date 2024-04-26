#ifndef MYLIB
#define MYLIB
#include "MyLibrary.h"
MyLib::MyClass::MyClass()
{
data = 0;
}
MyLib::MyClass::MyClass(int _data)
{
data = _data;
}
MyLib::MyClass::~MyClass(){}

void MyLib::MyClass::set_data(int _data)
{
data = _data;
}
int MyLib::MyClass::get_data()
{
return data;;
}



#endif