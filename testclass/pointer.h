#ifndef POINTER_H
#define POINTER_H

class Pointer
{
int x;
int y;
public:
Pointer(int _x, int _y);
Pointer();
void set_data(int x, int y);
int get_x();
int get_y();

};


#endif