#include <iostream>
#include <algorithm>
#include <vector>
using std::cout;
using std::endl;
using std::search;
using std::vector;

int main()
{
    vector<int> arr = {1,2,3,4,5,6,5,8,9,10};
    int srch[3] = { 8,9,10};
    auto ptr = search(arr.begin(),arr.end(),srch, srch+3);

    cout << *ptr << endl;
    return 0;
}
