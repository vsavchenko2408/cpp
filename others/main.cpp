#include <iostream>
#include <map>
using std::cin;
using std::cout;
using std::endl;
template<class T>
class A
{
    public:
    A(){}
    A(T _data)
    {
        if(_data > 100)
        { throw _data;}
        else
        data = _data;
    }
    void get_data()
    {
        return data;
    }
    void set_data(T _data)
    {
         if(_data > 100)
        { throw _data;}
        else
        data = _data;
    }
private:
T data;
};

int main() 
{

A<int> a(15);
try{
a.set_data(200.56);
}
catch(const T& x)
{
    cout << "Exception: " << x << endl;
}


//system("pause");
    return 0;
}