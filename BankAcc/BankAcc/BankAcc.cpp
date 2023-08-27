/*
Задание 4:
Создайте класс BankAccount (банковский счет) с приватными полями для имени владельца, 
номера счета и баланса. 
Реализуйте методы для пополнения и снятия денег со счета,
а также метод для вывода информации о счете.
*/
#include <iostream>
typedef unsigned int ui;
using namespace std;
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
	
	void display()
	{
		cout << "------------------------------------------------------------------" << endl;
		cout << "---" << "Name: " << name << endl;
		cout << "---" << "ID account: " << id_acc << endl;
		cout << "---" << "Amount money: " << money;
		cout << "------------------------------------------------------------------" << endl;
	}
	void deposit()
	{
		ui add=0;
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



int main()
{
		banacc a;
		a.deposit();
		a.display();
		a.withdraw();
		a.display();
		banacc b;
		b.deposit();
		b.display();
		b.withdraw();
		b.display();
		
	return 0;
}