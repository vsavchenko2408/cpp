#include <iostream>
using std::cout;
using std::endl;
using std::cin;
void logic()
{
	int a = 0;
	cout << "������� ����� :" << endl;
	cin >> a;
	cout << "������� ��������� ��� : " << a << endl;
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
		cout << endl << "������ ������� ��� ���� ������� ���������? (Y/N):? " << endl;
		cin >> retry;
	} while (retry == 'y');
	cout << "�� ��������!";
}