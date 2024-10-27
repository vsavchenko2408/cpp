#include <iostream>

using std::cin;
using std::cout;
using std::endl;

class Weapon
{
public:
virtual void shoot() = 0;
};

class Pistol : public Weapon
{
  public:
void shoot() override
{
  cout << "Bang!" << std::endl;
}
};
class Machinegun : public Weapon
{
  public:
void shoot() override
{
  cout << "Bangbangbang!" << std::endl;
}
};

class Player
{
  public:
  void attack(Weapon* w)
  {
    w->shoot();
  }
};

int main()
{
Pistol p;
Machinegun m;
Weapon* ptr = &p; 
Player pt;

pt.attack(ptr);

  return 0;
}
