#include <iostream>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;

int main()
{
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};
  auto count = std::count_if(arr, arr + 14, [](int &a)
                             { return (a % 2) == 0; });
  cout << "Count: " << count << endl;

  return 0;
}
