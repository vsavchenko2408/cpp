#include <iostream>


int main()
{
    const int ROW = 10;
    const int COL = 10;
int arr[COL][ROW];

for(int i =0; i < COL;++i)
{
    for(int j =0; j<ROW; ++j)
    {
       arr[i][j] = i*j;
    }
}
for(int i =1; i < COL;++i)
{
    for(int j =1; j<ROW; ++j)
    {
      std::cout << arr[i][j] << "  ";
    }
    std::cout << std::endl;
}


    return 0;
}