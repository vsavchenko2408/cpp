#include <iostream>

using std::cin;
using std::cout;
using std::endl;

template <class T>
class Array
{
int m_length;
T* arr;
public:
Array()
{
  m_length = 0;
  arr = nullptr;
}
Array(int length)
{
  m_length = length;
  arr = new T[m_length];
}

~Array()
{
  delete[] arr;
  arr = nullptr;
}
T& operator[](int index)
{
  return arr[index];
}

};
int main()
{
Array<double> arr(10);
arr[5] = 10.10;
cout << arr[5] << endl;
  return 0;
}
