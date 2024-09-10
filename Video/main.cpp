#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::cin;
using std::string;

class Human
{
public:
Human()
{
    cout << "Default constructor without arguments" << this << endl;
age = 0;
name = " ";
}
Human(int _age, string _name) // default constructor with argument
{
   cout << "Default constructor with arguments"<< this << endl; 
age = _age;
name = _name;
}
void set_age(int _age)
{
    age = _age;
}
void set_name(string _name)
{
    name = _name;
}

void show_data()
{
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
}

string get_name()
{
    return name;
}
int get_age()
{
    return age;
}
~Human()
{
cout << "Destructor"<< this << endl;
}
private:
int age;
string name;

};

int main()
{
Human man(19, "Ivan");

Human woman(20, "Maria");

Human h;


    return 0;
}

