#include <iostream>
#include <random>
//#include <windows.h>
#include <algorithm>
using std::cout;
using std::cin;
using std::endl;

template<typename T>
T My_Swap(T& a, T& b);
void My_Sort(float arr[], const int N);
void fill_array(float arr[], const int N);
void show_array(const float arr[], const int N);
static int count = 0;
int main()
{
	setlocale(LC_ALL, "RU");
	srand(time(NULL));
	const int N = 5;
	float* arr = new float[N];//создание массива в динамической памяти
	fill_array(arr, N);//заполнение массива
	show_array(arr, N);//вывод массива
	cout << "Массив отсортирован!" << endl;
	My_Sort(arr, N); //сортировка массива
	show_array(arr, N);//вывод массива
	cout << "Количество операций при сортировке: " << count << endl;

	delete[] arr;
	return 0;
}


void fill_array(float arr[], const int N)
{
	for (int i = 0; i < N; i++)
	{
		arr[i] = rand() % 100;
	}
}
void show_array(const float arr[], const int N)
{
	for (int i = 0; i < N; i++)
	{
		cout << "Arr" << i+1 << ": = " << arr[i] << endl;
	}
}
template<typename T>
T My_Swap(T &a, T &b)
{
	T c = a;
	a = b;
	b = c;
	return a, b;
}
void My_Sort(float arr[], const int N)
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N-i-1; j++)
		{
			count++;
			if (arr[j] > arr[j+1])
			{
				std::swap(arr[j], arr[j+1]);
			}
		}
	}
}

