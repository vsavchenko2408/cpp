#include <iostream>
using namespace std;
void hello();
class player;
class field
{
public:

    void set_step(int a, char b)
    {

        try {
            switch (a)
            {
            case 1:
                fld[0][0] = b;
                break;
            case 2:
                fld[0][1] = b;
                break;
            case 3:
                fld[0][2] = b;
                break;
            case 4:
                fld[1][0] = b;
                break;
            case 5:
                fld[1][1] = b;
                break;
            case 6:
                fld[1][2] = b;
                break;
            case 7:
                fld[2][0] = b;
                break;
            case 8:
                fld[2][1] = b;
                break;
            case 9:
                fld[2][2] = b;
                break;
            default:
                cout << "Не верный ввод!" << endl;
                throw(a);
            }
        }
        catch (int)
        {
            cout << "Вы ввели " << a << "!" << endl;
        }
    }
    void get_field()
    {
        for (int i = 0; i < 3; i++)
        {
            cout << endl;
            for (int j = 0; j < 3; j++)
            {
                cout << fld[i][j] << " ";
            }
        }
        cout << endl;
    }
    bool check_win()
    {
        // Проверка горизонтальных строк
        for (int i = 0; i < 3; i++)
        {
            if (fld[i][0] == fld[i][1] && fld[i][1] == fld[i][2] && fld[i][0] != ' ')
            {
                return true;
            }
        }

        // Проверка вертикальных столбцов
        for (int j = 0; j < 3; j++)
        {
            if (fld[0][j] == fld[1][j] && fld[1][j] == fld[2][j] && fld[0][j] != ' ')
            {
                return true;
            }
        }

        // Проверка диагоналей
        if (fld[0][0] == fld[1][1] && fld[1][1] == fld[2][2] && fld[0][0] != ' ')
        {
            return true;
        }
        if (fld[0][2] == fld[1][1] && fld[1][1] == fld[2][0] && fld[0][2] != ' ')
        {
            return true;
        }

        // Если не найдено ни одной выигрышной комбинации, возвращаем false
        return false;
    }

private:

    char fld[3][3] = { '#','#','#','#','#','#','#','#','#' };
};


class player
{
public:
    field A;
    void set_step()
    {
        int a;
        char b;
        cout << "Введите номер клетки и символ" << endl;
        cin >> a;
        cin >> b;
        A.set_step(a, b);
    }
    void get_field()
    {
        A.get_field();
    }
    bool win = A.check_win();

};
int main()
{
    setlocale(LC_ALL, "RU");

    hello();
    player A;

    while (true) // Бесконечный цикл
    {
        A.set_step();
        A.get_field();

        if (A.win)
        {
            cout << "Победил игрок!" << endl;
            break;
        }
    }


    return 0;
}

void hello()
{
    cout << "\t\tИгра крестики-нолики " << endl;
    cout << "Правила игры:" << endl;
    cout << "Игрок А играет символом О" << endl;
    cout << "Игрок B играет символом X" << endl;
    cout << "При ходе нужно ввести символ О или Х " << endl;
    cout << "и ввести номер ячейки куда хотите поставить символ от 1 до 9" << endl;
}