#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <iomanip>

using namespace std;

class Transaction {
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

    Transaction(string type, double amount) : type(type), amount(amount) {
        time_t now = time(0);
        char buffer[26];
        ctime_s(buffer, sizeof(buffer), &now);
        transactionTime = buffer;
    }

    void displayTransaction() const {
        cout << setw(25) << left << transactionTime;
        cout << setw(15) << left << type;
        cout << "$" << amount << endl;
    }


private:
    string transactionTime;
    string type;
    double amount;
};

class BankAccount {
public:
    BankAccount(string ownerName, string accountNumber) : ownerName(ownerName), accountNumber(accountNumber), balance(0.0) {}

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            Transaction transaction("Deposit", amount);
            transactions.push_back(transaction);
            cout << "Deposited $" << amount << " into account." << endl;
        }
        else {
            cout << "Invalid deposit amount." << endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            Transaction transaction("Withdrawal", amount);
            transactions.push_back(transaction);
            cout << "Withdrawn $" << amount << " from account." << endl;
        }
        else if (amount <= 0) {
            cout << "Invalid withdrawal amount." << endl;
        }
        else {
            cout << "Insufficient funds." << endl;
        }
    }

    void printTransactions() const {
        cout << "Transaction History for Account: " << accountNumber << endl;
        cout << setw(25) << left << "Date/Time" << setw(15) << left << "Type" << "Amount" << endl;
        cout << setfill('-') << setw(45) << "" << setfill(' ') << endl;

        for (const Transaction& transaction : transactions) {
            transaction.displayTransaction();
        }

        cout << setfill('-') << setw(45) << "" << setfill(' ') << endl;
        cout << "Current Balance: $" << balance << endl;
    }

private:

	bool trans;


    string ownerName;
    string accountNumber;
    double balance;
    vector<Transaction> transactions;

};

int main() {
    BankAccount account("John Doe", "1234567890");

int main()
{
	setlocale(LC_ALL, "RU");
	banacc a;
	a.deposit();
	a.show();
	a.withdraw();
	a.withdraw();
    account.deposit(1000.0);
    account.withdraw(500.0);
    account.deposit(200.0);
    account.printTransactions();

    return 0;
}