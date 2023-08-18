/*
Создайте класс Person, представляющий человека. 
Класс должен содержать приватные поля для имени, даты рождения и адреса. 
Реализуйте методы для установки и получения значений полей, а также метод для вывода информации о человеке.
Добавьте подкласс Student, наследующий от Person, с дополнительными полями для номера студенческого билета,
курса и средней оценки.
Реализуйте методы для работы с этими полями.
*/
#include <iostream>
using namespace std;
class person
{
public:	
void show_info()
	{
		cout << "Имя :" << name << endl;
		cout << "Фамилия :" << surname << endl;
		cout << "Дата рождения :" << date << endl;
		cout << "Адрес : " << adress << endl;
	}
void set_info()
{
	cout << "Имя :" << name << endl;
	cin >> name;
	cout << "Фамилия :" << surname << endl;
	cin >> surname;
	cout << "Дата рождения :" << date << endl;
	cin >> date;
	cout << "Адрес : " << adress << endl;
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
		cout << "Номер студенческого билета :" << ID << endl;
		cout << "Название курса :" << course << endl;
		cout << "Средний балл :" << grade << endl;
		
	}
	void set_infost()
	{
		cout << "Введите номер студенческого билета :" << endl;
		cin >> ID;
		cout << "Введите название курса :" <<endl;
		cin >> course;
		cout << "Введите средний балл :" << endl;
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