#pragma once
#include <iostream>
#include <string>
#define ui unsigned int
class MyClass
{
public:

MyClass();              //конструктор по умолчанию
MyClass(std::string& _str);  //конструктор с параметрами
void show();

private:
ui ID;
std::string str;
};
