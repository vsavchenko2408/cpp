#include <iostream>
#include <vector>
#include "pointer.h"
#include <random>
using std::cout;
using std::endl;

int main()
{
    srand(time_t(NULL));
    std::vector <Pointer> vec;

    //vec.emplace_back(4,7);
    for(int i=0;i<10000;++i)
    {
        vec.emplace_back(rand()%10, rand()%10);
    }
    std::vector<Pointer>::iterator it = vec.begin();
    for(size_t x=0; x<vec.size(); ++x)
    {
        it++;
        if(it->get_x() == 5 && it->get_y() == 5)
        {
            cout << "X: " << x << endl;
            cout << it->get_x() << ", " << it->get_y() << endl;
        }

        //
    }
    return 0;
}
