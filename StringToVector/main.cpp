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
string str = {"some text"};

cout << "Empty length: " << str.length() << endl;
cout << "Empty capacity: " << str.capacity() << endl;

string::iterator it = str.begin();

cout << "Not empty length: " << str.length() << endl;
cout << "Not empty capacity: " << str.capacity() << endl;



for(it;it!=str.end();it++)
{
    cout << *it << endl;
}




system("pause");
    return 0;
}