#include <iostream>
#pragma once

class Player
{
public:
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
unsigned short health;
unsigned short armour;
unsigned short ammo;
};