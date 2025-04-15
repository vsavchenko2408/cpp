// Правило нуля
// Правило трьох
// Правило п'яти

#include <iostream>
#include <vector>
class MyClass
{
  int *data;

public:
  MyClass(int d)
  {
    data = new int(d);
  };

  ~MyClass() // 1
  {
    delete data;
    data = nullptr;
  }

  MyClass(const MyClass &obj)
  {
    data = new int(*obj.data);
  }
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
  //a.~MyClass();
  b.show();
  return 0;
}
