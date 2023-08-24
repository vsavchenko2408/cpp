/*
Задание 4:
Создайте программу для учета библиотечных книг. Реализуйте классы Book и Library.
Класс Book должен содержать информацию о названии, авторе и годе издания книги.
Класс Library должен содержать список книг и методы для добавления, удаления и поиска книг в библиотеке.
*/
#include <iostream>
using namespace std;
class library
{
public:
	
private:

};

class book
{
	friend class library;
public:
	book()
	{
		cout << "Введите название книги: " << endl;
		cin >> name;
		cout << "Введите автора книги: " << endl;
		cin >> autor;
		cout << "Введите год издания книги: " << endl;
		cin >> year;
	}
	void del_book()
	{
		
		
	}

private:
	string name;
	string autor;
	short int year;
};
int main()
{
	setlocale(LC_ALL, "RU");




	return 0;
}