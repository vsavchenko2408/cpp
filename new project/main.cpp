#include <iostream>
using std::cout;
using std::endl;



int main()
{

    int a = 9;
    int b = 10;
    int &aref = a;
    int &bref = b;
if(aref<bref)
{
    cout << "True" << endl;
}
else cout << "False" << endl;


//cout <<  << endl;


    return 0;
}