#include <iostream>
using std::cout;
using std::endl;

class Oper
{
public:
Oper(int _x, int _y);
void show();
void operator+(Oper& obj);
Oper operator=(Oper& obj);

private:
int x;
int y;
};
int main()
{
Oper a(5,4);
Oper b(3,1);
Oper c = a;
c.show();

    return 0;
}


Oper::Oper(int _x, int _y)
{
   x= _x;
   y= _y;
}

void Oper::show()
{
    cout << "x = " << this-> x << endl;
    cout << "y = " << this-> y << endl;
}

void Oper::operator+(Oper& obj)
{
    x = this->x + obj.x;
    y = this->y + obj.y;
}

Oper Oper::operator=(Oper& obj)
{
this->x = obj.x;
this->y = obj.y;
return *this;
}