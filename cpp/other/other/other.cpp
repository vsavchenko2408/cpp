#include <iostream>
using std::endl;
using std::cout;

class Mother
{
public:
	void show()
	{
		cout << "Mother" << endl;
		int a=5;
		int b = 6;
		int c= a+b;
	}
};
class Daughter:public Mother
{
	public:
	 void show()
	{
		cout << "Daughter" << endl;
	}
};

int main()
{
	Mother a;
	a.show();
	Daughter b;
	b.show();
	
return 0;
}

