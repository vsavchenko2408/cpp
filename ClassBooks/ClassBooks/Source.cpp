#include <iostream>
using std::string;
using std::cout;
using std::cin;
using std::endl;
class book
{
public:
	book()
	{
		cout << "������� �������� ����� : ";
		cin >> name;
		cout << "������� ������ : ";
		cin >> autor;
		cout << "������� ���� : ";
		cin >> genre;
		cout << "������� ��� ������� : ";
		cin >> year;
	}
	void set_info(string ,string ,string , short int)
	{
		this->name = name;
		this->autor = autor;
		this->genre = genre;
		this->year = year;
	}
	void get_info()
	{
		cout << "�������� : " << name << endl;
		cout << "����� : " << autor << endl;
		cout << "���� : " << genre << endl;
		cout << "��� ������� : " << year << endl;
	}
private:
	string name;
	string autor;
	string genre;
	short int year;
};

int main()
{
	setlocale(LC_ALL, "RU");
	book a;
	book b;
	a.get_info();
	b.get_info();
}