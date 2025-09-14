#ifndef DATA_H
#define DATA_H
class Data
{
private:
    int *m_data;

public:
    Data() : m_data(nullptr) {}
    Data(int data) : m_data(new int(data)) {}
    Data(const Data &copy) : m_data(new int(*copy.m_data)) {}
    Data &operator=(const Data &copy);
    Data(Data &&move) noexcept;

    Data &operator=(Data &&move) noexcept;
    int get_data();
    ~Data();
};
#endif