#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;
int main()
{

vector<int> MyVec = {14,35,32,98,67,94,9};
MyVec.push_back(17);
MyVec.erase(MyVec.begin()+1,MyVec.begin()+4);
for(size_t i =0;i<MyVec.size();++i)
{
    cout << MyVec[i] << endl;
}


    return 0;
}