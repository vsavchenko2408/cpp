#include <iostream>
#include <array>
#include <random>
#include <algorithm>
using namespace std;

int main()
{
srand(time(NULL));
array<int, 16> arr;
for(int j=0;j<arr.size();j++)
{
arr[j] = rand()%100;
}
for(int i: arr)
{
    cout << i << endl;
}
cout << "sorted " << endl;
sort(arr.begin(), arr.end());

for(int i: arr)
{
    cout << i << endl;
}
    return 0;
}