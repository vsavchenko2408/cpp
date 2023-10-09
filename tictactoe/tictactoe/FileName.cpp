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
   // friend class player;
private:

    char fld[3][3] = { '#','#','#','#','#','#','#','#','#' };
};
class player
{
    friend void field::set_step(int a, char b);
};
int main()
{
    setlocale(LC_ALL, "RU");
    field game;
    hello();
    player A;
    player B;
    
    A.set_step(2, '0');
    game.get_field();
    B.set_step(5, '0');
    game.get_field();
    A.set_step(9, '0');
    game.get_field();
    A.set_step(13, '0');
    game.get_field();

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