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
} un1,un2;

int main()
{
    un1.i = 5;

    cout << "i: " << un1.i << endl;
    cout << "f: " << un1.f << endl;
    cout << "d: " << un1.d << endl;
    cout << "c: " << un1.c << endl;
    return 0;
}