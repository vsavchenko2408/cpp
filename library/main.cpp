#include <iostream>
#include <string>
#include <vector>
using std::vector;
using std::cout;
using std::endl;
using std::string;
using std::cin;

class Book
{
public:
Book(string _name, string _author, int _year)
{
    name = _name;
    author = _author;
    year = _year;
}
Book()
{
    cout << "Enter name of book: " ;
    cin >> name;
    cout << "Enter author: " ;
    cin >> author;
    cout << "Enter year: ";
    cin >> year;
}
void show()
{
    cout << "Name: " << name << endl;
    cout << "Author: " << author << endl;
    cout << "Year: " << year << endl;
}
private:
string name;
string author;
int year;
};
int main()
{
vector<Book> library;
    Book book1;
library.push_back(book1);
 Book book2;
library.push_back(book2);
    Book book3;
library.push_back(book3);
 Book book4;
library.push_back(book4);
for(auto i=0;i<library.size();i++)
{
   library[i].show();
}


int a;
cin >> a;


    return 0;
}