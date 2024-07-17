#include <iostream>
#include <random>
using std::cout;
using std::endl;
template<class T>
void swap(T& a, T& b);


template<class T>
void fillarr(T& arr, int N); //fill array random value

template <class T>
void showarr(T& arr, int N); //Display array

template <class T>
void sort(T& arr, int N)
{
for(int i=0;i<N;i++)
{
    for(int j=0;j < N;j++)
    {
        if(arr[i] < arr[j])
        {
          swap(arr[i], arr[j]);  
        }
    }
}


}
/////////////////////////////////////////////////////////////////////
int main()
{

const int N = 50;
float arr[N];
fillarr(arr, N);
showarr(arr, N);
sort(arr, N);
showarr(arr, N);

system("pause");
    return 0;
}
//////////////////////////////////////////////////////
template <class T>
void swap(T& a, T& b)
{
    T temp = a;
    a = b;
    b = temp; 
}

template <class T>
void showarr(T& arr, int N)
{
for(auto i: arr)
{
    cout << i << " ";
}
cout << endl;
}

template<class T>
void fillarr(T& arr, int N)
{
    srand(time_t(NULL));
    for(int i=0;i<N;i++)
    {
        arr[i] = rand()%999;
    }
}