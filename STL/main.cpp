#include <iostream>
#include <forward_list>
using std::cout;
using std::endl;
using std::forward_list;

int main()
{
    forward_list<int> v{10, 20, 30, 40, 50};
    forward_list<int>::iterator it = v.begin();

    for (auto i: v)
    {
        cout << *it << endl;
        ++it;
    }
    return 0;
}