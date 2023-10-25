#include <iostream>

int main()
{
	setlocale(LC_ALL, "RU");
	unsigned int distance;
	float dist;
	float consumption;
	float fuel;
	double cost;
	std::cout << "Введите расстояние: " << std::endl;
	std::cin >> distance;

	std::cout << "Введите расход топлива(литр на 100км): " << std::endl;
	std::cin >> consumption;

	std::cout << "Введите стоимость литра топлива:" << std::endl;
	std::cin >> fuel;
	dist = (consumption / 100)* distance;
	std::cout << "Вы потратите " << dist*2  << " литров топлива. " << std::endl;
	cost = dist * fuel;
	std::cout << "И стоить будет " << cost*2 << " долларов." << std::endl;


	return 0;
}