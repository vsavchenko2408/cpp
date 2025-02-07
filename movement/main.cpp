#include <iostream>
#include "Field.h"

int main()
{
    Field fl;
    Player pl;
    fl.fill_field(pl);
    fl.draw_field();
    return 0;
}