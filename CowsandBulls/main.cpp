#include <iostream>
#include <random>


bool guest_number(unsigned int guess)
{
    unsigned int value = 0;
    short bulls = 0;
    short cows = 0;
    std::cout << "Enter your number: " ;
    std::cin >> value;
    int f_guess = guess / 1000;
    int s_guess = (guess % 1000)/100;
    int t_guess = (guess % 100)/10;
    int fo_guess = guess % 10;
///////////////////////////
    int f_value = value / 1000;
    int s_value = (value % 1000)/100;
    int t_value = (value % 100)/10;
    int fo_value = value % 10;
////////////////////////////
    if(f_value == f_guess) {cows += 1;}
    if(s_value == s_guess) {cows += 1;}
    if(t_value == t_guess) {cows += 1;}
    if(fo_value == fo_guess) {cows += 1;}
////////////////////////////
    if(f_value == s_guess || f_value == t_guess || f_value == fo_guess) {bulls += 1;}
    if(s_value == f_guess || s_value == t_guess || s_value == fo_guess) {bulls += 1;}
    if(t_value == s_guess || t_value == f_guess || t_value == fo_guess) {bulls += 1;}
    if(fo_value == s_guess || fo_value == t_guess || fo_value == f_guess) {bulls += 1;}
    if(guess == value || cows == 4)
    {
        std::cout << "You win! " << std::endl;
        return true;
    }
    else
    {
        std::cout << "Cows: " << cows << std::endl;
        std::cout << "Bulls: " << bulls << std::endl;
        return false;
    }
////////////////////////////


    system("clear");
    std::cout << "//////////////////////////////////////////////////" << std::endl;
    std::cout << "Your number: " << value << std::endl;
////////////////////////////

    #ifdef DEBUG
    std::cout << "1: " << f_guess << std::endl;
    std::cout << "2: " << s_guess << std::endl;
    std::cout << "3: " << t_guess << std::endl;
    std::cout << "4: " << fo_guess << std::endl;
    #endif
////////////////////////////
    return false;
}
int main()
{
    srand(time(NULL));
    unsigned int guess = rand() % 9999;
    system("clear");
    std::cout << "//////////////////////////////////////////////////" << std::endl;
    std::cout << "Welcome to game Cows and Bulls!" << std::endl;

    bool game = 0;
    do
    {
    game = guest_number( guess);
    }
    while(!game);
}