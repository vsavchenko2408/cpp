#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::cin;
using std::string;

class Human
{
public:
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

private:
int age;
string name;

};

int main()
{
Human man;
man.set_age(19);
man.set_name("ivan");
man.show_data();

Human woman;
woman.set_age(20);
woman.set_name("Maria");
woman.set_age(21);
woman.show_data();

    return 0;
}

