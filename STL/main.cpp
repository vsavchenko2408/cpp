#include <iostream>
#include <list>
using std::cout;
using std::list;
using std::endl;

int main()
{
    list<int> v{10, 20, 30, 40, 50};
    list<int>::iterator it = v.begin();
    
    for (size_t i =0; i < v.size(); ++i)
    {
        cout << *it << endl;
        ++it;
    }
    return 0;
}