#include <iostream>
#include <queue>
using std::cout;
using std::endl;

int main()
{
std::deque<int> V{14,23,76,45,78,54,23};
std::deque<int>::iterator i = V.begin();
cout << *i << endl;
i++;
cout << *i << endl;
i--;
cout << *i << endl;


    return 0;
}