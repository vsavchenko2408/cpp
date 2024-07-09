#define ML = MyLib
namespace MyLib
{

class MyClass
{
public:
MyClass();
MyClass(int _data);
~MyClass();

void set_data(int);
int get_data();

private:
int data;
};
}