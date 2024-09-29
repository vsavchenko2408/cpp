#include <iostream>
#include <string>
#include "Pointers.h"
using std::cout;
using std::endl;
using std::cin;
using std::string;

 int Pointers::count = 0;

void zero_coords(Pointers& obj)
{
  obj.x = 0;
  obj.y = 0;
}

int main()
{
   
Pointers p1(3,7);
Pointers p2(4,7);
cout << p1*p2 << p1 + p2 << endl;

/*
if(p1 > p2)
{
  cout << "Equil!"  << endl;
}
else
{
    cout << "Not Equil!" << endl;
}
*/

//zero_coords(p1);
//p1.show();
//cout << Pointers::count << endl;

//cout << Pointers::count << endl;
    return 0;
}

