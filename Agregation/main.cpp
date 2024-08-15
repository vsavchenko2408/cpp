#include <iostream>
#include <vector>
using std::cout;
using std::cin;
using std::endl;

class Player
{
private:
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
Player()
{
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
int field[ROW][COL];

public:
Map()
{
for(int i=0;i<COL;++i)
    {
        for(int j=0;j<ROW;++j)
        {   
          field[i][j] = 0;  
        }
    }   
}
void show_map()
{
for(int i=0;i<COL;++i)
    {
        for(int j=0;j<ROW;++j)
        {   
          std::cout << field[i][j];  
        }
        cout << endl;
    }   
}
};



int main()
{
Map map;
map.show_map();


    return 0;
}