#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	setlocale(LC_ALL, "RU");
	int value = 0;
	int input = 0;;
	unsigned short counter = 0;
	while (input >= 0)
	{
		cout << "Введите число: " << endl;
		cin >> input;
		value += input;
		counter++;	
	}
	cout << "Сумма введенных чисел = " << value << endl;
	cout << "Среднее значение введенных чисел = " << (float)value / counter << endl;
}