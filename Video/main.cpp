#include <iostream>

using std::cin;
using std::cout;
using std::endl;

class Parent
{
public:
Parent()
{
  cout 
}
void show()
{
  cout << "Parent!" << endl;
}
};

class Child1 : virtual public Parent
{

};

class Child2 : virtual public Parent
{

};

class Grandson : public Child1, public Child2
{

};
int main()
{

Grandson g;
g.show();
  return 0;
}
