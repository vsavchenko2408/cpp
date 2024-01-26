#include <iostream>

#pragma once

class Player
{
    Player(unsigned short coor_x = 5,unsigned short coor_y = 5,unsigned short health = 100, unsigned short armour = 0, unsigned short ammo = 20)
    {
        this->coor_x = coor_x;
        this->coor_y = coor_y;
        this->health = health;
        this->armour = armour;
        this->ammo = ammo;
    }
public:
void player_move(unsigned short coor_x, unsigned short coor_y)
{
if(coor_x > this->coor_x) this->coor_x++;
else if(coor_x < this->coor_x) this->coor_x--;
else if(coor_y > this->coor_y) this->coor_y++;
else if(coor_y < this->coor_y) this->coor_y--;

}
void heal_player(int val)
{
    if(this-> health < 100)
    {    
    this->health = health+val;
    }
    else
    {
        std::cerr << "Health is Full! " << std::endl;
    }
}
void armour_player(int val)
{
   if(this-> armour < 100)
    {    
    this->armour = armour+val;
    }
    else
    {
        std::cerr << "Armour is Full! " << std::endl;
    }  
}
void ammo_player(int val)
{
   if(this-> ammo < 255)
    {    
    this->ammo = armour+val;
    }
    else
    {
        std::cerr << "Ammo is Full! " << std::endl;
    }  
}
private:
unsigned short coor_x;
unsigned short coor_y;
unsigned short health;
unsigned short armour;
unsigned short ammo;
};