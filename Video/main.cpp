#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::cin;
using std::string;

class Car
{
    private:
bool motor;
    public:
Car(){} //конструктор за замовчуванням без аргументів


Car(bool _motor) //конструктор за замовчуванням з аргументами
{
    motor = _motor;
}
void start_engine(bool start)
{
    cout << "Мотор заведено!" << endl;
    motor = start;
}
void run()
{
    if(motor == true)
    {
    cout << "Ми поїхали!"<<endl;
    }
    else 
    {
        cout << "Ми не поїхали!"<<endl;
        cout << "Спочатку треба завести мотор!" << endl;
    }
}
};

int main()
{
    Car bmw;
    bmw.run();
    bmw.start_engine(true);
    bmw.run();
Car mercedes;
mercedes.start_engine(1);
mercedes.run();

    return 0;
}

