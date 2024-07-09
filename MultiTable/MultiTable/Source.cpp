#include <iostream>
using std::cout;
using std::endl;
using std::cin;
void logic()
{
	int a = 0;
	cout << "Введите число :" << endl;
	cin >> a;
	cout << "Таблица умножения для : " << a << endl;
	for (int i = 1; i <= 10; i++)
	{
		cout << a << " * " << i << " = " << a * i << endl;
	}
}
int main()
{
	setlocale(LC_ALL, "RU");
	char retry;
	do
	{
		logic();
		cout << endl << "Хотите создать еще одну таблицу умножения? (Y/N):? " << endl;
		cin >> retry;
	} while (retry == 'y');
	cout << "До свидания!";
}