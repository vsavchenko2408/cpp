#include <iostream>
using std::cout;
using std::cin;
using std::endl;

class Animals
{
public:
Animals()
{
    cout << "Animals! "<< this << endl;
}

virtual void Say()
{
cout << "Animals!" << endl;
}


};

class Cat : public Animals
{
public:
Cat()
{
    cout << "Cat! " << this  << endl;
}
void Say() override
{
cout << "Meow! " << endl;
}

};


class Dog : public Animals
{
public:
Dog()
{
    cout << "Dog! "<< this  << endl;
}
void Say() override
{
cout << "Woof! " << endl;
}

};

int main()
{

Animals* an1 = new Cat;
an1->Say();

delete an1;
    return 0;
}