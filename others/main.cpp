#include <iostream>
#include <memory>
using std::cin;
using std::cout;
using std::endl;

int main() 
{
    int a = 15;
   std::shared_ptr<int> ptr = std::make_shared<int>(a);
std::shared_ptr<int> ptr1 = ptr;

cout << ptr1.use_count()<< endl;

system("pause");
    return 0;
}