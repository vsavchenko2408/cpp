#include <iostream>
#include <memory>
#include <string>
using std::cout;
using std::endl;




int main() {


int a = 15;
std::shared_ptr<int> ptr = std::make_shared<int> (a);

*ptr = 45;

cout << *ptr << endl;

    return 0;
}