#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::cin;
using std::vector;
using std::string;

class book
{	
	public:
void created_book()
{
	cout << "Input name of the book: " << endl;
	cin >> name;
	cout << "Input Author: " << endl;
	cin >> author;
	cout << "Input year: " << endl;
	cin >> year;
}
void show_book()
{
	cout << "Name Book: " << "/t" << name << endl;
	cout << "Author: " << "/t" << author << endl;
	cout << "Year: " << "/t" << year << endl;
}
void del_book()
	{
		
		
	}

private:
	string name;
	string author;
	short int year;
};

class library
{
public:
	
private:

	

};


int main()
{
	//setlocale(LC_ALL, "RU");

book obj;
obj.created_book();
obj.show_book();


	return 0;
}