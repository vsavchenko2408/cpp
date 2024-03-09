#include <iostream>
using std::cout;
using std::endl;

class Oper //класс оператор
{
public:
            //прототипы методов
Oper(){}//Конструктор по умолчанию
Oper(int _x, int _y);//конструктор с параметрами
void operator+(Oper& obj);//перегрузка оператора сложения
void operator-(Oper& obj);//перегрузка оператора вычитания
Oper operator=(Oper& obj);//перегрузка оператора присваивания
bool operator>(Oper& obj);//Перегрузка оператора больше
bool operator<(Oper& obj);//перегрузка оператора меньше


bool operator==(Oper& obj); //перегрузка оператора равно
bool operator!=(Oper& obj); //перегрузка оператора неравно


void show();//метод вывода

private:
int x;
int y;
};

int main()
{

Oper a(5,4);
Oper b(4,6);
bool t;
t = a > b; // присваивание объекта "а" объекту "в"
cout << t << endl;
//a.show(); // вывод результата

    return 0;
}

//тела методов
Oper::Oper(int _x, int _y)
{
    x = _x;
    y = _y;
}

void Oper::operator+(Oper& obj)
{
   if(this->x != obj.x && this->y != obj.y) 
   {
    this->x += obj.x;
    this->y += obj.y;
   }
}

void Oper::operator-(Oper& obj)
{
   if(this->x != obj.x && this->y != obj.y) 
   {
    this->x -= obj.x;
    this->y -= obj.y;
   }
}

bool Oper::operator>(Oper& obj)
{
    if(this->x > obj.x && this->y  > obj.y)
    {
        return true;
    }
    else
    return false;
}

bool Oper::operator<(Oper& obj)
{
    if(this->x < obj.x && this->y  < obj.y)
    {
        return true;
    }
    else
    return false;
}
void Oper::show()
{
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;
}

Oper Oper::operator=(Oper& obj)
{
    if(this->x != obj.x && this->y != obj.y)
    {
        this->x = obj.x;
        this->y = obj.y;
    }
return obj;
}