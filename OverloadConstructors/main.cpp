#include <iostream>
using std::cout;
using std::endl;
using std::cin;

class MyClass
{
public:
MyClass()
{} 
MyClass(int cx, int cy)
{
x = cx;
y = cy;
}

MyClass(int cx)
{
x = cx;
y = 10;

}


int getX()
{
return x;
}
int getY()
{
return y;
}

int setX(int setx)
{
x = setx;
return x;
}
int setY(int sety)
{
y = sety;
return y;
}

private:
int x;
int y;
};

int main()
{
MyClass a;
a.setX(15);
a.setY(10);


MyClass b(7,5);

MyClass c;
cout << c.getX() << endl;
cout << c.getY() << endl;


MyClass d(3);
cout << d.getX() << endl;
cout << d.getY() << endl;



    return 0;
}