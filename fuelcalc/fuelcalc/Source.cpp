#include <iostream>

int main()
{
	setlocale(LC_ALL, "RU");
	unsigned int distance;
	float dist;
	float consumption;
	float fuel;
	double cost;
	std::cout << "������� ����������: " << std::endl;
	std::cin >> distance;

	std::cout << "������� ������ �������(���� �� 100��): " << std::endl;
	std::cin >> consumption;

	std::cout << "������� ��������� ����� �������:" << std::endl;
	std::cin >> fuel;
	dist = (consumption / 100)* distance;
	std::cout << "�� ��������� " << dist*2  << " ������ �������. " << std::endl;
	cost = dist * fuel;
	std::cout << "� ������ ����� " << cost*2 << " ��������." << std::endl;


	return 0;
}