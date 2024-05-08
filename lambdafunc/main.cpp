#include <iostream>

using std::cout;
using std::endl;

int main()
{

auto f = [](){ int i = 10; return i;};
cout << f() << endl;
system("pause");
    return 0;
}