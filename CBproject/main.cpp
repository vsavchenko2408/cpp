#include <iostream>

using std::cout;
using std::cin;
using std::endl;
template <typename T1, typename T2>
T1 MyFoo(T1 a, T2 b)
{
if(a>b)
return a;
else if (a<b)
return b;
}

int main()
{

cout << MyFoo('F',4);
    return 0;
}
