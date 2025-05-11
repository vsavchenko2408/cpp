#include <iostream>

using std::cout;
using std::cin;
using std::endl;

union UN
{
   int i;
   float f;
   double d;
   char c;
};

int main()
{
    UN MyUn;
    MyUn.i = 100;
   cout << "i = " << MyUn.i << endl;
   cout << "f = " << MyUn.f << endl;
   cout << "d = " << MyUn.d << endl;
   cout << "c = " << MyUn.c << endl;
   MyUn.d = 4.2;
   cout << "i = " << MyUn.i << endl;
   cout << "f = " << MyUn.f << endl;
   cout << "d = " << MyUn.d << endl;
   cout << "c = " << MyUn.c << endl;
   system("pause");
    return 0;
}