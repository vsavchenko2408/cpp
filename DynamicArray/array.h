#ifndef ARRAY_H
#define ARRAY_H
#include <cstddef>


template<typename T>
class Array
{
    T* _array;
    size_t _size;
    public:
    Array()
    {
        _size = 0;
        _array = new T[_size];
    }
    Array( size_t size) : _size(size)
    {
        _array = new T[_size];
    }
    Array(const Array& copy)
    {

        if(copy._size > 0)
        {
            _size = copy._size;
            _array = new T[_size];
            for(size_t i = 0; i < _size; ++i)
            {
                _array[i] = copy._array[i];
            }
        }
        else
        {
            _array = nullptr;
        }
    }
    Array& operator=(const Array& copy)
    {
        if(_array != copy._array && copy._size > 0)
        {
            this->_size = copy._size;
            this->_array = new T[_size];
            for(size_t i = 0; i < _size; ++i)
            {
                this->_array[i] = copy._array[i];
            }
        }
        return *this;
    }
    T& operator[](size_t index) const
    {
        return _array[index];
    }

    void push_back(const T& obj)
    {
        T* temp = new T[_size+1];
        for(size_t i = 0; i < _size; ++i)
        {
            temp[i] = _array[i];
        }
        temp[_size] = obj;
        delete[] _array;
        _array - temp;
        ++_size;
    }

    size_t size()const
    {
        return _size;
    }
    ~Array()
    {
        delete[] _array;
    }
};

#endif