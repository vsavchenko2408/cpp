#ifndef ARRAY_Y
#define ARRAY_H
#include <cstddef>

template<typename T>
class Array
{
    size_t _SIZE;
    T* _ptr;
    public:
    Array() = default;
    Array(T& data, size_t size) : _SIZE(size)
    {
        _ptr = new T[_SIZE];
    }
    Array(const Array& copy):_SIZE(copy._SIZE)
    {
      if(copy._SIZE > 0)
      {
        _ptr = new T[copy._SIZE];
        for(int i = 0; i < _SIZE; ++i)
        {
            _ptr[i] = copy._ptr[i];
        }
      }
      else
      {
        _ptr = nullptr;
      }
    }
    void push_back(const T& data)
    {
        ++_SIZE;
        T* temp = new T[_SIZE+1];
        for(int i = 0; i < _SIZE; i++)
        {
            temp[i] = _ptr[i];
        }
        temp[_SIZE] = data;
        delete[] _ptr;
        _ptr = temp;
    }
    T& operator[](size_t index)
    {
        return _ptr[index];
    }
    T& at(size_t index)
    {
        if(index <= _SIZE)
        {
            return _ptr[index];
        }
        else
        {
            return nullptr;
        }
    }
    size_t size() const
    {
        return _SIZE;
    }
    
    ~Array()
    {
        delete[] _ptr;
    }
};

#endif