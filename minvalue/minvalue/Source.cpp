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
			std::cout << "������� �����: " << std::endl;
			std::cin >> temp;
			if (temp < 0)
			{
				std::cout << "�� ����� ������������� ����� " << std::endl;
				std::cout << "������ ���������� ����? y/n " << std::endl;
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
	std::cout << "����������� ����� � ������������������: " << min;
	return 0;
}