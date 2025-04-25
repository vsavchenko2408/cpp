#include <iostream>
#include <vector>
class Data
{
    int m_data;

public:
    Data()
    {
        std::cout << "Default empty constr Data" << std::endl;
    }
    Data(int data) : m_data(data)
    {
        std::cout << "Default constr Data" << std::endl;
    }
    Data(const Data &obj)
    {
        m_data = obj.m_data;
        std::cout << "Copy constr Data" << std::endl;
    }
};

class MyClass
{
    Data *ptr_data;

public:
    MyClass() : ptr_data(new Data)
    { // std::cout << "Default empty constr MyClass" << std::endl;
    }
    MyClass(int val) : ptr_data(new Data(val))
    {
        // std::cout << "Default const MyClass" << std::endl;
    }
    MyClass(const MyClass &obj)
    {
        ptr_data = new Data(*obj.ptr_data);
        // std::cout << "Copy Constr MyClass" << std::endl;
    }
    ~MyClass()
    {
        delete ptr_data;
        // std::cout << "Destructor MyClass" << std::endl;
    }
};

int main()
{
    std::vector<MyClass> v;
    v.push_back(MyClass{});
    return 0;
}