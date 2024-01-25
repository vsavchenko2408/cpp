#include <iostream>
#include <random>
using std::cout;
using std::endl;
using std::cin;

template<typename T>
T my_swap(T& a, T& b);

void sort_arr(int arr[], const int N);
void fill_arr(int arr[], const int N);
void show_arr(const int arr[], const int N);
static int count = 0;
int main()
{
	srand(time(NULL));
	const int N = 100;
	int* arr = new int[N];//выделение памяти под массив и называем его arr
	fill_arr(arr, N);
	show_arr(arr, N);
	cout << "Start Sort" << endl;
	sort_arr(arr, N);
	show_arr(arr, N);

	delete[] arr;
	return 0;
}


void sort_arr(int arr[], const int N)
{
	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < N-i-1; ++j)
		{
			count++;
			cout << "Every cycle "<< count << endl;
			if (arr[j] > arr[j + 1])
			{
				my_swap(arr[j], arr[j + 1]);
			}
		}
	}
}

template<typename T>
T my_swap(T& a, T& b)
{
	T c = a;
	a = b;
	b = c;
	return a, b;
}

void fill_arr(int arr[], const int N)
{
	for (int i = 0; i < N; i++)
	{
		arr[i] = rand() % 1000;
	}
}
void show_arr(const int arr[], const int N)
{
	for (int i = 0; i < N; i++)
	{
		cout << arr[i] << " ";
	}
	cout << "\n";
}