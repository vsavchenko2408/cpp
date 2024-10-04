#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

class Parent
{
public:
    Parent()
    {
        cout << __PRETTY_FUNCTION__ << endl;
    }

    ~Parent()
    {
        cout << __PRETTY_FUNCTION__ << endl;
    }
};

class Child : public Parent
{
public:
    Child()
    {
        cout << __PRETTY_FUNCTION__ << endl;
    }

    ~Child()
    {
        cout << __PRETTY_FUNCTION__ << endl;
    }
};

int main()
{
   // Parent p;
    Child c;

    return 0;
}