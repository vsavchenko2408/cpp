#include <iostream>
#include <optional>

std::optional<int> find(int *arr, const int N, int target)
{
    for (int i = 0; i < N; ++i)
    {
        if (arr[i] == target)
        {
            return arr[i];
        }
    }
    return std::nullopt;
}
int main()
{
    const int SIZE = 10;
    int arr[SIZE] = {5, 3, 7, 8, 1, 9, 4, 4, 3, 2};
    auto target = find(arr, SIZE, 5);
    if (target)
    {
        std::cout << "Find: " << *target << std::endl;
    }
    else
    {
        std::cout << "Value not found." << std::endl;
    }
    system("pause");
}