#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{

char symbol = '\0';
for(int i = 0;i <= 255;i++)
{
    symbol++;
    cout << "Code: " << i << " = " << symbol << endl;
}
    return 0;
}