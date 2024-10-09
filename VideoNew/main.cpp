#include <iostream>
#include <algorithm>
#include <random>
using std::cout;
using std::endl;
using std::string;

bool cmp(int &a, int &b)
{
    return a>b;
}


void fillarray(int *arr, const int N)
{
    for (int i = 0; i < N; ++i)
    {
        arr[i] = rand() % 99;
    }
}

void showarr(int *arr, const int N)
{
    for (int i = 0; i < N; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    bool(*ptrcmp)(int &, int &) = cmp;
    const int SIZE = 50;
    int *arr = new int[SIZE];
    fillarray(arr, SIZE);
    showarr(arr, SIZE);
    std::sort(arr,arr+SIZE,ptrcmp);
    showarr(arr, SIZE);
    return 0;
}