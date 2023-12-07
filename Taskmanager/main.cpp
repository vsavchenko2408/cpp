#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::cin;
using std::vector;


class Tasks
{
    public:
    Tasks()
    {
        cout << "Enter Name: " ;
        cin >> name;
        status = false;
    }
void new_task(std::string nm,bool st)
    {
    name = nm;
    status = st;
    }
void show_tasks()
    {
    cout << "Task : " << name << endl;
    cout << "Complete status: " << status << endl;
    }   
private:
std::string name;
bool status;
};







int main()
{
    vector<Tasks> VecTask;
VecTask.push_back(Tasks());
//VecTask.push_back(Tasks::new_task("Buy food", false));
    std::cout << "Everything is OK!" << std::endl;
    return 0;
}