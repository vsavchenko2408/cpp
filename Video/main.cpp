#include <iostream>

using std::cin;
using std::cout;
using std::endl;

class Parent
{
public:
  Parent()
  {
    cout << "Constr Parent" << endl;
  }
  virtual ~Parent()
  {
    cout << "Destr Parent" << endl;
  }
};

class Child : public Parent
{
  public:
  Child()
  {
    cout << "Constr Child" << endl;
  }
  ~Child()
  {
    cout << "Destr Child" << endl;
  }
};


int main()
{

Parent* ptr = new Child();

delete ptr;
  return 0;
}
