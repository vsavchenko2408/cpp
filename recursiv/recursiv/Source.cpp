#include <iostream>
using std::cout;
using std::endl;
using std::cin;

void foo(int count)
{
	cout << "Enter " << count << endl;
	
	if (count > 0)
	{
		foo(count - 1);
		cout << "Exit " << count << endl;
		return;
	}
}
void main()
{
	cout << "test" << endl;
	foo(10);

}