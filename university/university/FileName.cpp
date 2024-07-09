/*
Задача: Создайте программу для учета студентов в университете.

Создание классов:

Создайте класс Student, представляющий информацию о студенте.
Этот класс должен иметь приватные поля для имени, фамилии, возраста и среднего балла.
Создайте класс University, который будет содержать список студентов.
Для хранения списка используйте динамический массив.
Методы для операций:

В классе Student создайте методы для установки и получения значений имени, фамилии, возраста и среднего балла.
В классе University создайте методы для добавления студента в список,
удаления студента из списка и отображения списка студентов.
Использование класса:

Создайте объект класса University.
Используйте методы класса для добавления студентов, удаления студентов и вывода списка студентов на экран.
Пример применения: Вы можете создать объект University для учета студентов в университете.
Используйте методы для добавления студентов в список, удаления студентов и вывода списка студентов на экран.
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