#ifndef PLAYER_H
#define PLAYER_H

class Player
{
    struct coord
    {
        int x = 0;
        int y = 0;
    } coord;

public:
    Player()
    {
        coord.x = 5;
        coord.x = 5;
    }
    void step(int x, int y)
    {
        coord.x = x;
        coord.y = y;
    }
};

#endif