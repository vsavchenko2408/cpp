#include <iostream>
using std::cin;
using std::cout;
using std::endl;

class Singletone
{

    static Singletone *ptr_instance;
    Singletone() = default;

public:
    Singletone(const Singletone &) = delete;
    Singletone operator=(const Singletone &) = delete;
    ~Singletone() = default;
    static Singletone *get_instance()
    {
        if (ptr_instance == nullptr)
        {
            ptr_instance = new Singletone();
        }
        return ptr_instance;
    }
};

Singletone *Singletone::ptr_instance = nullptr;

int main()
{
    Singletone *ptr = Singletone::get_instance();
    cout << "Adress: " << &ptr << endl;
    delete ptr;
    return 0;
}