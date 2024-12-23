#include <iostream>
#include <set>
using std::cin;
using std::cout;
using std::endl;
using std::set;

int main()
{
  set<int> st;
  st.insert(12);
  st.insert(7);
  st.insert(15);
  st.insert(3);
  st.insert(10);
  st.emplace(5);


  auto it = st.upper_bound(10);
  cout << *it << endl;
  return 0;
}
