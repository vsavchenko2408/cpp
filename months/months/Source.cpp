#include <iostream>
int main()
{
	setlocale(LC_ALL, "RU");
	unsigned int month;
	std::cout << "¬ведите номер мес€ца(число от 1 до 12): " << std::endl;
	std::cin >> month;
	
		if (month == 12|| month == 1 || month == 2)
		{
			std::cout << "Ёто зимний мес€ц. " << std::endl;
		}
		if (month == 3 || month == 4 || month == 5)
		{
			std::cout << "Ёто весенний мес€ц. " << std::endl;
		}
		if (month == 6 || month == 7 || month == 8)
		{
			std::cout << "Ёто летний мес€ц. " << std::endl;
		}
		if (month == 9 || month == 10 || month == 11)
		{
			std::cout << "Ёто осенний мес€ц. " << std::endl;
		}
		if (month < 1 || month > 12)
		{
			std::cout << "“акого мес€ца не бывает! " << std::endl;
		}
	return 0;
}