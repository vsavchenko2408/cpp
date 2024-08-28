#include <iostream>
#include <vector>
using std::cout;
using std::cin;
using std::endl;

class Player
{
private:
struct Coord
{
int x;
int y;
};

Coord coor;
uint health;
uint armour;
uint dph;

public:

void heal(uint heal)
{
health += heal;
}
void damaged(uint damage)
{
    if(armour >0){armour -= damage;}
    //else if
}
uint hit()
{
return dph;
}
void move(char x)
{
switch(x)
    {
        case 'w':
        coor.x++;
        break;
        case 's':
        coor.x--;
        break;
        case 'a':
        coor.y--;
        break;
        case 'd':
        coor.y++;
        break;
        default:
        cout << "Incorrect input!" << endl;
    }
    

}

Player()
{
coor.x = 0;
coor.y = 0;
health = 100;
armour = 0;
dph = 10;
}


};

class Map
{
private:

static const int ROW = 10;
static const int COL = 10;
int arr[COL][ROW];

public:
Map()
{
for(int i=0;i<COL;++i)
    {
        for(int j=0;j<ROW;++j)
        {   
        arr[i][j] = 0;
        }
    }   
}
void show_map()
{
for(int i=0;i<COL;++i)
    {
        for(int j=0;j<ROW;++j)
        {   
        cout << arr[i][j];
        }
        cout << endl;
    }
}
};



int main()
{
Map map;
Player player;

map.show_map();


    return 0;
}