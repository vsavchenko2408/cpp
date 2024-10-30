#include <iostream>
#include "MyClass.h"

using std::cin;
using std::cout;
using std::endl;


int main()
{
  MyClass<int> mci(15);
  MyClass<double> mcd;
  mcd.set_data(43.78);
  cout << mci;
  cout << mcd;

  return 0;
}
