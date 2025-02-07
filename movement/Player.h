#ifndef PLAYER_H
#define PLAYER_H

class Player
{
public:
    int x = 0;
    int y = 0;

    Player();
    void step(char step);
    int get_xcoord();
    int get_ycoord();

};

#endif