#include <iostream>

class MyClass
{
    int m_data;

public:
    MyClass() : m_data(0) {}
    MyClass(int data) : m_data(data) {}
    MyClass(const MyClass &obj)
    {
        this->m_data = obj.m_data;
        std::cout << "Copy!" << std::endl;
    }
    int get_data()
    {
        return m_data;
    }
};

template <typename T>
void swap(T &a, T &b)
{
    auto temp = std::move(a);
    a = std::move(b);
    b = std::move(temp);
}

int main()
{
    MyClass a(5);
    MyClass b(10);
    swap(a, b);
    std::cout << "a: " << a.get_data() << std::endl;
    std::cout << "b: " << b.get_data() << std::endl;
}