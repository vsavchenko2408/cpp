#include <iostream>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;

int main()
{
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};

  auto end = std::remove_if(arr, arr + 14, [](int &a)
                            { return (a % 2) == 0; });

  int newarr[*(end)-1];
  for (auto i = 0; i < *(end); ++i)
  {
    newarr[i] = arr[i];
  }
  for (auto &x : newarr)
  {
    cout << x << " ";
  }
  cout << endl;
  return 0;
}
