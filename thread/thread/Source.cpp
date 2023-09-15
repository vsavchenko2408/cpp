#include <iostream>
#include <thread>
#include <chrono>
using namespace std;
void thread1()
{
	cout << "Thread 1" << endl;
	for (int i = 0; i < 10; i++)
	{
		this_thread::sleep_for(chrono::milliseconds(500));
		cout << "ID потока : " << this_thread::get_id() << " 1 " << endl;
	}
}
void thread2()
{
	cout << "Thread 2" << endl;
	for (int i = 0; i < 10; i++)
	{
		this_thread::sleep_for(chrono::milliseconds(500));
		cout << "ID потока : " << this_thread::get_id() << " 2 " << endl;
	}
}

int main()
{
	setlocale(LC_ALL, "RU");
	thread tr1(thread1);
	thread tr2(thread2);
	tr1.join();
	tr2.join();
	return 0;
}