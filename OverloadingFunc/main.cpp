#include <iostream>
using namespace std;

template<class T1, class T2>
T1 foo(T1 a, T2 b)
{
    cout << a << b << endl;
}
int main()
{
foo( 5.2, " string");

    return 0;
}