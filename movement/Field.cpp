#include "Field.h"

void Field::fill_field(Player &obj)
{
    for (size_t i = 0; i < 50; ++i)
    {
        for (size_t j = 0; j < 50; ++j)
        {

            if ((i != 0 && i != 49) && (j != 0 && j != 49))
            {
                field[i][j] = ' ';
            }
            else if (obj.coord.x == i && obj.coord.y == j)
            {
                field[i][j] = 'p';
            }
            else
            {
                field[i][j] = '#';
            }
        }
    }
}

void Field::draw_field()
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