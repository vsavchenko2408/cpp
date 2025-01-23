#include <iostream>
#include <algorithm>
#include <deque>
using std::cin;
using std::cout;
using std::deque;
using std::endl;
using std::string;

class Contact
{
private:
    string name;
    string number;
    string email;

public:
    Contact() : name("empty"), number("empty"), email("empty") {}
    Contact(string name) : Contact() {}
    Contact(string name, string number, string email) : name(name), number(number), email(email) {}
    bool operator==(const Contact &other) const
    {
        return name == other.name;
    }
    void show_info()
    {
        cout << "Name: " << '\t' << name << endl;
        cout << "Number: " << '\t' << number << endl;
        cout << "Email: " << '\t' << email << endl;
    }
    ~Contact() {}
};

bool search(string name, deque<Contact> dq)
{
    auto fnd = std::find(dq.begin(), dq.end(), name);
    if (fnd != dq.end())
    {
        return true;
    }
    else
    {
        return false;
    }
}
Contact createContact()
{
    string name;
    string number;
    string email;
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter number: ";
    cin >> number;
    cout << "Enter email: ";
    cin >> email;

    Contact ct(name, number, email);
    return ct;
}
Contact createContact(string name, string number, string email)
{
    Contact ct(name, number, email);
    return ct;
}
int main()
{
    deque<Contact> contacts;
    Contact Mira("Mira", "+380673398626", "empty");
    contacts.push_back(Mira);
    contacts.push_back(createContact());

    for (auto &i : contacts)
    {
        i.show_info();
    }
}