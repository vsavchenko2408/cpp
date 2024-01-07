#include <iostream>
#include <random>
using std::cout;
using std::endl;
using std::cin;
void myswap(int &a, int &b)
{
    int c = a;
    a=b;
    b=c;
}
void feelarr(int arr[], int N);
void showarr(int arr[], int N);
void sortarr(int arr[], int N);
void reversesortarr(int arr[], int N);
int main()
{
srand(time_t(NULL));
const int N =10;
int *arr = new int[N];
feelarr(arr, N);
showarr(arr, N);
sortarr(arr,N);
cout << "Array is Sorted: " << endl;
showarr(arr,N);
cout << "Reverse sorted: " << endl;
reversesortarr(arr, N);
showarr(arr, N);
delete[] arr;
    return 0;
}
void sortarr(int arr[], int N)
{
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        if(arr[i]<arr[j])
        {
            myswap(arr[i],arr[j]);    
        }
    }
}
void reversesortarr(int arr[], int N)
{
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        if(arr[i]>arr[j])
        {
            myswap(arr[i],arr[j]);    
        }
    }
}
void feelarr(int arr[], int N)
{
    for(int i=0;i<N;i++)
    {
        arr[i] = rand()%100;
    }
}
void showarr(int arr[], int N)
{
    for(int i=0;i<N;i++)
    {
        cout << arr[i] << " " ;
    }
    cout << endl;
}