#include <iostream>
using namespace std;
static int i=0;

void foo()
{
    i++;
    cout << i << endl;
    if(i == 100)
    {
    return;
    }
    else
    {
    foo();
        }
}
int main()
{

foo();
cout << sizeof(foo());
    return 0;
}