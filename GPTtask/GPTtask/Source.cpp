#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	setlocale(LC_ALL, "RU");
	int arr[10];
	for (int i = 0; i < 10; i++)
	{
		 arr[i] = i+1;
	}
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}
	int arradd[5];
	/////////////
	cout << endl;
	for (int i = 0; i < 5; i++)
	{
		arradd[i] = i + 11;
	}
	for (int i = 0; i < 5; i++)
	{
		cout << arradd[i] << endl;
	}
	////
	int newarr[15];
	for (int i = 0; i < 10; i++)
	{
		newarr[i] = arr[i];
	}
	for (int i = 0; i < 5; i++)
	{
		newarr[i+10] = arradd[i];
	}
	///////
	
	for (int i = 0; i < 15; i++)
	{
	cout <<	newarr[i] <<endl;
	}

}