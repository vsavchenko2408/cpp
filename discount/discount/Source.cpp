#include <iostream>

void main()
{
	setlocale(LC_ALL, "RU");
	std::cout << "Введите сумму покупки: ";
	int value;
	double summ;
	std::cin >> value;
	std::cout << std::endl;
	if (value > 1000)
	{
		std::cout << "Вам предоставляется скидка в 5%" << std::endl;
		summ = (value / 100) * 5;
		std::cout << "Сумма с учетом скидки : " << value - summ;
	}
	if (value > 500)
	{
		std::cout << "Вам предоставляется скидка в 3%" << std::endl;
		summ = (value / 100) * 3;
		std::cout << "Сумма с учетом скидки : " <<  value - summ ;
		
	}
	else
		std::cout << "Извините, скидка при покупке от 500грн." << std::endl;
	
}