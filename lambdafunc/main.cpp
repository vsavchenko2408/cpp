#include <iostream>
#include <vector>
#include <algorithm>
using std::cout;
using std::endl;
using std::vector;


int main()
{
int a = 15;

auto f = [&a](){return a*10;};
cout << f() << endl;
cout << "A: " << a << endl;

    return 0;
}