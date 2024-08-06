#include <iostream>
using std::cout;
using std::endl;

int main()
{
int a;

char c[4];
cout << (int)c[6];

cout << "char: \t\t" << sizeof(char) << " байт" << endl;
cout << "short: \t\t" << sizeof(short) << " байт" << endl;
cout << "integer: \t" << sizeof(int) << " байт" << endl;
cout << "long: \t\t" << sizeof(long) << " байт" << endl;
cout << "long long: \t" << sizeof(long long) << " байт" << endl;
cout << "float: \t\t" << sizeof(float) << " байт" << endl;
cout << "double: \t" << sizeof(double) << " байт" << endl;

    return 0;
}