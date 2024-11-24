#include <iostream>
#include <memory>
using std::cin;
using std::cout;
using std::endl;

template <typename T>
class SmartPointer
{
private:
  T *m_ptr;

public:
  SmartPointer(T *ptr) : m_ptr(ptr) {}
  T &operator*()
  {
    return *m_ptr;
  }
  ~SmartPointer()
  {
    delete m_ptr;
  }
};

int main()
{
  SmartPointer<int> ptr = new int(10);
  cout << *ptr << endl;

  return 0;
}
