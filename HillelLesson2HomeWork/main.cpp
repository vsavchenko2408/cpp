#include <iostream>
using std::cout;
using std::endl;
static unsigned int cntptr = 0;//лічильник

template<class T>
class SmartPointer
{
public:


SmartPointer(T &ptr)//конструктор копіювання
{
    cntptr++;
this->ptr = ptr;
}

SmartPointer()//конструктор за замовчуванням
{
    cntptr++;

}
SmartPointer operator=(T &obj)//перегрузка оператора присвоєння
{
    cntptr++;
    *this->ptr = obj;
    return *this;
}

SmartPointer operator*(T &obj)//перегрузка оператора розіменування
{
    return *this;
}
friend std::ostream& operator<<(std::ostream& os,const SmartPointer& obj)//перегрузка оператора <<
{
os  << *obj.ptr;

return os;
}
~SmartPointer() //деструктор
{
    cntptr--;
    if(cntptr == 0) delete this->ptr;
}

private:
T* ptr = new T;
};


int main()
{
int a = 50;
SmartPointer<int> sm ;
sm = a;
SmartPointer<int> sm1 = sm;
cout << sm << endl;
sm.~SmartPointer();
cout << cntptr;
    return 0;
}