#include <iostream>
#include <vector>
#include <string>
using std::cout;
using std::endl;
using std::cin;
using std::vector;
using std::string;


int main()
{

vector<char> MyString;
string str;
cout << "Enter your string: " << endl;
cin >> str;

for(int i =0; i< str.length();i++)
{
MyString.push_back(str[i]);
}
for(auto x:MyString)
{
    cout << x << " " ;
}

char a;
cin >> a;



    return 0;
}