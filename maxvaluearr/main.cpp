#include <iostream>
#include <random>
using std::cout;
using std::cin;
using std::endl;

int main()
{
srand(time(NULL));
cout << "Input array size: " ;
int arrsize;
cin >> arrsize;
int arr[arrsize];
for(int i=0;i<arrsize;i++)
{
    arr[i] = rand();
}
int maxval=arr[arrsize-1];
for(int ii=0;ii<arrsize;ii++)
{
    cout << arr[ii] << " " ;
if(arr[ii]> maxval) maxval = arr[ii];
}
cout << endl;
cout << "Max value in array = " << maxval << endl;

    return 0;
}