#include <iostream>
#include <ctime>

using std::cin;
using std::cout;
using std::endl;
class Watch
{
public:
  void time()
  {
    cout << "Time!" << endl;
  }
};

class Human
{
  class Brain
  {
  public:
    void think()
    {
      cout << "I am think!" << endl;
    }
  };
  Brain b;

public:
  void seetime(Watch *w)
  {
    w->time();
  }
  void Think()
  {
    b.think();
  }
};

int main()
{
  Watch w;
  Human h;
  Human h2;
  h2.seetime(&w);
  h.seetime(&w);
  // h.Think();

  return 0;
}
