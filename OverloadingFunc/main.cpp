#include <iostream>
using namespace std;
int foo(int a)
{
    return a+10;
}

float foo(float a)
{
    return a+10.0;
}
int main()
{
int a = 5;
float f = 5.2;
cout << foo(f) << endl;


    return 0;
}