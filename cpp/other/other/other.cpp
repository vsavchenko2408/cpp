#include <iostream>
#define  ui unsigned int

using namespace std;
void get_nod(ui* a, ui* b)
{
    cout << "Введите первое число НОД которого хотите вычислить: " << endl;
    cin >> *a;
    cout << "Введите второе число НОД которого хотите вычислить: " << endl;
    cin >> *b;
    if (*a > *b)
    {
        *a = *a - *b;
    }
    else{
        *a = *b - *a;
        }
}
void find_nod(ui* a, ui* b)
{
  
    if (*a % *b == 0)
    {
        cout << *b << endl;
    }   
    if (*b % *a == 0)
    {
        cout << *a << endl;
    }
    if (*a > *b)
        {
         cout << *a % *b << endl;
        }
    if (*a < *b)
    {
        cout << *b % *a << endl;
    }
}
int main()
{
    setlocale(LC_ALL, "RU");
    ui a,b = 0;
    get_nod(&a,&b);
    find_nod(&a, &b);

    return 0;
}

