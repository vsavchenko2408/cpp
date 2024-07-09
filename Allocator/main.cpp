#include <iostream>
#include <memory>




int main()
{
std::allocator<float> allfl;
float* arr = allfl.allocate(5);

for(int i=0;i<5;++i)
{
allfl.construct(arr+i,i+1);
}

for(int j=0;j<5;++j)
{
    std::cout << arr[j] << std::endl;
}
allfl.deallocate(arr, 5);
//system("pause");
}