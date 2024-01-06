#include <iostream>
using std::cout;
using std::cin;
using std::endl;
template<typename T>
class SmartPointer
{
public:
SmartPointer(T *ptr)
{
this->ptr = ptr;
cout << "Constructor " << endl;
}

~SmartPointer()
{
    delete ptr;
    cout << "Destructor " << endl;
}

T& operator *()
{
    return *ptr;
}

private:
T *ptr;

};

int main()
{
SmartPointer<int> pointer = new int(5);
cout << *pointer << endl;


    return 0;
}