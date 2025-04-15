// Правило нуля
// Правило трьох
// Правило п'яти

#include <iostream>
#include <vector>
class MyClass
{
  int *data;

public:
  // Constructor
  MyClass(int d)
  {
    data = new int(d);
  };

  // Destructor
  ~MyClass()
  {
    delete data;
  }

  // Copy constructor
  MyClass(const MyClass &obj)
  {
    data = new int(*obj.data);
  }
  // Move constructor
  MyClass(MyClass &&obj)
  {
    data = obj.data;
    obj.data = nullptr;
  }
  // Move operator
  MyClass &operator=(MyClass &&obj)
  {
    data = obj.data;
    obj.data = nullptr;
    return *this;
  }
  // Copy operator
  MyClass &operator=(const MyClass &obj)
  {
    if (this != &obj)
    {
      delete data;
      data = new int(*obj.data);
    }
    return *this;
  }

  void show()
  {
    std::cout << "data: " << *data << std::endl;
  }
};

int main()
{

  MyClass a(15);
  MyClass b(a);
  MyClass c = a;
  b.show();
  c.show();
  return 0;
}
