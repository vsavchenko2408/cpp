#include <iostream>
#include <vector>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RU");
	vector<int> myvec;
	cout << "Введите целые числа(для завершения ввода введите 0): " << endl;
	int inpt=0;
	do
	{
		cin >> inpt;
		if (inpt == 0)
		{
			break;
		}
		else 
			myvec.push_back(inpt);
	} while (inpt);
	int sum = 0;
	for (int i = 0; i < myvec.size(); i++)
	{
		sum += myvec[i];
	}
	cout << "Сумма введенных чисел : " << sum << endl;
	cout << "Среднее значение чисел : " << (double)sum / myvec.size() << endl;
	return 0;
}