
#include <iostream>
#include <conio.h>
using std::cout;
using std::endl;
using std::cin;
int main()
{
    char step = ' ';
    int x = 0;
    int y = 0;
    cout << "Enter for exit " << endl;
    while (step != '\r')
    {
        cout << "Your coordinates : " << x << ", " << y << endl;
        cout << "Input side (w.a.s.d) " << endl;
        step = _getche();

        switch (step)
        {
        case 'w':
            y++;
            break;
        case 's':
            y--;
            break;
        case 'a':
            x--;
            break;
        case 'd':
            x++;
            break;
        case '\r':
            break;
        default:
            cout << "Error input, try again " << endl;
        }
        system("CLS");
    }
    return 0;
}
