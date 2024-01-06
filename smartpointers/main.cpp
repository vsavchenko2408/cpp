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
//SmartPointer<int> sp1 = new int(5);
//SmartPointer<int> sp2 = sp1;

//cout << *sp1 << endl;
//std::unique_ptr<int> up1(new int(5));
//std::unique_ptr<int> up2;
//up2.swap(up1);



clearScreen();
return 0;
}