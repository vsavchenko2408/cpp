#include <iostream>
using std::cout;
using std::endl;
using std::string;
class Animals
{
public:
void SetVoice(string voice)
{
    this->voice = voice;
}
string Say()
{
    return voice;
}
private:
string voice;
};


class Cat : public Animals
{
public:
bool vibrice;

};



class Dog : public Animals
{
    public:
string tail;
};

int main()
{
    Cat cat;
    cat.SetVoice("meow");
    cat.vibrice = 20;
    

    return 0;
}