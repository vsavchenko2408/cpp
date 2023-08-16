#include <iostream>
using namespace std;

//измените класс на шаблон
template<typename T>
class Queue
{
private:
    T* arr;
    int size;
    int count;
public:
    Queue(int s) {
        arr = new T[size];
        count = 0;
    }
    void add(T elem) {
        if (count < size) {
            arr[count] = elem;
            count++;
        }
        else {
            cout << "Queue is full" << endl;
        }
};
    void get(int index) {
        if (index >= 0 && index < count) {
            cout << arr[index] << endl;
        }
        else {
            cout << "Invalid index" << endl;
        }
    }
};

int main()
{
    Queue<string> q(4);
    q.add("James");
    q.add("Andy");
    q.add("Amy");
    q.get(2);

    Queue <int> n(2);
    n.add(42);
    n.add(33);
    n.get(1);

    return 0;
}