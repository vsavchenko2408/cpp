
#include <iostream>
using namespace std;
#include <conio.h>
int main()
{
    setlocale(LC_ALL, "RU");
    char dir = 'a';
    int x = 10, y = 10;
    while (dir != '\r')
    {
        cout << "\nВаши координаты: " << x << ", " << y;
        cout << "\nВыберите направление (w, s, d, a): ";
        dir = _getche();
        switch (dir) 
        {
        case 'w': y--; break;
        case 's': y++; break; 
        case 'd': x++; break; 
        case 'a': x--; break; 
        case '\r': cout << "Выход...\n"; break; 
        default: cout << "Попробуйте еще\n";
        } 
        system("CLS");
    } 
    return 0;
}
