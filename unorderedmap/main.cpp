#include <iostream>
#include <unordered_map>
#include <map>
#include <random>
using std::cout;
using std::endl;
using std::unordered_map;
using std::map;

int main()
{
    srand(time(NULL));
    
unordered_map< int, int> uomap;
for(int i =0; i<10;++i)
{
uomap.emplace(rand()%10, rand()%100);
}

for(auto j: uomap)
{
    cout << j.first << ", " << j.second << endl;
}

map<int,int> newmap(uomap.begin(), uomap.end());
uomap.clear();
cout << "Converted" << endl;
for(auto j: newmap)
{
    cout << j.first << ", " << j.second << endl;
}

return 0;
}