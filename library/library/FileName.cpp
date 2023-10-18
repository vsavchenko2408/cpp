#include <iostream>
#include <string>
#include <vector>
using namespace std;


class library
{
public:
    class book
    {
    public:
        book()
        {
            book::set_info();
            cout << "Книга создана! " << endl;
        }
        void set_info()
            {
                cout << "Введите название книги: " << endl;
                cin >> name;
                cout << "Введите имя автора: " << endl;
                cin >> author;
                cout << "Введите год издания: " << endl;
                cin >> year;
            }
        
        void get_info()
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
   
    void get_vec()
    {
        for (auto const& element : vecbooks)
        {
            book obj;
             obj.get_info();
        }
    }

    void add_vec()
    {
        vecbooks.push_back(book());
    }
  
private:
    vector<book> vecbooks;
};


int main()
{
    setlocale(LC_ALL, "RU");
    cout << "Старт программы" << endl;
    library mylib;
    mylib.add_vec();
    mylib.add_vec();
    mylib.get_vec();
    cout << "Конец программы" << endl;

}