#include "Pointers.h"
////////
Pointers::Pointers()
{
    count++;
    x = 0;
    y = 0;
}
////////
Pointers::Pointers(int x, int y)
{
        count++;
    this->x = x;
    this->y = y;
}
////////
void Pointers::show() const
{
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;
}
////////
Pointers::~Pointers()
{
    count--;
}
////////
Pointers Pointers::operator+(const Pointers& other)
{
return Pointers(this->x + other.x,this->y + other.y);
}
////////
Pointers Pointers::operator-(const Pointers& other)
{
return Pointers(this->x - other.x,this->y - other.y);
}
////////
Pointers Pointers::operator*(const Pointers& other)
{
return Pointers(this->x * other.x,this->y * other.y);
}
////////
Pointers Pointers::operator/(const Pointers& other)
{
Pointers temp;
if(other.x != 0 || other.y != 0)
{
return Pointers(this->x / other.x,this->y / other.y);
}
else
{
std::cerr << "Devide by zero!" << std::endl;
return other;
}
}
////////
Pointers Pointers::operator%(const Pointers& other)
{
    return Pointers(this->x % other.x,this->y % other.y);
}
///////
bool Pointers::operator==(const Pointers& other) const
{
    return((this->x == other.x) && (this->y == other.y));
}
///////
bool Pointers::operator<(const Pointers& other) const
{
return((this->x + this->y) < (other.x + other.y));
}
/////////
bool Pointers::operator>(const Pointers& other) const
{
return((this->x + this->y) > (other.x + other.y));
}
