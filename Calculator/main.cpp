#include <iostream>
#include "Operation.h"

void Hello();
void ClearScreen();
void Exit();



int main()
{
    char condition;
    
do
{
    Hello();
   Operation<> op; //разобраться как создать шаблонный обьект

std::cin >> condition;
switch (condition)
    {
    case '1':
    /* code */
    break;

    default:
    break;
    }
}
while(condition != '0');




}





void Hello()
{
    std::cout << "\t\tCalculator" << std::endl;

}

void ClearScreen()
{
    system("cls");
}

void Exit()
{
    exit(0);
}