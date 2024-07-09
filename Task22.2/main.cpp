#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
int val=0;
   cout << "Input value of Fibonacci: " << endl;   
   cin >> val; 
    int a=0;
    int b=1;
int arr[val];
for(int i=0;i<val;i++)
{
long long c = a + b;
    a = b;
    b = c;
arr[i] = c;
}
for(int ii=0;ii<val;ii++)
{
    cout << arr[ii] << endl;
}

    return 0;
}