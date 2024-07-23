#include <iostream>
class A
{
int data;

public:

int get_data(){return data;}

void set_data(int _data){data = _data;}

A(int _data){data = _data;}
A(){}
~A(){}
};

class B
{
A a;

public:

B(int _data)
{
   set_data(_data);
}
int get_data()
{
    return a.get_data();
}

void set_data(int _data)
{
    a.set_data(_data);
}
};

int main()
{
B obj(15);

std::cout << obj.get_data() << std::endl;



    return 0;
}