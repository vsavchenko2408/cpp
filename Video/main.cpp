#include <iostream>
#include <random>

using std::cin;
using std::cout;
using std::endl;
void fillarray(int *ptr, const size_t N);
void showarray(int *ptr, const size_t N);
void swap(int &a, int &b);
void sort(int *arr, const int N);

int main()
{
  const size_t SIZE = 20;
  srand(time(NULL));
  int *arr = new int[SIZE];
  fillarray(arr, SIZE);
  showarray(arr, SIZE);
  sort(arr, SIZE);
  cout << "Sorted!" << endl;
  showarray(arr, SIZE);
  return 0;
}

void showarray(int *ptr, const size_t N)
{
  for (size_t i = 0; i < N; ++i)
  {
    cout << ptr[i] << " ";
  }
  cout << endl;
}

void fillarray(int *ptr, const size_t N)
{
  for (size_t i = 0; i < N; ++i)
  {
    ptr[i] = rand() % 1000;
  }
}

void swap(int &a, int &b)
{
  int temp = a;
  a = b;
  b = temp;
}
void sort(int *arr, const int N)
{
  for (size_t i = 0; i < N; ++i)
  {
    for (size_t j = 0; j < N; ++j)
    {
      if (arr[i] < arr[j])
      {
        swap(arr[i], arr[j]);
      }
    }
  }
}