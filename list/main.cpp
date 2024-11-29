#include <iostream>
template<class T>
class List
{
private:
//////////
    template <class U>
    class Node
    {
    public:
        Node* pNext;
        U data;
        Node(U data =U() , Node *pNext = nullptr): data(data), pNext(pNext)
        {

        }
        ~Node(){}

    };
    //////////////////

    size_t SIZE;
    Node<T> *head;
public:
    List()
    {
        SIZE = 0;
        head = nullptr;
    }
    ~List(){}
    size_t getsize()
    {
        return SIZE;
    }
    void push_back(T data)
    {
    if(head == nullptr)
        {
            head = new Node<T>(data);
        }
    else
        {
        Node<T> *temp = this->head;
            while(temp->pNext != nullptr)
            {
            temp = temp->pNext;
            }
            temp->pNext = new Node<T> (data);
        }
        SIZE++;
    }
    T& operator[](const int index)
    {
        size_t count = 0;
        Node<T> *temp = this->head;
        while(temp!=nullptr)
        {
            if(count == index)
            {
                return temp->data;
            }
            temp = temp->pNext;
            count++;
        }

    }
    T operator*()
    {
        return head->data;
    }
};




int main()
{
    List<int> lst;
    lst.push_back(15);
    lst.push_back(4);


    std::cout << lst[1] << std::endl;
    return 0;
}
