#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int i = 10;
    float f = 4.3f;
    bool b = true;
    double d = 65.3434;
    char c = 'A';
    std::string str = "Error!";
    std::exception ex;
    try
    {

        throw ex;
    }
    catch (int)
    {
        cout << "Integer: " << i << endl;
    }
    catch (float)
    {
        cout << "Float: " << f << endl;
    }
    catch (double)
    {
        cout << "Double: " << d << endl;
    }
    catch (char)
    {
        cout << "Integer: " << c << endl;
    }
    catch (std::string)
    {
        cout << "String: " << str << endl;
    }
    catch (...)
    {

        cout << "Unknown Error! " << endl;
    }

    return 0;
}