#pragma once
#define ui unsigned int
#include <iostream>
#include "MyClass.h"
using std::string;
int hash(const string& str);

MyClass::MyClass()
{
    std::cout << "Input some text: " << std::endl;
    std::cin >> str;
    ID = hash(str);
}

MyClass::MyClass(string& _str)
{
str = _str;
ID = hash(_str);
}

void MyClass::show()
{
    std::cout << "ID = " << ID << std::endl; 
    std::cout << "Text = " << str << std::endl;
}

int hash(const string& str)
{
ui id=0;
for(auto x: str)
{
    id += x;
}

return id%10;
}