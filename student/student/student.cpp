/*
Задание 3:
Реализуйте класс Student, представляющий студента.
Класс должен иметь приватные поля для имени, фамилии, возраста и средней оценки студента.
Создайте методы для установки и получения значений полей,
а также метод для вывода информации о студенте на экран.
*/
#include <iostream>
using namespace std;
class students
{
public:
	void add_stdnt()
	{
		cout << "Введите имя студента :" << endl;
		cin >> name;
		cout << "Введите фамилию студента :" << endl;
		cin >> surname;
		cout << "Введите возраст студента :" << endl;
		cin >> age;
		cout << "Введите средний балл студента :" << endl;
		cin >> rate;
	}
	void show_info()
	{
		cout << "Имя :" << name << endl;
		cout << "Фамилия :" << surname << endl;
		cout << "Возраст :" << age << endl;
		cout << "Средний балл :" << rate << endl;
	}
private:
	string name;
	string surname;
	short int age;
	short int rate;
};

int main()
{
	setlocale(LC_ALL, "RU");
	students ivan;
	ivan.add_stdnt();
	ivan.show_info();

	students maria;
	maria.add_stdnt();
	maria.show_info();



	return 0;

}