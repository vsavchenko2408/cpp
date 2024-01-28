#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;
int main()
{
string s1 = "Hello ";
string s2 = "world ";
string s3 = s1+s2;
cout << s3 << endl;
s3.swap(s2);
cout << s3 << endl;
    return 0;
}