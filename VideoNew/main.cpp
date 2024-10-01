#include <iostream>

class Parent
{
    int m_data;

public:
    Parent() : m_data(0) {}
    Parent(int data) : m_data(data) {}
    void set_data(int data)
    {
        m_data = data;
    }
    int get_data()
    {
        return m_data;
    }
};

class Child : public Parent
{
    int c_data;

public:
    Child() : c_data(0), Parent() {}
    Child(int ch_data, int p_data) : c_data(ch_data), Parent(p_data) {}

    void show_data()
    {
        std::cout << "C_data: " << c_data << std::endl;
        std::cout << "P_data: " << get_data() << std::endl;
    }
};

int main()
{

    Child c(14, 25);
    c.show_data();
    c.set_data(500);
    c.show_data();

    return 0;
}