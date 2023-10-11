/*
Задача: Создание игры "Крестики-нолики"

Необходимо создать простую текстовую версию игры "Крестики-нолики" для двух игроков.
Вам нужно создать класс, представляющий игровое поле, и методы для управления им.
Игроки будут ходить поочередно, и вы должны проверять, выиграл ли кто-то после каждого хода.

Дополнительные условия:

Определить, кто из игроков выиграл, или объявить ничью.
Проверить, является ли ход игрока допустимым (не занятое место).
После окончания игры предложить игрокам сыграть еще раз.
Эта задача позволит вам попрактиковаться в использовании классов,
методов, условий и циклов, а также в обработке пользовательского ввода.

Удачи в создании игры!
*/

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
    bool win()//функцию писал chatGPT вместо моей неудачной
    {
        // Проверка горизонтальных строк
        for (int i = 0; i < 3; i++)
        {
            if ((fld[i][0] == 'x' or fld[i][0] == 'o') &&
                (fld[i][1] == 'x' or fld[i][1] == 'o') &&
                (fld[i][2] == 'x' or fld[i][2] == 'o'))
            {
                return true;
            }
        }

        // Проверка вертикальных столбцов
        for (int j = 0; j < 3; j++)
        {
            if ((fld[0][j] == 'x' or fld[0][j] == 'o') &&
                (fld[1][j] == 'x' or fld[1][j] == 'o') &&
                (fld[2][j] == 'x' or fld[2][j] == 'o'))
            {
                return true;
            }
        }

        // Проверка диагоналей
        if ((fld[0][0] == 'x' or fld[0][0] == 'o') &&
            (fld[1][1] == 'x' or fld[1][1] == 'o') &&
            (fld[2][2] == 'x' or fld[2][2] == 'o'))
        {
            return true;
        }
        if ((fld[0][2] == 'x' or fld[0][2] == 'o') &&
            (fld[1][1] == 'x' or fld[1][1] == 'o') &&
            (fld[2][0] == 'x' or fld[2][0] == 'o'))
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
        A.set_step(a,b);
    }
    void get_field()
    {
        A.get_field();
    }
    bool win = A.win();
    
};
int main()
{
    setlocale(LC_ALL, "RU");

    hello();
    player A;
   
    do
    {
        A.set_step();
        A.get_field();
    } while (A.win);
   
    

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