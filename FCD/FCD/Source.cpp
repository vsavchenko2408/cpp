#include <iostream>
using std::cout;
using std::cin;
using std::endl;
int foo(int a, int b)
{
	while (a != 0 && b != 0)
	{
		if (a > b)
		{
			a = a % b;
		}
		else
			b = b % a;
	}
	return a + b;
}
int main()
{
	setlocale(LC_ALL, "RU");
	int a = 0;
	int b = 0;
	int c;
	cout << "������� ������ ����� :";
	cin >> a;
	cout << "������� ������ ����� :";
	cin >> b;
	c = foo(a, b);

	cout << "���������� ����� �������� : " << c << endl;
}