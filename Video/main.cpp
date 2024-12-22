#include <iostream>
#include <set>

using std::cin;
using std::cout;
using std::set;
using std::endl;

int main()
{
  set<double> dq{43, 23, 87, 76, 56, 45};
  for(auto it : dq)
  {
    cout << it << endl;
  }

  return 0;
}
