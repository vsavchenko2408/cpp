#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

class Book {
public:
    string title;
    string author;

    Book(string t, string a) : title(t), author(a) {}
};

class Library {
private:
    vector<Book> books;

public:
    void add_book(const Book& book) {
        books.push_back(book);
    }

    void display_books() {
        for (const Book& book : books) {
            cout << "Title: " << book.title << ", Author: " << book.author << endl;
        }
    }

    void save_to_file(const string& filename) {
        ofstream file(filename);
        if (file.is_open()) {
            for (const Book& book : books) {
                file << book.title << " " << book.author << endl;
            }
            file.close();
            cout << "Library saved to " << filename << endl;
        }
        else {
            cerr << "Error: Unable to open the file for writing." << endl;
        }
    }

    void load_from_file(const string& filename) {
        ifstream file(filename);
        if (file.is_open()) {
            string title, author;
            while (file >> title >> author) {
                Book book(title, author);
                add_book(book);
            }
            file.close();
            cout << "Library loaded from " << filename << endl;
        }
        else {
            cerr << "Error: Unable to open the file for reading." << endl;
        }
    }
};

int main() {
    setlocale(LC_ALL, "RU");
    Library my_library;

    string filename = "library.txt";

    cout << "1. Загрузить библиотеку из файла" << endl;
    cout << "2. Добавить книгу" << endl;
    cout << "3. Показать библиотеку" << endl;
    cout << "4. Сохранить библиотеку в файл" << endl;
    cout << "5. Выйти" << endl;

    int choice;
    do {
        cout << "Выберите действие (1-5): ";
        cin >> choice;

        switch (choice) {
        case 1: {
            my_library.load_from_file(filename);
            break;
        }
        case 2: {
            string title, author;
            cout << "Введите название книги: ";
            cin.ignore();
            getline(cin, title);
            cout << "Введите автора книги: ";
            getline(cin, author);
            Book book(title, author);
            my_library.add_book(book);
            break;
        }
        case 3: {
            my_library.display_books();
            break;
        }
        case 4: {
            my_library.save_to_file(filename);
            break;
        }
        case 5: {
            cout << "До свидания!" << endl;
            break;
        }
        default:
            cout << "Неверный выбор. Попробуйте еще раз." << endl;
        }
    } while (choice != 5);

    return 0;
}
