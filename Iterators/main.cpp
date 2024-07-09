#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;

int main()
{

vector<int> V = {45,65,34,76,98,23,54,45,67,90};
vector<int>::reverse_iterator it;

for(it=V.rbegin();it!=V.rend();it++ )
{
    cout << *it << endl;
   
}

    return 0;
}