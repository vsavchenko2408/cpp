#include <iostream>
using namespace std;
template<typename T>
T myMax(T a, T b)
{
	if (a > b)
	{
		return a;
	}
	if (a < b)
	{
		return b;
	}
}


int main()
{
	double x, y;
	cin >> x >> y;
	cout << myMax(x, y) << endl;

	int a, b;
	cin >> a >> b;
	cout << myMax(a, b) << endl;
	




}