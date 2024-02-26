
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
  MyClass(const MyClass &other)
  {
    ++count;
int* a = new int;
*this->a = *a;
std::cout << "Constructor " << this << std::endl;
  }
  ~MyClass()
  {
      --count;
      delete a;
      a = nullptr;
      std::cout << "Destructor " << this << std::endl;
      std::cout << "Count = " << count << std::endl;
  }
    private:
    int* a = new int;
    
};


int main() {
MyClass x(15);
MyClass y(x);

//std::cout << "Count = " << count << std::endl;
    return 0;
}