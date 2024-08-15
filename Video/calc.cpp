/*
switch
{
case:
case:
default:
}
*/


#include <iostream>


int main()
{
double first = 0;
double second = 0;
char oper;

char answer;

while(answer != 'n')
{
std::cout << "Input first value: ";
std::cin >> first;
std::cout << "Enter operation symbol: ";
std::cin >> oper;
std::cout << "Input second value: ";
std::cin >> second;
switch(oper)
{
case '+':
std::cout << first << " + " << second << " = " << first + second << std::endl;
break;

case '-':
std::cout << first << " - " << second << " = " << first - second << std::endl;
break;

case '*':
std::cout << first << " * " << second << " = " << first * second << std::endl;
break;

case '/':
if(second == 0)
{
    std::cerr << "Devide by zero!" << std::endl;
    break;
}
else
{
std::cout << first << " / " << second << " = " << first / second << std::endl;
break;

}

default:
std::cerr << "Wrong operation! " << std::endl;
break;

}
std::cout << "Try new operation? y or n ";
std::cin >> answer;
}



return 0;
}