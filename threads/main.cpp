#include <iostream>
#include <memory>
#include <algorithm>
#include <string>
#include <vector>
#include <list>
#include <thread>
#include <chrono>
using namespace std;
void foo1()
{
for(int i=0;i<10;i++)
    {
        this_thread::sleep_for(chrono::milliseconds(500));
cout << "Foo1: " << i << endl;
    }
}
void foo2()
{
for(int i=0;i<5;i++)
{
 this_thread::sleep_for(chrono::milliseconds(300));
cout << "Foo2: " << i << endl;
}

}
int main()
{
thread td1(foo1);
thread td2(foo2);
td1.detach();
td2.join();
    return 0;
}