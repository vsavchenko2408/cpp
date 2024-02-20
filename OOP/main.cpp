#include <iostream>
using std::cout;
using std::cin;
using std::endl;

class MyClass
{
public:
void set_data(int x, int y)//setter
{
a = x;
b = y;
}

void get_data()//getter
{
cout << "A = " << a << endl;
cout << "B = " << b << endl;
}

private:
int a;
int b;
};

int main()
{
MyClass mc;//obj mc

mc.set_data(4,6);
mc.get_data();


    return 0;
}