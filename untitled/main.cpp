#include <iostream>
#include <vector>


int main()
{
    std::vector<int> vec(5,0);
    for(auto x: vec)
    {
        std::cout << x << " " ;
    }
    std::cout << std::endl << vec.capacity() << std::endl;
    vec.push_back(0);
    std::cout << std::endl << vec.capacity() << std::endl;
    vec.max_size();
    std::cout << std::endl << vec.capacity() << std::endl;
    return 0;
}
