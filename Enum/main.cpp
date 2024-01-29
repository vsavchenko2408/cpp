#include <iostream>
using std::cout;
using std::cin;
using std::endl;
class MyClass
{
public:
int y;
private:
int x;
};

int main()
{
    MyClass MyCl;
    MyCl::MyCl.y = 10;

    return 0;
}