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
Oper operator++(); //перегрузка оператора префиксного инкремента
Oper operator++(int); //перегрузка оператора постфиксного инкремента

friend std::ostream& operator<<(std::ostream& os,const Oper& obj)//перегрузка оператора вывода
{
os << "x: " << obj.x << ' ' << endl;
os << "y: " << obj.y << ' ' << endl;
return os;
}
/*
friend std::istream& operator>>(std::istream& is,const Oper& obj)//перегрузка оператора ввода
{
cout << "Input x: " << endl;
is >> obj.x ;
cout << "Input y: " << endl;
is >>  obj.y ;
return is;
}
*/
friend std::istream& operator>>(std::istream& is, Oper& obj)
{
    std::cout << "Input x: " << std::endl;
    is >> obj.x;
    std::cout << "Input y: " << std::endl;
    is >> obj.y;
    return is;
}



void show();//метод вывода

private:
int x;
int y;
};

int main()
{

Oper a(5,4);
//++a;
a.show();
a++;
a.show();

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
bool Oper::operator==(Oper& obj)
{
if(this->x == obj.x || this->y == obj.y)
{
     return  true;
}
else
    
{
    return false;
}
}

bool Oper::operator!=(Oper& obj)
{

if(this->x != obj.x || this->y != obj.y) 
{
    return  true;
}
else
{
     return false;
 }
}

Oper Oper::operator++()
{
this->x++;
this->y++;
return *this;
}

Oper Oper::operator++(int)
{
    Oper temp;
    temp = *this;
this->x++;
this->y++;


return temp;
}
