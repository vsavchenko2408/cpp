#include <iostream>
using std::cin;
using std::cout;
using std::endl;

class MyString
{
public:
MyString(){str = nullptr;}
MyString(char _str[])
{
str = _str;
}

void print_str()
{
    cout << str << endl;
}
void set_string()
{
    cin >> str[50];
}
void operator=(char _str[])
{
    str = _str;
}

~MyString()
{
    delete [] str;
}
private:
char* str = new char[50];
};

int main() {

cout << "Input some text: " << endl;

MyString a;
a.set_string();
a.print_str();
    return 0;
}