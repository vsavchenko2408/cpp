#ifndef SMARTPOINTERS_H
#define SMARTPOINTERS_H

template<class T>
class SmartPointers
{
public:

    SmartPointers();

    SmartPointers(T& obj);
    ~SmartPointers();
    unsigned int show_cnt();
    T operator*();
    operator=(T& obj);
private:

static unsigned int count;
    T* ptr;

};

#endif // SMARTPOINTERS_H
