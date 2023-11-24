#ifndef MYCLASS_H
#define MYCLASS_H
#include <iostream>

class MyClass
{
  public:
  MyClass()
  {
  std::cout << "Constructor" << std::endl;
  }
    void set_data(int a,int b)
    {
    this->a = a;
    this->b = b;
    }
    void get_data()
    {
    std::cout << "A= " << a << std::endl;
    std::cout << "B= " << b << std::endl;
    }
~MyClass()
  {
  std::cout << "Destructor" << std::endl;
  }
  private:
    int a;
    int b;
};
#endif // MYCLASS_H
