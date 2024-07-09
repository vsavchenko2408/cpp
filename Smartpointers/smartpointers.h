#ifndef SMARTPOINTERS_H
#define SMARTPOINTERS_H
#include <iostream>
static unsigned int count = 0;
template <class T>
class SmartPointer
{
public:

SmartPointer()//Default constr
{
    
    ++count;
   
    ptr = nullptr;
}

SmartPointer(T* obj)//constr with arg
{
   
   ++count;
   
    ptr = obj;
}

SmartPointer(SmartPointer& obj)//Copy constr
{
    ++count;
    
this->ptr = obj.ptr;
}

void show()
{
std::cout << *ptr << std::endl;
}

SmartPointer operator*()//оператор разыменования
{
    return *this;
}

SmartPointer operator->()//оператор доступа
{
    return this;
}

SmartPointer operator++()//operator++
{
++(*ptr);
return *this;
}

SmartPointer operator++(T)
{
T temp = *ptr;
(*ptr)++;
return *this;
}

SmartPointer operator--()//operator++
{
--(*ptr);
return *this;
}

SmartPointer operator--(T) // operator --
{
T temp = *ptr;
(*ptr)--;
return *this;
}

bool operator==(const SmartPointer& obj)//operator ==
{
    if(this->ptr==obj.ptr)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool operator!=(const SmartPointer& obj)//operator !=
{
    if(this->ptr!=obj.ptr)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool operator<(const SmartPointer& obj)//operator <
{
    if(this->ptr<obj.ptr)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool operator>(const SmartPointer& obj)//operator >
{
    if(this->ptr>obj.ptr)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void show_count()
{
    std::cout << "Count: " << count << std::endl;
}

~SmartPointer()//destructor
{
    if(count != 0)
    {
    --count;
    }
    else
    {
       delete ptr;
    }
}

private:

T* ptr = new T;
};



#endif