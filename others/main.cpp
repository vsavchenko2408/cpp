#include <iostream>
#include <memory>
using std::cin;
using std::cout;
using std::endl;

int main() 
{
  auto* new_ptr = reinterpret_cast<int*>(0x10);
   cout << *new_ptr << endl;
    return 0;
}
