#pragma once 
#include <iostream>
class Player
{
public:
Player(int health, int armour, int ammo)
{
this->health = health;
this->armour = armour;
this->ammo = ammo;
x=5;
y=5;
}
void show_info()
{
std::cout << "Health: " << health << std::endl;
std::cout << "Armour: " << armour << std::endl;
std::cout << "Anmo: " << ammo << std::endl;
}
void move(char move)
{
switch(move)
{
case 'w':
    this->y++;
    break;
case 's':
    this->y--;
    break;
case 'a':
    this->x--;
    break;
case 'd':
    this->x++;
    break;
default:
    std::cout << "Wrong input" << std::endl;
}    
}
int get_x()
{
return x;
}
int get_y()
{
return y;
}

~Player()
{
  std::cout << "Player destructor! " << std::endl;  
}

private:
int x;
int y;
int health;
int armour;
int ammo;
};