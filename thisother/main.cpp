#include <iostream>
using std::cout;
using std::endl;

class MyClass
{
public:
void setx(int x)
{
 this->x = x;
 cout << this << endl;   
}
private:
int x;

}; 

int main()
{
MyClass a;
a.setx(10);
MyClass b;
cout << &a << endl;

    return 0;
}