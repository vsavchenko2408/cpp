/*Задача: Создание игры "Крестики-нолики"

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

class field
{
public:
	void set_step(int a, char b)
	{
		try {
			switch (a)
			{
			case 1:
				field[0][0] = b;
				break;
			case 2:
				field[0][1] = b;
				break;
			case 3:
				field[0][2] = b;
				break;
			case 4:
				field[1][0] = b;
				break;
			case 5:
				field[1][1] = b;
				break;
			case 6:
				field[1][2] = b;
				break;
			case 7:
				field[2][0] = b;
				break;
			case 8:
				field[2][1] = b;
				break;
			case 9:
				field[2][2] = b;
				break;
			default:
				cout << "Не верный ввод!" << endl;
				throw(a);
			}
		}
		catch(int)
		{
			cout << "Вы ввели " << a  << "!" << endl;
		}
	}
	void get_field()
	{
		for(int i=0;i<3;i++)
		{
			cout << endl;
			for(int j=0;j<3;j++)
			{
				cout << field[i][j];
			}
		}
		cout << endl;
	}
private:
	
	char field[3][3] = { '#','#','#','#','#','#','#','#','#' };
};
int main()
{
	//setlocale(LC_ALL, "RU");
field A;
A.set_step(2,'0');
A.set_step(5,'0');
A.set_step(9,'0');
A.set_step(13,'0');
A.get_field();

	return 0;
}
