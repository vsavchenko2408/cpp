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
		cout << "Введите название книги : ";
		cin >> name;
		cout << "Введите Автора : ";
		cin >> autor;
		cout << "Введите жанр : ";
		cin >> genre;
		cout << "Введите год издания : ";
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
		cout << "Название : " << name << endl;
		cout << "Автор : " << autor << endl;
		cout << "Жанр : " << genre << endl;
		cout << "Год издания : " << year << endl;
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