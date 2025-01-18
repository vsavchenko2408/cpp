#include <iostream>
#include <functional>
#include <algorithm>
#include <deque>

using std::cin;
using std::cout;
using std::endl;

bool foo(int a, int b);

int main()
{
  std::function<bool(int, int)> cmp;
  cmp = foo;
  std::deque<int> dq = {1,2,3,4,5,7,6,9,8,10};

  std::sort(dq.begin(),dq.end(),cmp);

  for(auto i: dq)
  {
    cout << i << endl;
  }




  return 0;
}


bool foo(int a, int b)
{
  return a>b ? true : false ;
}