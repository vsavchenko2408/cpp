#include <iostream>
int main()
{
	setlocale(LC_ALL, "RU");
	unsigned int month;
	std::cout << "������� ����� ������(����� �� 1 �� 12): " << std::endl;
	std::cin >> month;
	
		if (month == 12|| month == 1 || month == 2)
		{
			std::cout << "��� ������ �����. " << std::endl;
		}
		if (month == 3 || month == 4 || month == 5)
		{
			std::cout << "��� �������� �����. " << std::endl;
		}
		if (month == 6 || month == 7 || month == 8)
		{
			std::cout << "��� ������ �����. " << std::endl;
		}
		if (month == 9 || month == 10 || month == 11)
		{
			std::cout << "��� ������� �����. " << std::endl;
		}
		if (month < 1 || month > 12)
		{
			std::cout << "������ ������ �� ������! " << std::endl;
		}
	return 0;
}