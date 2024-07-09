#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{

string str("some text");
cout << str.capacity() << endl;
str.reserve(100);

str.shrink_to_fit();
cout << str.capacity() << endl;
//cout << str;
cout << endl;
return 0;
}