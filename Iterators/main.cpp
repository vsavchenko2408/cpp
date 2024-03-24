#include <iostream>
#include <array>
using std::array;
using std::cout;
using std::endl;

int main()
{
array<int, 15> a;

a.fill(10);
for(auto x: a)
{
    cout << x;
}
    return 0;
}