#include <iostream>
#include <algorithm>
using std::cin;
using std::cout;
using std::endl;

int main()
{
  int arr[] = {1, 5, 2, 6, 3, 7, 4, 9, 10, 8};
  std::sort(arr, arr + 10, [](int a, int b)
            { return a > b; });

  for (size_t i = 0; i < 10; ++i)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
  return 0;
}
