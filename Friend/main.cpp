#include <iostream>
using std::cout;
using std::endl;
class Frnd;
class MyClass
{
public:
friend class Frnd;

private:
    int x = 10;
};

class Frnd
{

public:

void show(MyClass &obj)
{
    obj.x = 15;
    cout << obj.x << endl;
}
};


int main()
{
MyClass mc;

Frnd fd;
fd.show(mc);

    return 0;
}