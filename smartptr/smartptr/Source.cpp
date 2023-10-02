#include <iostream>
using namespace std;
template<typename T>
class SmartPtr
{
public:
	SmartPtr(T *ptr)
	{
		this->ptr = ptr;
	}
	~SmartPtr()
	{
		delete ptr;
	}
	T& operator *()
	{
		return *ptr;
	}
private:
	T* ptr;
};
int main()
{
	SmartPtr<int> pointer = new int(5);
	cout << *pointer;

	return 0;
}