#include "smartpointers.h"

template<class T>
SmartPointers<T>::SmartPointers()
{
    if(count !=0) ++count;
    else count =0;
    ptr = nullptr;
}


template<class T>
SmartPointers<T>::SmartPointers(T& obj)
{
    if(count !=0) ++count;
    else count =0;
    *ptr = &obj;
}

template<class T>
SmartPointers<T>::~SmartPointers()
{
    if(count >0) --count;
    else
    delete ptr;
}

template<class T>
T SmartPointers<T>::operator *()
{

    return *ptr;
}

template<class T>
void SmartPointers<T>::operator=(T& obj)
{
    {
    if(count !=0) ++count;
    else count =0;
    }
    this.ptr = obj.ptr;
    
}



template<class T>
unsigned int SmartPointers<T>::show_cnt()
{
    return count;
}
