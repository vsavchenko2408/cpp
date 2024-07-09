#include "pointer.h"


Pointer::Pointer(int _x, int _y)
{
    x = _x;
    y = _y;
}

Pointer::Pointer(){x=0; y=0;}

void Pointer::set_data(int x, int y)
{
    this->x = x;
    this->y = y;
}
int Pointer::get_x()
{
return x;
}
int Pointer::get_y()
{
    return y;
}
