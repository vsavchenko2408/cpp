#include <iostream>
#include <functional>
#include <algorithm>
#include <deque>

template<typename T>
bool foo(T a, T b)
{
    return a > b ? true : false ;  
}

int main()
{
    std::function<bool(double, double)> cmp = foo<double>;
    std::deque<double> dq = {1,2,3,4,5,6,7,8,9,10};
    std::sort(dq.begin(),dq.end(),cmp);
    for(auto i: dq)
    {
        std::cout << i << std::endl;
    }

    return 0;
}
