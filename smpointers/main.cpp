#include <iostream>
#include <vector>
using std::cout;
using std::cin;
using std::endl;
using std::vector;

class pointers
{
public:
pointers(int x, int y)
{
this->xptr = new int(x);
this->yptr = new int(y);
}
~pointers()
{
delete xptr;
delete yptr;
}
void show()
{
    cout << "X = " << *xptr << endl;
    cout << "Y = " << *yptr << endl;
}

bool operator==(const pointers &other) const
{
    if (*this->xptr == *other.xptr && *this->yptr == *other.yptr) {return true;} else{return false;}
}


private:
    int* xptr;
    int* yptr;
};


int main()
{
    pointers first(3,6);
    pointers second(5,6);
    first.show();
    second.show();
    
    if(bool dif = first == second) cout << "True"<< endl;
    else cout << "False" << endl;

    return 0;
}