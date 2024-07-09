#include <iostream>
#include <set>
using std::cout;
using std::endl;


int main()
{

std::set<int> st = {14,6,3,45,23};

st.insert(15);
st.insert(15);
st.erase(6);
st.erase(99);

std::set<int>::iterator it = st.begin();

for(it;it != st.end();it++)
{
    cout << *it << endl;
}

int fnd;
std::cin >> fnd;
if(st.find(fnd) != st.end())
{
    cout << "найдено! " << fnd << endl;
}
else
{
    cout << "Не найдено! " << fnd << endl;
}

    return 0;
}