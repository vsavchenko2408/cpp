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
   Operation<int,int> op; //разобраться как создать шаблонный обьект

std::cin >> condition;
switch (condition)
    {
    case '+':
     std::cout << op.plus() << std::endl;
    break;
    case '-':
    std::cout << op.minus() << std::endl;
    break;
    case '*':
    std::cout << op.multi() << std::endl;
    break;
    case '/':
    std::cout << op.divis() << std::endl;
    break;
    default:
    std::cout << "Error input!" << std::endl;
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