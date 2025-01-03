#include <iostream>


int main()
{
    const int N = 3;
    const int M = 4;
    int arr[N][M];
    for(size_t i =0;i<N;++i)
    {
        for(size_t j = 0; j < M; ++j)
        {
            arr[i][j] = i*M+j;
        }
    }
    for(size_t i =0;i<N;++i)
    {
        for(size_t j = 0; j < M; ++j)
        {
           std::cout <<  arr[i][j];
        }
        std::cout << std::endl;
    }


    return 0;
}
