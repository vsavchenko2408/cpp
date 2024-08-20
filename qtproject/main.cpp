#include <iostream>

using std::cout;
using std::endl;
using std::cin;

class A
{
    int data;
public:
    A(){data =0;}
    A(int data){this->data = data;}
    void set_data(int data) {this->data = data;}
    int get_data(){return data;}
    void show_data(){cout << data << endl;}
};
class B: public A
{
public:
    B(){};

    B(int data) : A(data) {}

};

int main()
{
    B b;
    b.set_data(15);
    cout << "Data: " << b.get_data() << endl;
    return 0;
}
