#include <iostream>
//#include "a.h"
#include "b.h"
using std::cout;
using std::endl;

int main()
{
    B obj_b(5,3);
    B *p;
    p = &obj_b;
    ++p;
    cout << p->get_data_a()<< endl;
    cout << p->get_data_b()<< endl;

    return 0;
}
