#include <iostream>
#include <deque>

using std::cout;
using std::endl;

int main()
{

std::deque<int> dq;

dq.push_front(5);
dq.push_back(14);
dq.push_back(32);
/*
std::deque<int>::iterator it;
it = dq.begin();

for(it;it != dq.end();it++)
{
    cout << *it << endl;
}
*/
cout << dq.size() << endl;


system("pause");
    return 0;
}