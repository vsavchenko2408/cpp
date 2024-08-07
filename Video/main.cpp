#include <iostream>
using std::cout;
using std::endl;

int main()
{
    setlocale(LC_ALL,"ua");
    char c;
    for(int i=0;i<127;++i)
    {
        cout << "Code: " << i << " " << c << endl;
    c++;
    }

    return 0;
}