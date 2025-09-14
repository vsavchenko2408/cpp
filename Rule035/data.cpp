#include "data.h"

Data &Data::operator=(const Data &copy)
{
    if (this != &copy)
    {
        delete m_data;
        m_data = new int(*copy.m_data);
    }
    return *this;
}

Data::Data(Data &&move) noexcept : m_data(move.m_data)
{
    move.m_data = nullptr;
}

Data &Data::operator=(Data &&move) noexcept
{
    if (this != &move)
    {
        delete m_data;
        m_data = move.m_data;
        move.m_data = nullptr;
    }
    return *this;
}
int Data::get_data()
{
    return *m_data;
}
Data::~Data()
{
    delete m_data;
}