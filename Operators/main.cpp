#include <iostream>
using std::cout;
using std::endl;

class Oper
{
public:
Oper(int _x, int _y)
{
   x= _x;
   y= _y;
}
void show()
{
    cout << "x = " << this-> x << endl;
    cout << "y = " << this-> y << endl;
}
void operator+(Oper& obj)
{
    x = this->x + obj.x;
    y = this->y + obj.y;
}
private:
int x;
int y;
};
int main()
{
Oper a(5,4);
Oper b(3,1);
a+b;


    return 0;
}