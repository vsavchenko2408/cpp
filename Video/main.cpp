#include <iostream>
// ad-hoc polimorphism
using std::cin;
using std::cout;
using std::endl;

class Enemy
{
public:
  virtual void attack() = 0;
};

class Warrior : public Enemy
{
public:
  void attack() override
  {
    cout << "Sword!" << endl;
  }
};

class Mage : public Enemy
{
public:
  void attack() override
  {
    cout << "Fireball!" << endl;
  }
};

class Archer : public Enemy
{
public:
  void attack() override
  {
    cout << "Bow!" << endl;
  }
};
int main()
{
  Warrior w;
  Archer a;
  Mage m;
  Enemy *ptr = &w;
  // ptr->attack();
  Enemy *enemies[3];
  enemies[0] = &w;
  enemies[1] = &a;
  enemies[2] = &m;
  for (int i = 0; i < 3; ++i)
  {
    ptr = enemies[i];
    ptr->attack();
  }
  Enemy e;
  return 0;
}
