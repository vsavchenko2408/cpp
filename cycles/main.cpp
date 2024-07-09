#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
 /*   int choise;

    do
    {
        cin >> choise;
    switch(choise)
    {
case 1:
    cout << "Choise 1 " << endl;
    break;
case 2:
    cout << "Choise 2 " << endl;
    break;
case 3:
    cout << "Choise 3 " << endl;
    break;
default:
    cout << "Error choise" << endl;
    continue;
}
break;
}  while(choise);
*/

for(int i=0;i<10;i++)
{
    for(int j=0; j<10;j++)
    {
        cout << j;
    }   
cout << " " << i  << endl;
}
    
    return 0;
}