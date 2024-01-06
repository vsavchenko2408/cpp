#include <iostream>
#include <memory>
#include <string>
#ifdef _WIN32
    #define CLEAR_SCREEN "cls"
#else
    #define CLEAR_SCREEN "clear"
#endif

void clearScreen() {
    system(CLEAR_SCREEN);
}

using std::string;
using std::cout;
using std::cin;
using std::endl;
template<typename T>

class SmartPointer
{
public:
SmartPointer(T *ptr)
{
this->ptr = ptr;
cout << "Constructor " << endl;
}

~SmartPointer()
{
    delete ptr;
    cout << "Destructor " << endl;
}

T& operator *()
{
    return *ptr;
}

private:
T *ptr;

};

int main()
{
     int SIZE = 5;
     int *arr = new int[SIZE] {4,6,2,8,9};
std::shared_ptr<int> ptr(arr);

cout << *ptr;

//clearScreen();
int a;
cin >> a;
    return 0;
}