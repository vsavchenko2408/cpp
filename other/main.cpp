#include <iostream>

class MyClass
{
	public:
		int* ptr;
		MyClass() 
		{
			ptr = nullptr;
			std::cout << __PRETTY_FUNCTION__ << std::endl;
		}
		MyClass(long long length)
		{
			ptr = new int[length];
			std::cout << __PRETTY_FUNCTION__ << std::endl;
		}
		~MyClass()
		{
		std::cout << __PRETTY_FUNCTION__ << std::endl;
		delete[] ptr;
		ptr = nullptr;
		}

};
int main()
{
	try
	{
MyClass mc(400'000'000'000);
	throw &mc;
	}
	catch(...)
	{
	std::cout << "Caught!" << std::endl;
	}
	
}
