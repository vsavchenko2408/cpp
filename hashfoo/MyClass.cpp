#define ui unsigned int
#include <iostream>
using std::string;
class MyClass
{
public:
int hash(const string& str);

MyClass()
{
    std::cout << "Input some text: " << std::endl;
    std::cin >> str;
    ID = hash(str);
}

MyClass(string& _str)
{
str = _str;
ID = hash(_str);
}
private:
ui ID;
string str;

};

int hash(const string& str)
{
ui id;
for(auto x: str)
{
    id += x;
}

return id%10;
}