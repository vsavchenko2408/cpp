#ifndef MYCLASS_H
#define MYCLASS_H
#include <iostream>
////////////////

template <class T>
class MyClass
{
    T m_data;

public:
    MyClass() : m_data(0) {}
    MyClass(T data) : m_data(data) {}
    void set_data(T data) { m_data = data; }
    T get_data() const { return m_data; }
};
//////////////////

template <>
class MyClass<int>
{
    int m_data;

public:
    MyClass() : m_data(0) {}
    MyClass(int data) : m_data(data) {}
    void set_data(int data) { m_data = data; }
    int get_data() const { return m_data * 100; }
};
/////////////////

template <class T>
std::ostream &operator<<(std::ostream &os, const MyClass<T> obj)
{
    os << "Data: " << obj.get_data() << std::endl;
    return os;
}

template <class T>
std::ostream &operator<<(std::ostream &os, const MyClass<int> obj)
{
    os << "Data: " << obj.get_data() << std::endl;
    return os;
}

#endif