#include <iostream>
#include <memory>
using std::cout;
using std::endl;

class MyClass
{
public:
MyClass()
{
    cout << "Constructor MyClass" << endl;
}
~MyClass()
{
    cout << "Destructor MyClass" << endl;
}
void doSomething()
{
    cout << "Doing something" << std::endl;
}
};

void foo()
{
    std::shared_ptr<MyClass> shptr(new MyClass);

    std::shared_ptr<MyClass> shptr2(shptr);
    std::weak_ptr<MyClass> wkptr(shptr);
    std::shared_ptr<MyClass> lockshptr = wkptr.lock();

    
}

int main()
{

foo();



return 0;
}