/*
�������� ����� Person, �������������� ��������. 
����� ������ ��������� ��������� ���� ��� �����, ���� �������� � ������. 
���������� ������ ��� ��������� � ��������� �������� �����, � ����� ����� ��� ������ ���������� � ��������.
�������� �������� Student, ����������� �� Person, � ��������������� ������ ��� ������ ������������� ������,
����� � ������� ������.
���������� ������ ��� ������ � ����� ������.
*/
#include <iostream>
using namespace std;
class person
{
public:	
void show_info()
	{
		cout << "��� :" << name << endl;
		cout << "������� :" << surname << endl;
		cout << "���� �������� :" << date << endl;
		cout << "����� : " << adress << endl;
	}
void set_info()
{
	cout << "��� :" << name << endl;
	cin >> name;
	cout << "������� :" << surname << endl;
	cin >> surname;
	cout << "���� �������� :" << date << endl;
	cin >> date;
	cout << "����� : " << adress << endl;
	cin >> adress;
}
private:
	string name;
	string surname;
	string date;
	string adress;
};
class student : public person
{
public:
	void show_info()
	{
		cout << "����� ������������� ������ :" << ID << endl;
		cout << "�������� ����� :" << course << endl;
		cout << "������� ���� :" << grade << endl;
		
	}
	void set_infost()
	{
		cout << "������� ����� ������������� ������ :" << endl;
		cin >> ID;
		cout << "������� �������� ����� :" <<endl;
		cin >> course;
		cout << "������� ������� ���� :" << endl;
		cin >> grade;
		
	}
private:
	unsigned int ID;
	string course;
	float grade;
};
int main()
{
	setlocale(LC_ALL, "RU");
	person obj1;
	obj1.set_info();
	obj1.show_info();

	student obj2;
	obj2.set_info();
	obj2.set_infost();
	obj2.show_info();



	return 0;

}