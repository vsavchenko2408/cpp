#include <iostream>
#include <random>
typedef unsigned int ui;
typedef short int si;
using namespace std;
ui player()
{
    ui choise;
    do
    {
        cout << "Введие код своего выбора: " << endl;
        cin >> choise;
        if (choise < 1 || choise>3)
        {
            cout << "\t\tОшибка ввода! " << endl << endl;
            
        }
    } while (choise < 1 || choise>3);
    
 return choise;
}
void hello()
{
    cout << "\t\tИгра камень-ножницы-бумага" << endl;
    cout << "-------------------------------------------------------------------------" << endl;
    cout << "Правила игры:" << endl;
    cout << "\tКамень это 1 " << endl;
    cout << "\tНожницы это 2" << endl;
    cout << "\tБумага это 3" << endl;
}
void game()
{
    si pl= player();
    si comp = (rand() % 2)+1;
    if (pl == comp)
    {
        cout << "Ничья!" << endl;
        game();
    }
    if (pl == 1 && comp == 2)
    {
        cout << "\t\tПоздравляем!!! " << endl;
        cout << "Вы победили(Камень бьет Ножницы) " << endl;
    }
    if (pl == 2 && comp == 3)
    {
        cout << "\t\tПоздравляем!!! " << endl;
        cout << "Вы победили(Ножницы режут Бумагу) " << endl;
    }
    if (pl == 3 && comp == 1)
    {
        cout << "\t\tПоздравляем!!! " << endl;
        cout << "Вы победили(Бумага оборачивает Камень) " << endl;
    }
    if (pl == 2 && comp == 1)
    {
        cout << "\t\tОчень жаль!!! " << endl;
        cout << "Вы проиграли(Ножницы ломаются о Камень) " << endl;
    }
    if (pl == 1 && comp == 3)
    {
        cout << "\t\tОчень жаль!!! " << endl;
        cout << "Вы проиграли(Камень оборачивается Бумагой) " << endl;
    }
    if (pl == 3 && comp == 2)
    {
        cout << "\t\tПоздравляем!!! " << endl;
        cout << "Вы проиграли(Бумага режется Ножницами) " << endl;
    }
}
int main()
{
    setlocale(LC_ALL, "RU");
    srand(time(NULL));

    hello();
    game();

    cout << endl << endl<<  "Для выхода введите любое число или цифру и нажмите Enter: " << endl;
    cout << "-------------------------------------------------------------------------" << endl;
    int i;
    cin >> i;
return 0;
}

