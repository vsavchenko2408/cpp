#include <iostream>
using namespace std;



int main()
{
	setlocale(LC_ALL,"RU");
	double sum = 0;
	
	int curr;
	cout << "������� ����� � ��������: " << endl;
	cin >> sum;
	try {
		cout << "�������� ������� ������ (1 - ����, 2 - ����� ����������, 3 - ����):" << endl;
		cin >> curr;
		if (curr != 1 && curr != 2 && curr != 3)
			throw curr;
		}
	catch(int)
		{
			cout << "�� ������ ����! " << endl;
		}
	switch(curr)
	{
	case 1:
		cout << "��������� �����������: " << sum * 0.9436;
		break;
	case 2:
		cout << "��������� �����������: " << sum * 0.8139;
		break;
	case 3:
		cout << "��������� �����������: " << sum * 148.9580;
		break;
	}


	return 0;
}