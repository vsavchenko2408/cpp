#include "Player.h"
///
Player::Player()
{
    int x = 5;
    int y = 5;
}
///
void Player::step(char step)
{
    switch (step)
    {
    case 'a':
        y--;
        break;
    case 's':
        x--;
        break;
    case 'd':
        y++;
        break;
    case 'w':
        x++;
        break;
    default:
        x;
        y;
    }
}
///

int Player::get_xcoord()
{
    return x;
}
int Player::get_ycoord()
{
    return y;
}