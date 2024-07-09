#include <iostream>

using std::cout;
using std::endl;

//функция сложения
int AddictionFunc(int d, int e)
{
return d+e;
}
//функция вывода
void ShowFunc(int e)
{
    cout << "Result is: " << e << endl;
   
}
int main()
{
 int a = 5; 
 int b = 3; 
 int f = AddictionFunc(a,b);

ShowFunc(f);

    return 0;
}