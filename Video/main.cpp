#include <iostream>

using std::cin;
using std::cout;
using std::endl;
// exception == вийняток


int main()
{
int i;
float f;
double d;
char c;
bool b;
std::string str;
try 
{
   throw d;
}

catch(float)
{
  std::cout << "Float! " << endl;
}
catch(double)
{
  std::cout << "Double! " << endl;
}
catch(int)
{
  std::cout << "Integer! " << endl;
}
catch(char)
{
  std::cout << "Char! " << endl;
}
catch(bool)
{
  std::cout << "Bool! " << endl;
}
catch(...)
{
    cout << "Unknown Error!" << endl;
}




    return 0;
}