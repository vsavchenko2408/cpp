#ifndef SMARTPTR_H
#define SMARTPTR_H

//template<typename T>
class Smartpointers
{
private:
    /* data */
    int* _ptr;
public:
    Smartpointers(int data);
    Smartpointers();
    Smartpointers(const Smartpointers& obj);
    Smartpointers& operator=(const Smartpointers& obj);
    ~Smartpointers();

    int get_data() const;
};


#endif