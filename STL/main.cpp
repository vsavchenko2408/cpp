#include <iostream>
#include <map>
#include <string>

using std::cout;
using std::endl;
using std::multimap;
using std::string;

void show(multimap<string, unsigned int> pns);

int main()
{
    multimap<string, unsigned int> pns;

    pns.emplace("Vasyl", 38097345);
    pns.emplace("Maria", 38097567);
    pns.emplace("Volodymir", 38097123);
    pns.emplace("Hanna", 38097234);
    pns.emplace("Hanna", 38095234);

    show(pns);

    return 0;
}

void show(multimap<string, unsigned int> pns)
{
    for (auto i : pns)
    {
        cout << "Name: " << i.first << " - " << "Number: " << i.second << endl;
    }
}