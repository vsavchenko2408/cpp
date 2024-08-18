#include <iostream>
using std::cout;
using std::endl;
using std::cin;

void fill_array(int *arr, const int *N);

void show_array(int *arr, const int *N);

////////////////////// 
int main()
{
const int *N = new int(5);
int *arr = new int[*N];

fill_array(arr, N);
show_array(arr, N);

arr = nullptr;
delete[] arr;
delete N;
    return 0;
}
////////////////////

void fill_array(int *arr, const int *N)
{
for(int i=0;i<(*N);++i)
{
	arr[i] = i+1;
}
}

void show_array(int *arr, const int *N)
{
for(int i=0;i<(*N);++i)
{
	cout << i << ": " << arr[i];
	cout << "\n";
}

}
