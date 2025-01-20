#include <iostream>
#include <random>
#include <time.h>
using std::cout;
using std::endl;

int main()
{
    srand(time(NULL));
    int MGNMBR = 0;
    int guess = 0;
    cout << "Hello! Guess the number. If you want to exit, put 0! " << endl;

    MGNMBR = rand() % 100;
    while (MGNMBR != guess)
    {
        cout << "Input your number: " << endl;
        std::cin >> guess;
        if (guess == MGNMBR)
        {
            cout << "You win! Number is: " << MGNMBR << endl;
            break;
        }
        else if (guess < MGNMBR)
        {
            cout << "Your number is less, try again: " << endl;
        }
        else if (guess > MGNMBR)
        {
            cout << "Your number is greater, try again: " << endl;
        }
        else if (guess == 0)
        {
            cout << "Goodbye!" << endl;
            exit(0);
        }
    }
}