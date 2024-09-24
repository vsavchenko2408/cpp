#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::cin;
using std::string;



class Pointers
{
private:
int x;
int y;

public:
static int count;
Pointers()
{
    count++;
    x = 0;
    y = 0;
}
Pointers(int x, int y)
{
        count++;
    this->x = x;
    this->y = y;
}

void show()
{

    cout << "x: " << x << endl;
    cout << "y: " << y << endl;
}
~Pointers()
{
    count--;
}
Pointers operator+(const Pointers& other)
{
Pointers temp;
temp.x = this->x + other.x;
temp.y = this->y + other.y;
return temp;
}

Pointers operator-(const Pointers& other)
{
Pointers temp;
temp.x = this->x - other.x;
temp.y = this->y - other.y;
return temp;
}
Pointers operator*(const Pointers& other)
{
Pointers temp;
temp.x = this->x * other.x;
temp.y = this->y * other.y;
return temp;
}
Pointers operator/(const Pointers& other)
{
Pointers temp;
if(other.x != 0 || other.y != 0)
{
temp.x = this->x / other.x;
temp.y = this->y / other.y;
return temp;
}
else
{
std::cerr << "Devide by zero!" << std::endl;
return other;
}
}
};

 int Pointers::count = 0;

int main()
{
   
{
Pointers p1(4,7);
Pointers p2(1,6);
Pointers p3 = p1 + p2;

p3.show();
cout << Pointers::count << endl;
}
cout << Pointers::count << endl;
    return 0;
}

