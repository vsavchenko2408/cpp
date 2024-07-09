#include <iostream>
#include <random>
using namespace std;
int* resizearr(int arr[], int SIZE)
{

int* narr = new int[SIZE*2];
for(int i = 0;i<SIZE;i++)
{
    narr[i] = arr[i];
}
delete[] arr;
return narr;
}
int main()
{
srand(time_t(NULL));

int SIZE = 10;
int* arr = new int[SIZE];

for(int i = 0;i<SIZE;i++)
{
    arr[i] = rand()%100;
    cout << arr[i] << " " ;
}

arr = resizearr(arr, SIZE);

for(int k=SIZE;k<SIZE*2;k++)
{
    arr[k] = rand()%100;
}
for(int j=0;j<SIZE*2;j++)
{
    cout << arr[j] << endl;
}


delete[] arr;

    return 0;
}
