#include <iostream>
//#include <conio.h>
#include <cstdlib>

using namespace std;

int main()
{
    char step;
    const unsigned int ROWS = 20;
    const unsigned int COLS = 20;
    char field[COLS][ROWS];

    // Инициализация поля
    for (int i = 0; i < COLS; ++i)
    {
        for (int j = 0; j < ROWS; ++j)
        {
            // Устанавливаем стены
            if (i == 0 || i == COLS - 1 || j == 0 || j == ROWS - 1)
                field[i][j] = '#';
            else
                field[i][j] = ' ';
        }
    }

    int x = 10; // начальные координаты
    int y = 10;

    cout << "Enter for exit " << endl;

    while (step != '\r')
    {
        system("cls"); // очищаем консоль

        // Выводим поле
        for (int i = 0; i < COLS; ++i)
        {
            for (int j = 0; j < ROWS; ++j)
            {
                cout << field[i][j] << ' ';
            }
            cout << endl;
        }

        cout << "Your coordinates: " << x << ", " << y << endl;
        cout << "Input side (w.a.s.d) " << endl;
        step = getche();

        // сохраняем текущие координаты
        int prevX = x;
        int prevY = y;

        switch (step)
        {
        case 'd':
            if (y < ROWS - 1)
                y++;
            break;
        case 'a':
            if (y > 0)
                y--;
            break;
        case 'w':
            if (x > 0)
                x--;
            break;
        case 's':
            if (x < COLS - 1)
                x++;
            break;
        case '\r':
            exit(0);
        default:
            cout << "Error input, try again " << endl;
        }

        // очищаем предыдущую позицию
        field[prevX][prevY] = ' ';
        // устанавливаем новую позицию
        field[x][y] = '*';
    }

    return 0;
}