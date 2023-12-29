#include <iostream>
#include <list>
using std::cout;
using std::cin;
using std::endl;
using std::list;

class weapon
{
public:
    virtual void shoot() =0;
};


class gun: public weapon
{
void shoot() override
{
cout << "Bang! " << endl;
}
};
class machinegun: public weapon
{
void shoot() override
{
    cout << "bangbangbang! " << endl;
}
};
class player
{
   public:
   void shoot(weapon *weapon) 
    {
        weapon->shoot();
    }   
};


int main()
{
    list<weapon> ListWeapons;

player one;
gun pistol;
machinegun mp4;
ListWeapons.emplace_back(pistol);
ListWeapons.emplace_back(mp4);
list<weapon>::iterator itlist = ListWeapons.begin();
for(itlist; itlist != ListWeapons.end();itlist++)
{
one.shoot(&pistol);
one.shoot(&mp4);
}
    return 0;
}