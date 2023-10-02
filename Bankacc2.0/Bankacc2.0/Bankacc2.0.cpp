#include <iostream>
#include <windows.h>
#include <list>
typedef unsigned int ui;
using namespace std;
struct date
{

};
class banacc
{
public:
	banacc()
	{
		cout << "Введите ID :" << endl;
		cin >> id_acc;
		cout << " Введите имя : " << endl;
		cin >> name;

		money = 0;
	}

	void show()
	{
		cout << "------------------------------------------------------------------" << endl;
		cout << "---" << "Имя: " << name << endl;
		cout << "---" << "ID аккаунта: " << id_acc << endl;
		cout << "---" << "Количество денег: " << money;
		cout << "------------------------------------------------------------------" << endl;
	}
	void deposit()
	{
		ui add = 0;
		cout << "Введите сумму: " << endl;
		cin >> add;
		money += add;
	}
	void withdraw()
	{
		ui take = 0;
		cout << "Какую сумму вы хотите снять? : " << endl;
		cin >> take;
		if (money < take)
		{
			cout << "Недостаточно денег на счету!" << endl;
		}
		else
		{
			money -= take;
		}
	}
private:
	string name;
	ui id_acc;
	ui money;
};
class transaction
{
public:

private:
	bool trans;

};


int main()
{
	setlocale(LC_ALL, "RU");
	banacc a;
	a.deposit();
	a.show();
	a.withdraw();
	a.withdraw();
	
	

	return 0;
}