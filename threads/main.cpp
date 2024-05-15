#include <iostream>
#include <thread>
#include <mutex>
#include <chrono>
using namespace std;
//RAII

mutex m;

void foo1()
{
    lock_guard<mutex> guard(m);
cout << "ID " << this_thread::get_id() << endl;
for(int i=0; i< 5; i++)
{
    this_thread::sleep_for(chrono::milliseconds(500));
   cout << "Foo1!" << endl;  
}

}
/*
void foo2()
{
cout << "ID " << this_thread::get_id() << endl;
for(int i=0; i< 10; i++)
{
    this_thread::sleep_for(chrono::milliseconds(300));
   cout << "Foo2!" << endl;  
}
}
*/
int main()
{

std::thread th1(foo1);
std::thread th2(foo1);






th1.join();
th2.join();
    return 0;
}