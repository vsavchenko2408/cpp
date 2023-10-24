#include <iostream>
#include <vector>

int main()
{
	setlocale(LC_ALL, "RU");
	std::vector<int> myvec;
	int temp;
	char ans;
	int min = 99999999999;
	do
	{
			std::cout << "Введите числа: " << std::endl;
			std::cin >> temp;
			if (temp < 0)
			{
				std::cout << "Вы ввели отрицательное число " << std::endl;
				std::cout << "Хотите продолжить ввод? y/n " << std::endl;
				std::cin >> ans;
				if(ans == 'y')
				{
					temp = NULL;
					continue;
				}
				else
				{
					break;
				}
			}
			myvec.push_back(temp);
			
	} while (temp > -1);
	for (auto i=myvec.begin();i!= myvec.end();i++)
	{
		if (min > *i)
		{
			min = *i;
		}		
	}
	std::cout << "Минимальное число в последовательности: " << min;
	return 0;
}