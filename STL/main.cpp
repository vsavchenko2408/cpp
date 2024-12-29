#include <iostream>
#include <set>

using std::cout;
using std::endl;
using std::set;

int main()
{
    set<int> st{12, 10, 15, 17, 16};
    st.insert(7);
    st.emplace(5);
    st.insert(10);
    // set<int>::iterator it = st.begin();
    for (auto i : st)
    {
        cout << i << endl;
    }
    return 0;
}