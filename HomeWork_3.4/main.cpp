#include <iostream>
#include <random>
using std::cout;
using std::endl;

int main()
{
    std::random_device rd;
    int arr[100];
for(int i=0;i<100;i++)
{
    arr[i] = std::random_device{}();
}
for (auto x: arr)
{
    cout << x << endl;
}
system("pause");
    return 0;
}