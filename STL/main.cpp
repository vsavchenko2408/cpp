#include <iostream>
#include <algorithm>
<<<<<<< HEAD
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
=======

using std::cout;
using std::endl;
using std::find;

int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int* fn = find(arr,arr+10,5);
    
    cout << *fn << endl;
>>>>>>> 3ae74c2 (STL)

    return 0;
}
