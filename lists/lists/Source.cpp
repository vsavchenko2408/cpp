#include <iostream>
#include <list>
using namespace std;

int main()
{
	list<string> MyList;
	MyList.push_back("12");
	MyList.push_back("15");
	MyList.push_back("98");
	MyList.push_back("120");
	MyList.push_back("4");
	MyList.pop_back();
	for (string i : MyList)
	{
		cout << i << endl;
	}

	return 0;
}