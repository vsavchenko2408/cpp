#include <iostream>
#include <memory>
using std::cin;
using std::cout;
using std::endl;
class MyClass
{
    public:
    MyClass() = default;
    MyClass(int _data){ data = _data;}
    int data;
};

MyClass foo(std::shared_ptr<MyClass> ptr)
{

    
    //*ptr+=5;
    return *ptr;
}

int main() 
{
    MyClass* a = new MyClass(15);
    MyClass newptr = foo(a);

    return 0;
}