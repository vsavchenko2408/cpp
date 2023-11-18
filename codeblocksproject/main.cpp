#include <iostream>
using std::cout;
using std::cin;
using std::endl;
template <class T>

T foo(T a,T b)
{
if(a<b)
    return a;
else
    return b;
}

int main()
{
cout << foo(13, 16) << endl;
cout << foo(43.6, 3.0) << endl;
cout << foo('r', 'e')<< endl;




return 0;
}
