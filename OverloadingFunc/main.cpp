#include <iostream>
using namespace std;

double foo(double a, double b)
{
    cout << "Double" << endl;
    return a * b;
    
}
int foo(int a)
{
    cout << "Integer" << endl;
    return a * a;
    
}


int main()
{
    cout << foo(5) << endl;
    cout << "######################################" << endl;
    cout << foo(5.2f) << endl;
    cout << "######################################" << endl;
    cout << foo(5, 6) << endl;
    cout << "######################################" << endl;
    return 0;
}