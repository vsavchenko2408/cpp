#include <iostream>
#include <thread>
#include <chrono>
//using namespace std;

void foo1()
{
for(int i = 0;i<10;++i)
{
    std::this_thread::sleep_for(chrono::milliseconds(300));
    cout << this_thread::get_id() << " " << "Foo1: " << i << endl;
}
}
void foo2()
{
for(int i = 0;i<10;++i)
{
    std::this_thread::sleep_for(chrono::milliseconds(500));
    cout << this_thread::get_id() << " " << "Foo2: " << i << endl;
}
}
void foo3()
{
for(int i = 0;i<10;++i)
{
    std::this_thread::sleep_for(chrono::milliseconds(700));
    cout << this_thread::get_id() << " " << "Foo2: " << i << endl;
}
}
int main()
{

std::thread th1(foo1);
std::thread th2(foo2);
std::thread th3(foo3);
th1.join();
th2.join();
th3.join();
    return 0;
}