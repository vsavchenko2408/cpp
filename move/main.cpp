#include <iostream>

template <typename T>
void swap(T &a, T &b)
{
    T tmp = std::move(a);
    a = std::move(b);
    b = std::move(tmp);
}

class Data
{
    int m_data;

public:
    Data() : m_data(0)
    {
    }
    Data(int data) : m_data(data)
    {
    }
    Data(const Data &obj) : m_data(obj.m_data)
    {
        std::cout << "Copy constr" << std::endl;
    }
    Data &operator=(const Data &obj)
    {
        std::cout << " Operator Copy" << std::endl;
        m_data = obj.m_data;
        return *this;
    }
    Data(const Data &&obj)
    {
        std::cout << "Moved constr" << std::endl;
        m_data = obj.m_data;
    }
    Data &operator=(Data &&obj)
    {
        std::cout << "Moved operator" << std::endl;
        m_data = obj.m_data;
        return *this;
    }
    int get_data()
    {
        return m_data;
    }
    ~Data()
    {
        std::cout << "Destructor" << std::endl;
    }
};

int main()
{
    Data a(10);
    Data b = std::move(a);
    std::cout << a.get_data() << std::endl;
}