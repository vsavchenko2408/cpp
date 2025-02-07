#ifndef FIELD_H
#define FIELD_H

#include <iostream>
#include "Player.h"
class Field
{

    char field[50][50];

public:
    void fill_field();
    void draw_field(Player &obj);
};

#endif
