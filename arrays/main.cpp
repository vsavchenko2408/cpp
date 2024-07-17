#include <iostream>
#include <random>
using std::cout;
using std::endl;

template<class T>
void fillarr(T& arr, int N)
{
    for(int i=0;i<N;i++)
    {
        arr[i] = rand()%999;
    }
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

int main()
{
srand(time_t(NULL));
const int N =5;
int arr[N];
fillarr(arr, N);
showarr(arr, N);


system("pause");
    return 0;
}