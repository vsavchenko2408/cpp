#include <iostream>
#include <unordered_map>
#include <random>
using std::cout;
using std::endl;
using std::unordered_map;

int main()
{
    srand(time(NULL));
    
unordered_map< int, int> uomap;
for(auto i: uomap)
{
uomap.emplace(rand()%10, rand()%100);
}



}