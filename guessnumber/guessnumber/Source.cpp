#include <iostream>
#include <random>

void foo(int& value, int& guess)
{
	
	if( (value / 100) % 100 == (guess /100)%100 )
	{
		std::cout << "Сотни " << std::endl;
		std::cout << value << "  " << guess;
	}
	if ((value / 10) % 10 == (guess / 10) % 10)
	{
		std::cout << "Десятки " << std::endl;
		std::cout << value << "  " << guess;
	}
	if ((value / 1) % 1 == (guess / 1) % 1)
	{
		std::cout << "Единицы " << std::endl;
		std::cout << value << "  " << guess;
	}
	else
		return;
}
int main()
{
	setlocale(LC_ALL, "RU");
	srand(time(NULL));
	int value = rand()%999;
	int guess;
	
	std::cout << "Компьютер загадал трехзначное число. Вы должны его угадать." << std::endl;
	std::cout << "После очередного числа вам будет сообщено, сколько цифр угадано и сколько из них находится на своих местах." << std::endl;
	
	do
	{
		std::cout << "Ваш вариант: ";
		std::cin >> guess;
		foo(value, guess);
	

	} while (guess != value);


	std::cout << value;


	return 0;
}