#include <iostream>
using std::cout;
using std::endl;
using std::cin;

class MyClass
{
public:
MyClass(int a)
{
    x = a;
    cout << "Constructor! " << endl;
}
int getX()
{
    return x;
}
~MyClass()
{
    cout << "Destructor" << endl;
}
private:
int x;
};
int main()
{
MyClass mc(15);

cout <<  mc.getX() << endl;

    return 0;
}