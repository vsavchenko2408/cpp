#include <iostream>
#include <algorithm>
#include <deque>
#include <random>

using std::cout;
using std::deque;
using std::endl;

bool cmp(int a)
{
    return a == 12;
}
int main()
{
    srand(time_t(nullptr));
    deque<int> dq;
    for (size_t i = 0; i < 10; ++i)
    {
        dq.emplace_back(rand() % 50);
    }

    auto findif = std::remove_if(dq.begin(), dq.end(), cmp);
    cout << *findif << endl
         << endl;
    for (auto &i : dq)
    {
        cout << i << " ";
    }
    return 0;
    system("pause");
}
