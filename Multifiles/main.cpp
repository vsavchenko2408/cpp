#include <iostream>
#include "foo().cpp"
using std::cout;
using std::endl;

void foo();

int main()
{
    cout << "Вызываем функцию " << endl;
    foo();
    return 0;
}