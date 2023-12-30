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
void hit()
{
    if(armor>0)
    {
        armor -=10;
    }
    if(armor==0)
    {
        health -=10;
    }
    else if(health <=10)
    {
        death();
    }
health -= 10;

}
void death()
{
    ~player()
    {
        delete &player;
    }
}
    private:
    short health;
    short armor; 
};


int main()
{
    

player one;
player two;
gun pistol;
machinegun mp4;


    return 0;
}