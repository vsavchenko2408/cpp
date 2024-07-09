#include <iostream>
#include <random>
#include <time.h>

void mysort(int arr[],int N);
void fillarr(int arr[],int N);
void printarr(int arr[],int N);
/////////////////
int main()
{
srand(time(NULL));
const int N = 500;
int arr[N];
fillarr(arr, N);
/////////////////
printarr(arr,N);
//////////////////
mysort(arr, N);
printarr(arr,N);
    return 0;
}
/////////////////////////////////
void fillarr(int arr[],int N)
{
for(int i=0;i<N;i++)
{
    arr[i] = rand()%999;
}
}
void printarr(int arr[],int N)
{
for(int j=0;j<N;j++)
{
    std::cout << arr[j] <<  " " ;
if((j+1)%10 == 0) std::cout << std::endl;
}


}
void mysort(int arr[],int N)
{
for(int i=0;i<N;i++)
{
    for(int j=0;j<N;j++)
    {
        if(arr[j]>arr[i])
        {
            std::swap(arr[i], arr[j]);
        }
    }
}
std::cout << "Sorted! " << std::endl;
}

