#include <iostream>

class MC
{
    int data;
public:
    MC(int data)
    {
        this->data = data;
    }
    MC(){data = 0;}
    void set_data(int data)
    {
        this->data = data;
    }
    void show_data()
    {
        std::cout << "Data: " << data << std::endl;
    }
    int get_data()
    {
        return data;
    }
};

void foo(MC &obj, int value)
{
    obj.set_data(value);
}
int main()
{
    MC a;
    //foo(a, 15);
    //a.show_data();
    std::cout << "Typeid: " << typeid(a).name() << std::endl;


    return 0;
}
