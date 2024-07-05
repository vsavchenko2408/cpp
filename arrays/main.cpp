#include <iostream>
#include <memory>
using std::cout;
using std::endl;

int main()
{
    const size_t SIZE = 10;

    std::shared_ptr<int> arr(new int[SIZE], std::default_delete<int[]>());
    int* parr = arr.get();
    for(int i = 0;i<SIZE;++i)
    {
        parr[i] = static_cast<int>(i+1);
    }
    for(int i = 0;i<SIZE;++i)
    {
        cout << parr[i] << " " ;
    }

//delete[] parr;
parr = nullptr;



    return 0;
}