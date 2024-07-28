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
std::vector<std::vector<int>> field;


public:
Map()
{
for(auto &i: field)
    {
        
        for(auto &x: i)
        {   
            i.emplace_back(0);
        }
    }   
}
void show_map()
{
for(auto &i: field)
    {
        for(auto &x: i)
            {
                cout << x << " ";
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