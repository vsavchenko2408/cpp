#include <iostream>

void main()
{
	setlocale(LC_ALL, "RU");
	std::cout << "������� ����� �������: ";
	int value;
	double summ;
	std::cin >> value;
	std::cout << std::endl;
	if (value > 1000)
	{
		std::cout << "��� ��������������� ������ � 5%" << std::endl;
		summ = (value / 100) * 5;
		std::cout << "����� � ������ ������ : " << value - summ;
	}
	if (value > 500)
	{
		std::cout << "��� ��������������� ������ � 3%" << std::endl;
		summ = (value / 100) * 3;
		std::cout << "����� � ������ ������ : " <<  value - summ ;
		
	}
	else
		std::cout << "��������, ������ ��� ������� �� 500���." << std::endl;
	
}