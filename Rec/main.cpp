#include <iostream>
using namespace std;

int foo(int i)//рекурсивная функция
{
    i++;
    if(i<=5)
    {
        cout << "Enter recursive foo " << i << endl;
        foo(i);// Вход в рекурсивную функцию
        cout << "Exit recursive foo :" << i << endl; //выход из рекурсии
    }  
    return i; 
}
int main()
{
int i = 0;  
int b = foo(i);
cout << "B = " << b << endl;
    return 0;
}