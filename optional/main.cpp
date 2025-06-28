#include <iostream>
#include <optional>

std::optional<int> find(int *arr, const int SIZE, int target)
{
    for (int i = 0; i < SIZE; ++i)
    {
        if (target == arr[i])
        {
            return arr[i];
        }
    }
    return std::nullopt;
}

int main()
{
    int a = 5;

    const int SIZE = 10;
    int arr[SIZE] = {0, -1, 2, 3, 4, 5, 6, 7, 8, 9};
    std::optional op = find(arr, SIZE, 10);
    if (op.has_value())
    {
        std::cout << "Find: " << op.value() << std::endl;
    }
    else
    {
        std::cout << "Value not found!" << std::endl;
    }
}