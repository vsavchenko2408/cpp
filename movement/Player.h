#ifndef PLAYER_H
#define PLAYER_H

class Player
{
    public:
    struct coord
    {
        int x = 0;
        int y = 0;
    } coord;


    Player();
    void step(char step);
    Player get_coord();
};

#endif