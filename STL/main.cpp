#include <iostream>
#include <algorithm>
#include <vector>
using std::cout;
using std::endl;
using std::merge;
using std::vector;

int main()
{
    vector<int> arr = {2,3,4,5,6,7,8};
    vector<int> arr1 = {1,9,10};
    vector<int> mrg(10);
    merge(arr.begin(),arr.end(),arr1.begin(),arr1.end(),mrg.begin());
    
    for(auto i: mrg)
    {
        cout << i << endl;
    }

    return 0;
}
