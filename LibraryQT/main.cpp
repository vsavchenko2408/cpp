#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::cin;

class Book
{
    std::string name;
    std::string author;
    int year;
public:
    Book()
    {
        name = "empty";
        author = "empty";
        year = 0;
    }
    Book(std::string name, std::string author, int year)
    {
        this->name = name;
        this->author = author;
        this->year = year;
    }
    Book(const Book& obj)
    {
        this->name = obj.name;
        this->author = obj.author;
        this->year = obj.year;
    }
    void showBookInfo()
    {
        cout << name << endl;
        cout << author << endl;
        cout << year << endl;
    }
};



int main()
{
    std::vector<Book> library;
    library.emplace_back("LOTR","Tolkien",1957);
    library.emplace_back("Master and Margarita","Bulgakov",1920);
    for(auto x: library)
    {
        x.showBookInfo();
    }
    return 0;
}
