#include <iostream>
#include <deque>
#include <vector>
// double ended queue
using std::cout;
using std::deque;
using std::endl;
using std::vector;

int main()
{

    size_t size = 0;
    std::cin >> size;
    deque<int> v(size);
    int count =0;
    while(!v.empty())
    {
        count++;
        v.erase(v.begin());
        cout << "count: " << count << endl;
    }


    //  deque<int> dq;

    return 0;
}