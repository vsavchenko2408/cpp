#include <iostream>
using std::cout;
using std::endl;
using std::string;
static int count=0;
class Grandfather
{
public:
Grandfather()
{

    count++;
    cout << "Constructor GrandFather " << this << endl;
}

~Grandfather()
{
    count--;
    cout << "Destructor GrandFather " << this << endl;
}
protected:
string name;
unsigned short age;
};

class Father : protected Grandfather
{
public:
Father()
{
    count++;
    cout << "Constructor Father "<< this  << endl;
}
~Father()
{
     count--;
    cout << "Destructor Father " << this << endl;
}
protected:
bool car;
};

class Son : public Father
{
public:

Son()
{
    count++;
    cout << "Constructor Son " << this << endl;
}
Son(string name, unsigned short age, bool car)
{
this->name = name;
this->age = age;
this->car = car;
}
~Son()
{
     count--;
    cout << "Destructor Son "<< this  << endl;
}
private:
bool toys;
};

int main()
{
   
Son human;


cout << "Count: " << count << endl;

    return 0;
}