#include <iostream>

using std::cin;
using std::cout;
using std::endl;

// [](){}

int main()
{
  auto mult = [](int a, int b) -> double
  {
    return a * b;
  };
  cout << mult(5.4, 5.2) << endl;
  return 0;
}
