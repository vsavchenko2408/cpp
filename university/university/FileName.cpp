/*
������: �������� ��������� ��� ����� ��������� � ������������.

�������� �������:

�������� ����� Student, �������������� ���������� � ��������.
���� ����� ������ ����� ��������� ���� ��� �����, �������, �������� � �������� �����.
�������� ����� University, ������� ����� ��������� ������ ���������.
��� �������� ������ ����������� ������������ ������.
������ ��� ��������:

� ������ Student �������� ������ ��� ��������� � ��������� �������� �����, �������, �������� � �������� �����.
� ������ University �������� ������ ��� ���������� �������� � ������,
�������� �������� �� ������ � ����������� ������ ���������.
������������� ������:

�������� ������ ������ University.
����������� ������ ������ ��� ���������� ���������, �������� ��������� � ������ ������ ��������� �� �����.
������ ����������: �� ������ ������� ������ University ��� ����� ��������� � ������������.
����������� ������ ��� ���������� ��������� � ������, �������� ��������� � ������ ������ ��������� �� �����.
*/

#include <iostream>
using namespace std;
class student
{
public:
	void set_info()
	{
		cout << "Enter name:" << endl;
		cin >> name;
		cout << "Enter surname:" << endl;
		cin >> surname;
		cout << "Enter age:" << endl;
		cin >> age;
		cout << "Enter Rating:" << endl;
		cin >> rate;
	}
	void get_info()
	{
		cout << name << " " << surname << endl;
		cout << age << " years." << endl;
		cout << rate << " average rating. " << endl;
	}
private:
	string name;
	string surname;
	unsigned int age;
	unsigned int rate;
};

class university
{



};
int main()
{
	student a;
	a.set_info();
	a.get_info();



	return 0;
}