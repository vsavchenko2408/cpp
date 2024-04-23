#include <iostream>
#include <map>
using std::cin;
using std::cout;
using std::endl;



int main() 
{
std::pair<int ,std::string> p1,p2,p3;
p1.first = 1;
p1.second = "sometext1";
p2.first = 2;
p2.second = "sometext2";
p3.first = 3;
p3.second = "sometext3";



std::map <int , std::string> m;
std::map <std::string, u_int> m2;

m.insert(p1);
m.insert(p2);
m.insert(p3);
m.insert(std::make_pair(4, "sometext4"));
m.insert(std::make_pair(4, "sometext4"));
m.insert(std::pair<int,std::string>(5,"sometext5"));
m.emplace(6,"sometext6");


for(auto i: m)
{
    m2.emplace(i.second , i.first);
}

for(auto x: m)
{
    
    cout << x.first << " " << x.second << endl;
}

cout <<endl << endl;
for(auto x: m2)
{
    
    cout << x.first << " " << x.second << endl;
}

    return 0;
}