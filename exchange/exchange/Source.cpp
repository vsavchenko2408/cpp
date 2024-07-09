#include <iostream>
using namespace std;



int main()
{
	setlocale(LC_ALL,"RU");
	double sum = 0;
	
	int curr;
	cout << "Введите сумму в долларах: " << endl;
	cin >> sum;
	try {
		cout << "Выберите целевую валюту (1 - евро, 2 - фунты стерлингов, 3 - иены):" << endl;
		cin >> curr;
		if (curr != 1 && curr != 2 && curr != 3)
			throw curr;
		}
	catch(int)
		{
			cout << "Не верный ввод! " << endl;
		}
	switch(curr)
	{
	case 1:
		cout << "Результат конвертации: " << sum * 0.9436;
		break;
	case 2:
		cout << "Результат конвертации: " << sum * 0.8139;
		break;
	case 3:
		cout << "Результат конвертации: " << sum * 148.9580;
		break;
	}


	return 0;
}