#include<iostream>
#include <vector>
#include <algorithm>
using std::cout;
using std::cin;
using std::endl;
using std::vector;

template<class T>
class functor
{
public:
T operator() (T a, T b)
{
return (a < b);
}

};

int main()
{

vector<float> myvec = {1.4, 4.5, 3.2, 6.7, 5.4, 5.6, 3.4};
functor<float> func;

std::sort(myvec.begin(), myvec.end(),func );



for(auto x : myvec)
{
    cout << x << endl;
}


}
