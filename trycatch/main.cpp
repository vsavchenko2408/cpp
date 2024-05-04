#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;

template <class T1, class T2>
T1 devide(T1 a, T2 b)
{
   int* ptr = new int(15);
    if(b == 0)
    {
        throw b;
    }
    else if(a == 5)
    {
        throw a;
    }
    else 
    delete ptr;
    return a/b;
}

int main()
{

try
{
    int sc;
    cout << devide(5,0) << endl;
}
catch( int err)
{
    std::cerr << "Integer: " << err << '\n';
}
    catch (float err)
{
        cout << "Float! " << err << endl;
}
    catch (double err)
{
        cout << "Double! " << err << endl;
}
catch(void* ptr)
{
    cout << "Ptr" << ptr << endl;
}


catch(...)
{
    cout << "Error!" << endl;
}






    return 0;
}