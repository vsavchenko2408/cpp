#include <iostream>
#include <random>
int count_arr(int* arr, const int SIZE)
{
    int value = 0;
for(int i = 0;i<SIZE;i++)
    {
        value += arr[i];
    }
    return value;
}
void fill_arr(int* arr, const int SIZE)
{
    for(int i = 0;i< SIZE;i++)
    {
        arr[i] = rand()%10;
    }
}
void show_arr(int* arr, const int SIZE)
{
    for(int i = 0; i < SIZE; i++)
    {
        std::cout << i+1 << ": " << arr[i] << std::endl;
    }
    std::cout << std::endl;
}

int main()
{
    const int SIZE = 10;
    int* parr = new int[SIZE];
    srand(time(NULL));

    fill_arr(parr, SIZE);
    show_arr(parr, SIZE);
    int summ = count_arr(parr, SIZE);
    std::cout << "Summ of array = " << summ << std::endl;


    delete[] parr;

    return 0;
}