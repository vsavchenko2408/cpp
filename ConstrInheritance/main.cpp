#include <iostream>

using std::cout;
using std::endl;

class A
{
protected:
    int data_a;
public:
    A(int a)
    {
        data_a = a;
    }
    int get_data_a()
    {
        return data_a;
    }
};
class B : public A
{
    int data_b;
public:
    B(int a, int b) : A(a)
    {
        data_b = b;
    }
    int get_data_b()
    {
        return data_b;
    }
};

int main()
{
    B obj_b(5,3);
    cout << obj_b.get_data_b() << endl;
    cout << obj_b.get_data_a() << endl;

    return 0;
}
