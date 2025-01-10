#include <iostream>
#include <queue>
#include <vector>
#include <list>

using std::cout;
using std::endl;
using std::list;
using std::priority_queue;
using std::vector;

int main()
{
    priority_queue<int> q;
    q.emplace(5);
    q.emplace(43);
    q.emplace(32);
    q.emplace(15);
    q.emplace(22);

    while (!q.empty())
    {
        cout << q.top() << endl;
        q.pop();
    }

    return 0;
}
