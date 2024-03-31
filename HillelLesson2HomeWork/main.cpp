#include <iostream>
using std::cout;
using std::endl;


template<class T>
class SmartPointer
{
public:

SmartPointer(T* obj)//конструктор з параметрами
{
    ++cntptr;
    this->ptr = obj;
}
SmartPointer(const SmartPointer<T> &other) : ptr(other.ptr)//конструктор копіювання
{
    ++cntptr;
this->ptr = other.ptr;
}


SmartPointer<T>& operator=(const SmartPointer<T> &obj)//перегрузка оператора присвоєння
{
    ++cntptr;
    if(this == &obj){ return this;}
    *this->ptr = obj->ptr;
    return *this;
}

T& operator*()//перегрузка оператора розіменування
{
    return *ptr;
}
friend std::ostream& operator<<(std::ostream& os,const SmartPointer& obj)//перегрузка оператора <<
{
os  << obj.ptr;

return os;
}
~SmartPointer() //деструктор
{
    --cntptr;
    if(*cntptr == 0)
    { 
        delete this->ptr;
        delete this->cntptr;
    }
}

private:
unsigned int* cntptr = new unsigned int;
T* ptr = nullptr;
};


int main()
{
//int a = 50;
SmartPointer<int> sm(new int(5)) ;
//sm = a;
SmartPointer<int> sm1 = sm;
cout << sm << endl;
cout << "///////////////////////////" << endl;
cout << *sm << endl;
system("pause");
    return 0;
}