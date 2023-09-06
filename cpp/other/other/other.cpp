#include <iostream>
using std::endl;
using std::cout;

class Mother
{
public:
	void show()
	{
		cout << "Mother" << endl;
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

