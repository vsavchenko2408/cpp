#include <iostream>
#include <vector>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RU");
	vector<int> myvec;
	cout << "������� ����� �����(��� ���������� ����� ������� 0): " << endl;
	int inpt=0;
	do
	{
		cin >> inpt;
		if (inpt == 0)
		{
			break;
		}
		else 
			myvec.push_back(inpt);
	} while (inpt);
	int sum = 0;
	for (int i = 0; i < myvec.size(); i++)
	{
		sum += myvec[i];
	}
	cout << "����� ��������� ����� : " << sum << endl;
	cout << "������� �������� ����� : " << (double)sum / myvec.size() << endl;
	return 0;
}