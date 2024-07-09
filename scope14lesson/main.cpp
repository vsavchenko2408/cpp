#include <iostream>
using std::cout;
using std::endl;


void foo2();
void foo1();

int main()
{  
    setlocale(LC_ALL,"ru");
    int x = 20;
    int y = 45;
foo2();

return 0;
}

void foo1()
{
    int x = 5;
    int y = 4;
}
void foo2()
{
    foo1();
    cout << "Вызвалась функция foo2()" << endl;
    system("pause");
}