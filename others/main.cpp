#include <iostream>
#include <memory>
using std::cin;
using std::cout;
using std::endl;

int main() 
{
    int a = 0x432343;
   std::shared_ptr<int> ptr = std::make_shared<int>(a);
   cout << "Ptr is: " << ptr << endl;
   
    return 0;
}
