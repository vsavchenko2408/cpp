#include "Field.h"

void Field::fill_field()
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

void Field::draw_field(Player &obj)
{
    for (size_t i = 0; i < 50; ++i)
    {
        for (size_t j = 0; j < 50; ++j)
        {
            if (obj.x == i && obj.y == j)
            {
                field[i][j] = 'p';
            }
            std::cout << field[i][j];
        }
        std::cout << std::endl;
    }
}
