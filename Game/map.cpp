#pragma once 
#include <iostream>
#include "Player.h"
class Map
{
public:
Map()
{
    
}


public:
void draw()
{
for(int i=0;i<10;i++)
{
    for(int j=0;j<10;j++)
        {
          std::cout << arr[i][j];
        }
    std::cout << std::endl;
}
}
void playerPosition(int playerX, int playerY)
    {
        arr[playerY][playerX] = 'P';
    }

void updatePlayer(Player& player)
    {
        
       int playerX = player.get_x();
       int playerY = player.get_y();
       playerPosition(playerX, playerY); 
    }
~Map()
{
    std::cout << "Destructor" << std::endl;
}
private:
char arr[10][10] = 
    {
    { '#','#','#','#','#','#','#','#','#','#'},
    { '#',' ',' ',' ',' ',' ',' ',' ',' ','#'},
    { '#',' ',' ',' ',' ',' ',' ',' ',' ','#'},
    { '#',' ',' ',' ',' ',' ',' ',' ',' ','#'},
    { '#',' ',' ',' ',' ',' ',' ',' ',' ','#'},
    { '#',' ',' ',' ',' ',' ',' ',' ',' ','#'},
    { '#',' ',' ',' ',' ',' ',' ',' ',' ','#'},
    { '#',' ',' ',' ',' ',' ',' ',' ',' ','#'},
    { '#',' ',' ',' ',' ',' ',' ',' ',' ','#'},
    { '#','#','#','#','#','#','#','#','#','#'}
    };

};