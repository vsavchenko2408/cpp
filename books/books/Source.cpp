#include <iostream>
#include <list>
#include <string>
#include <fstream>


using namespace std;

class book
{
public:
	book()
	{

	}
	book()
	{
		cout << "Введите название книги: ";
		cin >> name;
		cout << "Введите имя автора: ";
		cin >> author;
		cout << "Введите год издания:";
		cin >> year;
	}
	~book()
	{
		cout << "Книга удалена!" << endl;
	}
private:
	string name;
	string author;
	unsigned int year;
};

class library
{
public:
	void add_book(book)
	{

	}
	void remove_book(book)
	{

	}
	//void find_book(author)
	
	//void find_book(year)

	void list_book()
	{

	}
private:

	list<string> books;

};

int main()
{
	setlocale(LC_ALL, "RU");
	ofstream out;
	book first;
	out.open("Library.txt");
	if (!out.is_open())
	{
		cout << "Ошибка открытия файла!" << endl;
	}
	else
	{
		out.write((char*)&first,sizeof(book));
		cout << "Запись в файл успешна. " << endl;
	}

	out.close();
	





}