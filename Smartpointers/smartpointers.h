
template <class T>
class SmartPointer
{
public:

SmartPointer()//Default constr
{
    ptr = nullptr;
}

SmartPointer(SmartPointer& obj)//Copy constr
{
this->ptr = obj.ptr;
}
template<class U>
SmartPointer(U& obj)
{
    this->ptr = &obj;
}
SmartPointer operator*()//оператор разыменования
{
    return *this;
}





~SmartPointer()//destructor
{
    delete ptr;
}

private:
T* ptr = new T;
};