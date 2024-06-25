#include <iostream>
#include "pointer.h"
using std::cout;
using std::endl;



int main()
{
    Pointer a(4,7);
    cout << "A: " << a.get_x() << ", " << a.get_y();

}