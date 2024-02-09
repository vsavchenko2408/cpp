#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
int main()
{
string str; 
cout << "Enter your text:" ;
getline(cin, str);
cout << "You write: " << str << endl;
    return 0;
}