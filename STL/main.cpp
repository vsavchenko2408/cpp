#include <iostream>
#include <set>

using std::cout;
using std::endl;
using std::multiset;

int main()
{
    multiset<int> st{10, 15, 17, 16};
    st.insert(7);
    st.emplace(5);
    st.insert(10);
    st.emplace(10);

    for (auto i : st)
    {
        cout << i << endl;
    }
    cout << st.count(10) << endl;
    return 0;
}