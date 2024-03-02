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
Oper operator=(Oper& obj);//перегрузка оператора присваивания
void show();//метод вывода

private:
int x;
int y;
};

int main()
{

Oper a(5,4);
Oper b(1,3);
Oper c;
c = a; // присваивание объекта "а" объекту "в"
c.show(); // вывод результата

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
this->x + obj.x;
this->y + obj.y;
}

void Oper::show()
{
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;
}

Oper Oper::operator=(Oper& obj)
{
this->x = obj.x;
this->y = obj.y;
return obj;
}