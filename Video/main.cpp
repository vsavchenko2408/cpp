#include <iostream>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;

int main()
{
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  auto findif = std::find_if(arr, arr + 10, [](int &a)
                             { return a >= 5; });
  if (*(findif) != arr[10])
  {
    cout << "Find! " << findif - arr << endl;
  }
  else
  {
    cout << "Not find! " << endl;
  }
  return 0;
}
