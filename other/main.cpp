#include <iostream>
#include <algorithm>
#include <deque>
#include <random>

using std::cout;
using std::endl;
using std::deque;


int main()
{
    srand(time_t(nullptr));
    deque<int> dq;
    for(size_t i = 0; i < 10; ++i)
    {
        dq.emplace_back(rand()%100);
    }

    std::sort(dq.begin(), dq.end(), [](int a, int b){return a<b? true : false;});

    for(const auto& i : dq)
    {
        cout << i << endl;
    }
    return 0;
    system("pause");
}
