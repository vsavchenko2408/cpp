#include <iostream>
struct MyStruct
{
void set(int x, int y)
{
    this->x = x;
    this->y = y;
}
void show()
{
    std::cout << "X = " << x << std::endl;
    std::cout << "Y = " << y << std::endl;
}
int x;
int y;
};