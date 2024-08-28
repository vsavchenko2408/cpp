#include <iostream>
//#include <vector>
#define uint unsigned int
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


uint health;
uint armour;
uint dph;

public:
Coord coor;
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
        coor.y--;
        break;
        case 's':
        coor.y++;
        break;
        case 'a':
        coor.x--;
        break;
        case 'd':
        coor.x++;
        break;
        default:
        cout << "Incorrect input!" << endl;
    }
}

Player()
{
coor.x = 5;
coor.y = 5;
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
char arr[COL][ROW];

public:
Map()
{
for(int i=0;i<COL;++i)
    {
        for(int j=0;j<ROW;++j)
        {   
        arr[i][j] = ' ';
        }
    }   
}
void show_map(Player &player)
{
for(int i=0;i<COL;++i)
    {
        for(int j=0;j<ROW;++j)
        {  
         if(player.coor.x == j && player.coor.y == i) 
         {
            cout << "p";
         } 
         else
         {  
        cout << arr[i][j];
         }
        }
        cout << endl;
    }
}
};



int main()
{
Map map;
Player player;
char step;
do
{

std::cin >> step;
    system("cls");
player.move(step);
map.show_map(player);

}
while(step != 'x');
system("pause");
    return 0;
}