#include <iostream>
#include <list>
using std::endl;
using std::cout;
using std::list;

void prntlst(const list<int> &lst)
{

list<int>::const_iterator i ;
for(i= lst.begin();i != lst.end(); i++)
{
cout << *i << endl;

}


}
int main()
{
list<int> lst = {54,32,76,45,65,12,54,54,43,76,72,83};
list<int>::iterator it = lst.begin();
lst.push_back(13);
lst.push_front(1);
lst.insert(it , 5);
lst.pop_front();
lst.pop_back();
//lst.erase(it);
//lst.sort();
lst.unique();
prntlst(lst);
/*
cout << *it << endl;
advance(it, 4);
advance(it,1);
cout << *it << endl;
*/
    return 0;
}