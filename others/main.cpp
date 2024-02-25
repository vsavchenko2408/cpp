
#include <iostream>
static int count=0;
class MyClass
{
  public:
  MyClass(int a)
  {
      *this->a = a;
  std::cout << "Constructor " << this << std::endl;
  ++count;
  }
  ~MyClass()
  {
      --count;
      delete a;
      a = nullptr;
      std::cout << "Destructor " << this << std::endl;
  }
    private:
    int* a = new int;
    
};

MyClass foo(MyClass obj)
{
    std::cout << "Foo() " << &obj << std::endl;
    return obj;
}
int main() {
MyClass x(15);
MyClass y(x);
foo(x);
std::cout << "Count = " << count << std::endl;
    return 0;
}