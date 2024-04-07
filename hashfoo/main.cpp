#define ui unsigned int 
#include <iostream>
#include <vector>
using std::vector;
using std::string;
using std::cout;
using std::cin;
using std::endl;

int hash(const string& str)
{
ui id;
for(auto x: str)
{
    id += x;
}

return id%10;
}

int main()
{
cout << "Enter some text: " ;
string str;

cin >> str;
cout << "Hash code: " << hash(str) << endl;
system("pause");
    return 0;
}