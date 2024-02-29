#include <iostream>
static int count=0;// счетчик обьектов

class MyClass//создаем наш класс
{
  public:
  MyClass(int a)
  {
      *this->a = a;
  std::cout << "Constructor " << this << std::endl;
  ++count;
  }


  MyClass(const MyClass &other)//конструктор копирования
  {
    ++count;
int* a = new int;
*this->a = *a;
std::cout << "Constructor " << this << std::endl;
  }


  ~MyClass()//деструктор
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


std::cout << "Count = " << count << std::endl;
    return 0;
}