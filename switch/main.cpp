#include <iostream>
using namespace std;
int main()
{
int i;
cout << "Input value: " ;
cin >> i;

switch(i)
{
case 1:
cout << "Value 1";
break;
case 2:
cout << "value 2";
break;
case 3:
cout << "Value 3";
break;
default:
cout << "Default value";
}

    return 0;
}