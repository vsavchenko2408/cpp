#include <iostream>
using std::string;
using std::cout;
using std::cin;
using std::endl;
class employee
{
public:
	employee()
	{

	}
	employee(string c_name,string c_surname,unsigned short c_age,string c_position,unsigned int c_salary)
	{
		name = c_name;
		surname = c_surname;
		age = c_age;
		position = c_position;
		salary = c_salary;
	}
	void set_name(string c_name)
	{
		name = c_name;
	}
	void set_surname(string c_surname)
	{
		surname = c_surname;
	}
	void set_age(unsigned short c_age)
	{
		age = c_age;
	}
	void set_position(string c_position)
	{
		position = c_position;
	}
	void set_salary(unsigned int c_salary)
	{
		salary = c_salary;
	}
	void set_info()
	{
		cout << "Введите имя : ";
		cin >> name;
		cout << "Введите фамилию : ";
		cin >> surname;
		cout << "Введите возраст : ";
		cin >> age;
		cout << "Введите должность : ";
		cin >> position;
		cout << "Введите размер зароботной платы : ";
		cin >> salary;
	}
	void get_info()
	{
		cout << "Name " << name << endl;
		cout << "Surname " << surname << endl;
		cout << "Age " << age << endl;
		cout << "Position " << position << endl;
		cout << "Salary " << salary << endl;
	}
private:
	string name;
	string surname;
	unsigned short int age;
	string position;
	unsigned int salary;
};

int main()
{
	setlocale(LC_ALL, "RU");
	employee emp1("Иван", "Ванков", 30, "Инженер", 1500);
	emp1.get_info();
	cout << "#########################################" << endl;

	employee emp2;
	emp2.set_name("Василий");
	emp2.set_surname("Карпенко");
	emp2.set_age(35);
	emp2.set_position("Уборщик");
	emp2.set_salary(400);
	emp2.get_info();

}
