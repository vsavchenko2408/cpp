#include "smartpointers.h"


Smartpointers::Smartpointers(int data) : _ptr(new int(data))
{
}

Smartpointers::Smartpointers() : _ptr(nullptr)
{
}

Smartpointers::Smartpointers(const Smartpointers& obj)
{
    if(obj._ptr != nullptr)
    {
        _ptr = new int(*obj._ptr);
    }
    else
    {
        _ptr = nullptr;
    }
}

Smartpointers& Smartpointers::operator=(const Smartpointers& obj)
{
    if(this == &obj)
    {
        return *this;
    }

    delete _ptr;

    if(obj._ptr != nullptr)
    {
        _ptr = new int(*obj._ptr);
    }
    else
    {
        _ptr = nullptr;
    }
    return *this;
}

Smartpointers::~Smartpointers() 
{
    delete _ptr;
}

int Smartpointers::get_data() const
{
    if(_ptr != nullptr)
    {
        return *_ptr;
    }
    else
    {
        return 0;
    }
}
    void Smartpointers::set_data(int data)
    {
       if( _ptr != nullptr)
       {
        _ptr = new int(data);
       }
       else
       {
        *_ptr = data;
       }
    }