#include <iostream>
using std::cin;
using std::cout;
using std::endl;

class IntArr
{
    int m_length;
    int *arr;

public:
    IntArr()
    {
        m_length = 0;
        arr = nullptr;
    }
    IntArr(int length)
    {
        if(length > 0)
        {
        m_length = length;
        arr = new int(length);
        }
        else
        {
            std::cerr << "Error!" << endl;
        }
    }
    ~IntArr()
    {
        delete[] arr;
        arr = nullptr;
    }
    int get_length();
    
    int& operator[](int index)
    {
        return arr[index];
    }
};

int IntArr::get_length()
{
    return m_length;
}
int main()
{
    int ent;
    cout << "Enter value: ";
    cin >> ent;
    IntArr arr(ent);
    arr[5] = 12;
    cout << arr[5] << endl;
    
}