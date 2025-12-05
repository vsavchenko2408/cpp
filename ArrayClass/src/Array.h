#ifndef ARRAY_H
#define ARRAY_H

template <typename T>
class Array
{
    private:
    T* _array;
    const unsigned int _size;
    public:
    Array(): _size(0)
    {
        _array = nullptr;
    }
    Array(const unsigned int size): _size(size)
    {
        _array = new T[_size];
    }
    Array(const Array& other): _size(other._size)
    {
        _array = new T[_size];
        for(unsigned int i = 0; i < _size; i++)
        {
            _array[i] = other._array[i];
        }
    }
    T& operator[](unsigned int index)
    {
        return _array[index];
    }
    
    unsigned int get_size()
    {
        return _size;
    }
    ~Array()
    {
        delete[] _array;
    }
};
#endif