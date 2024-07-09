//Напишите программу которая подсчитывает кол-во четных и не четных числе в том диапазоне который указал пользователь


#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RU");
	int min = 0;
	int max = 0;

	cout << "Введите первое число(оно должно быть меньше второго) : " << endl;
	cin >> min;
	cout << "Введите второе число :" << endl;
	cin >> max;
	int oddcnt = 0;
	int evencnt = 0;
	while (max>=min)
	{
		if (max % 2 == 0)
		{
			evencnt++;
		}
		else { oddcnt++; }
		max--;
	}
	cout << " Четных чисел : " << evencnt << endl;
	cout << " Нечетных чисел : " << oddcnt << endl;
}

