#include <iostream>
using namespace std;
struct MyStruct
{
int a;
int b;
void get(int inp_a, int inp_b)
{
a= inp_a;
b= inp_b; 
}
void show()
{
    cout << "A = " << a << endl;
    cout << "B = " << b << endl; 
}

};
int main()
{
MyStruct test;
test.get(15,20);
test.show();
    return 0;
}