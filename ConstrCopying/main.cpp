#include <iostream>
using std::cout;
using std::endl;
static int count = 0;//счетчик объектов
class MyClass // Создание класса
{
public:
MyClass(int a)//Конструктор с одним параметров
{
    ++count;
    cout << "Constructor one arg " << this << endl;
    cout << "Count: " << count<< endl;
*ptr = a;
}
MyClass()//конструктор по умолчанию
{
    ++count;
    cout << "Constructor default " << this << endl;
    cout << "Count: " << count << endl;
}
MyClass(const MyClass &obj)//конструктор копирования
{
    ++count;
    cout << "Constructor Copying " << this << endl;
    int* ptr = new int;//выделение памяти под новый объект
    this->ptr = ptr;
    cout << "Count: " << count << endl;
}
~MyClass()//деструктор
{
    delete ptr;//освобождение динамической памяти
    --count;
    cout << "Destructor "<< this  << endl;
    cout << "Count: " << count << endl;
}
private:
int* ptr = new int;//выделение памяти для переменной
};
int main()
{
MyClass a(12);
MyClass b(a);
cout << "End program" << endl;
cout << "Count: " << count << endl;
    return 0;
}