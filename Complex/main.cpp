#include <iostream>
#include "complex.h"
int main()
{
Complex a(15,3);
Complex b(10,5);
Complex c(a+b);
c.show();
    return 0;
}