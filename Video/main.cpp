#include <iostream>

using std::cin;
using std::cout;
using std::endl;
// exception == вийняток

class MyExc : public std::exception
{
private:
std::string errmsg;
public:
MyExc(const std::string msg) : errmsg(msg)
{}
const char* what() const noexcept override 
{
  return errmsg.c_str();
}

};

int main()
{

try
{
  void f();
  throw MyExc("Failed allocate memory!");
  void g();
  
}
catch(const MyExc& e)
{

  std::cerr <<  "Error! " << e.what() << '\n';
}





    return 0;
}