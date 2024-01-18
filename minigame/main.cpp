// adswitch.cpp
// приключенческая игра с использованием switch
#include <iostream>
using namespace std;
#include <conio.h> // для getche()
int main()
{
    char dir = 'a';
int x = 10, y = 10;
while(dir != '\r')
{
cout << "\nВаши координаты: " << x << ", " << y;
cout << "\nВыберите направление (w, s, d, a): ";
dir = getche(); // ввод переменной
switch(dir) // switch c переменнной dir
{
case 'w': y--; break; // движение на север
case 's': y++; break; // движение на юг
case 'd': x++; break; // движение на восток
case 'a': x--; break; // движение на запад
case '\r': cout << "Выход...\n"; break; // нажатие Enter
default: cout << "Попробуйте еще\n"; // нажатие других клавиш
} // конец switch
} // конец while
return 0;
}