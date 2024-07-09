#include <iostream>
using std::cout;
using std::endl;

int main()
{
char step;
int x=0;
int y=0;
cout << "\tMiniGame." << endl;

while(step != '\r')
{
cout << "Your coordinates: " << x << '.' << y << endl;
cout << "Tap enter to exit " << endl;
cout << "Input step(w,a,s,d): " ;
step = getchar();
switch(step)
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
    cout << "Goodbye"<< endl;
    exit(step);
    break;

default:
cout << "Error input, try again " << endl;
}
}

return 0;
}