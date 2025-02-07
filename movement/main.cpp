#include <iostream>
#include "Field.h"

int main()
{
    Field fl;
    Player pl;
    fl.fill_field();
    fl.draw_field(pl);
    return 0;
}