#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

class Parent
{
public:
    string msgOne = "Public";

protected:
    string msgTwo = "Protected";

private:
    string msgThree = "Protected";
};

class Child : private Parent
{

public:
    void show_msg()
    {
        cout << msgOne << endl;
        cout << msgTwo << endl;
    }
};

int main()
{
    Child obj;
    //obj.msgOne;
    //obj.msgTwo;
    obj.show_msg();
    return 0;
}