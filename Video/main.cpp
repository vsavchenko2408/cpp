#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::cin;
using std::string;

class A
{
int SIZE;
int* arr = new int[SIZE];

public:
A(){}
A(int* _arr, int N)
{
     SIZE = N; 
  arr = _arr;
  
}
void show_data()
{
    cout << "Size: " << SIZE << endl;

    for(size_t i=0; i<=SIZE;++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}


~A()
{
    delete[] arr;
    arr = nullptr;
}


};

void foo()
{
int b;

}

int main()
{
    int N = 5;
    int array[N] = {4,7,3,5,1};

    A a(array, N);
    a.show_data();

    return 0;
}

