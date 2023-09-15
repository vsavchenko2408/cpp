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
		cout << "Enter ID :" << endl;
		cin >> id_acc;
		cout << " Enter your name : " << endl;
		cin >> name;

		money = 0;
	}

	void show()
	{
		cout << "------------------------------------------------------------------" << endl;
		cout << "---" << "Name: " << name << endl;
		cout << "---" << "ID account: " << id_acc << endl;
		cout << "---" << "Amount money: " << money;
		cout << "------------------------------------------------------------------" << endl;
	}
	void deposit()
	{
		ui add = 0;
		cout << "Enter amount: " << endl;
		cin >> add;
		money += add;
	}
	void withdraw()
	{

		ui take = 0;
		cout << "How money you want take: " << endl;
		cin >> take;
		if (money < take)
		{
			cout << "Not enough money" << endl;
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

};


int main()
{
	SYSTEMTIME t;
	GetLocalTime(&t);
	cout << t.wDay << ".";
	cout << t.wMonth << ".";
	cout << t.wYear << "." << endl;
	
	

	return 0;
}