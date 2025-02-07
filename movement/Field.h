#ifndef FIELD_H
#define FIELD_H

#include <iostream>

class Field
{

    char field[50][50];

public:
    void fill_field()
    {
        for (size_t i = 0; i < 50; ++i)
        {
            for (size_t j = 0; j < 50; ++j)
            {
                if ((i != 0 && i != 49) && (j != 0 && j != 49))
                {
                    field[i][j] = ' ';
                }
                else
                {
                    field[i][j] = '#';
                }
            }
        }
    }
    void draw_field()
    {
        for (size_t i = 0; i < 50; ++i)
        {
            for (size_t j = 0; j < 50; ++j)
            {
                std::cout << field[i][j];
            }
            std::cout << std::endl;
        }
    }
};

#endif
