#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
char c;
for(int i = 1; i< 128;i++)
{
c++;

cout << "Code: "  << std::dec << i  << " " << std::oct << i << " " << std::hex << i <<" = " << c << endl;

}

    return 0;
}