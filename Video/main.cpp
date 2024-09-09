#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::cin;
using std::string;

class Animals
{
    public:
unsigned int paws;
bool tale;
string name;

void show_info()
{
cout << "Name: " << name << endl;
cout << "Paws: " << paws << endl;
cout << "Tale: " << tale << endl;
}

};

int main()
{
   Animals cat;
   cat.name = "Murka";
   cat.paws = 4;
   cat.tale = true;
cat.show_info();


   Animals dog;
   dog.name = "Sharik";
   dog.paws = 4;
   dog.tale = false;
dog.show_info();


    return 0;
}

