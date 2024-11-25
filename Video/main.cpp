#include <iostream>
#include <memory>
using std::cin;
using std::cout;
using std::endl;
// auto_ptr
// unique_ptr
// shared_ptr

template <typename T>
class SmartPointer
{
private:
  T *m_ptr;

public:
  SmartPointer(T *ptr) : m_ptr(ptr) {}
  SmartPointer(const SmartPointer&) = delete;
  SmartPointer& operator=(const SmartPointer&) = delete;
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



  std::shared_ptr<int> sptr(new int(14));
  std::shared_ptr<int> sptr2 = sptr;
  cout << *sptr << endl;

  return 0;
}
