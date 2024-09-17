#include <iostream>


int main()
{
int x;
std::cin >> x;
if(x<100)
{
    std::cout << x << std::endl;
}
else
{
    abort();
}

}