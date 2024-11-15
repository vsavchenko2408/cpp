#include <iostream>
#include <random>

using std::cin;
using std::cout;
using std::endl;
void fillarray(int *ptr, const size_t N)
{
  for (size_t i = 0; i < N; ++i)
  {
    ptr[i] = rand() % 100;
  }
}
void showarray(int *ptr, const size_t N)
{
  for (size_t i = 0; i < N; ++i)
  {
    cout << ptr[i] << " ";
  }
  cout << endl;
}

unsigned int sum(int *ptr, const size_t N)
{
  unsigned int sum = 0;
  for (size_t i = 0; i < N; ++i)
  {
    sum += ptr[i];
  }
  return sum;
}

int minvalue(int *ptr, const size_t N)
{
  int min = 100;
  for (size_t i = 0; i < N; ++i)
  {
    if (min > ptr[i])
    {
      min = ptr[i];
    }
  }
  return min;
}

int main()
{
  const size_t SIZE = 10;
  srand(time(NULL));
  int *arr = new int[SIZE];
  fillarray(arr, SIZE);
  showarray(arr, SIZE);
  cout << "Result: " << sum(arr, SIZE) << endl;
  cout << "Min value: " << minvalue(arr, SIZE) << endl;
  
  return 0;
}