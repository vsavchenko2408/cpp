#include <iostream>
#include <algorithm>
#include <deque>
#include <random>

using std::cout;
using std::deque;
using std::endl;

bool cmp(int a)
{
    return a == 99;
}
int main()
{
    srand(time_t(nullptr));
    deque<int> dq;
    for (size_t i = 0; i < 50; ++i)
    {
        dq.emplace_back(rand() % 100);
    }

    auto findif = std::for_each(dq.begin(), dq.end(), [](int &a)
                                { a += 10; });
    cout << findif << endl
         << endl;
    for (auto &i : dq)
    {
        cout << i << " ";
    }
    return 0;
    system("pause");
}
