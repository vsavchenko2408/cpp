#include <iostream>
#include <vector>
#include <algorithm>
using std::vector;
using std::cout;
using std::endl;
using std::cin;

int main()
{
    vector<int> MyVec;
    MyVec.push_back(15);
    MyVec.push_back(40);
    MyVec.push_back(34);
    MyVec.push_back(67);
    MyVec.push_back(3);
    sort(MyVec.begin(),MyVec.end());

    for(int i=0;i<5;i++)
    {
    cout << MyVec.at(i) << endl;
    }
    return 0;
}
