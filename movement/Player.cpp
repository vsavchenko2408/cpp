#include "Player.h"
///
Player::Player()
{
    coord.x = 5;
    coord.y = 5;
}
///
void Player::step(char step)
{
    switch (step)
    {
    case 'a':
        coord.y--;
        break;
    case 's':
        coord.x--;
        break;
    case 'd':
        coord.y++;
        break;
    case 'w':
        coord.x++;
        break;
    default:
        coord.x;
        coord.y;
    }
}
///

Player Player::get_coord()
{
    return *this;
}