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
		cout << "������� �����: " << endl;
		cin >> input;
		value += input;
		counter++;	
	}
	cout << "����� ��������� ����� = " << value << endl;
	cout << "������� �������� ��������� ����� = " << (float)value / counter << endl;
}