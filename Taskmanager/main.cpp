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
    ~Tasks()
    {
    cout << "Destructor" << endl;
    }
    Tasks(std::string nm,bool st)
    {
    name = nm;
    status = st;
    }
void complete_task()
{
    if(!status)
    status = true;
    else
    cout << "Task was complete! " << endl;
}
void del_task()
{
    Tasks::~Tasks();
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
cout << "\t\tПрограмма Список задач." << endl;
cout << "\tВведите действие: " << endl;
cout << "1. Добавить новую задачу " << endl;
cout << "2. Пометить задачу как выполненную " << endl;
cout << "3. Вывести список задач " << endl;
cout << "4. Удалить выполенные задачи " << endl;
cout << "0. Выход из программы " << endl;


int action;
switch (action)
{
    case 1:
        VecTask.push_back(Tasks());
        break;
    case 2:
        cout << "Введите номер задачи: " << endl;
        int task;
        cin >> task;
        VecTask[task].complete_task();
        break;
    case 3:
        for(int i=0; i < VecTask.end(); i++)
        {
        cout << VecTask[i].show_tasks() << endl;
        }


default:
    break;
}






    /*
VecTask.push_back(Tasks());
VecTask[0].complete_task();
VecTask[0].show_tasks();
VecTask[0].del_task();
//VecTask.push_back(Tasks::new_task("Buy food", false));
    std::cout << "Everything is OK!" << std::endl;
    */
    return 0;
}