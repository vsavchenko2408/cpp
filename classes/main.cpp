#include <iostream>
#include <vector>
using std::cout;
using std::cin;
using std::endl;
using std::vector;

class pointers
{
public:
pointers()
{

}
~pointers()
{
delete xptr;
delete yptr;
}

private:
int *xptr = new int;
int *yptr = new int;
};


int main()
{
    return 0;
}