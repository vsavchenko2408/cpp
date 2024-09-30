#include <iostream>

class Parent
{
protected:
    int m_data;

public:
    Parent(int data) : m_data(data) {}
    Parent() : m_data(0) {}
    int get_data()
    {
        return m_data;
    }
};

class Child : public Parent
{
    int c_data;

public:
    Child(int c_data, int m_data) : c_data(c_data), Parent(m_data) {}

    void show_data() const
    {
        std::cout << "c_data: " << c_data << std::endl;
        std::cout << "m_data: " << m_data << std::endl;
    }
};

int main()
{
    Child c(14, 23);
    c.show_data();
    return 0;
}
