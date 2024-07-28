#include <iostream>


int main()
{
const int SIZE = 50;
int arr[SIZE];
int sum = 0;
for(int i=0;i<SIZE;++i)
{
    arr[i] = i+1;
    std::cout << "Element: " << i << " = " << arr[i] << std::endl; 
}

for(int j=0;j<SIZE;++j)
{
    sum += arr[j];
}

std::cout << "Sum of all elements: " << sum << std::endl;

    return 0;
}