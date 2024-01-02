#include <iostream>
using namespace std;

struct mystr
{
double b = 2.5;
int a =5;
char c = 'a';
bool d = true;
void szof()
{
cout << "Char c: " << sizeof(c) << endl;
cout << "Bool d: " << sizeof(d) << endl;
cout << "Int a: " << sizeof(a) << endl;
cout << "Double b: " << sizeof(b) << endl;
}
};
int main()
{
mystr mystruct;
mystruct.szof();
cout << "szof: " << sizeof(mystruct.szof()) << endl;
cout << "My struct: " << sizeof(mystruct) << endl;



return 0;
}