#include <iostream>
#include <vector>

class Tasks
{
    public:
void new_task(std::string nm,bool st)
    {
    name = nm;
    status = st;
    }




private:
std::string name;
bool status;
};







int main()
{
    std::cout << "Everything is OK!" << std::endl;
    return 0;
}