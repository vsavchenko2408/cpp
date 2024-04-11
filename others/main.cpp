#include <iostream>
#include <memory>
#include <string>
using std::cout;
using std::endl;


template <class T>
T foo(T obj)
{
auto x = std::make_shared<T> (obj);
cout << x.use_count() << endl;
    return *x;
}

int main() {

int* a = new int(10);

auto t = std::make_shared<int>(foo(*a));

auto x = std::make_shared<int>(*t);
cout << "Count t: " << t.use_count() << endl;
cout << "Count x: " << x.use_count() << endl;



cout << "T: " << *t << endl;
cout << "X: " << *x << endl;

system("pause");
    return 0;
}