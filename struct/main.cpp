#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
struct coor
{
    void showcoor()
    {
        cout << "X = " << x; 
        cout << " Y = " << y << endl;
    }
int x;
int y;
};
struct human
{
void info()
{
cout << "Name: " << name << endl;
cout << "Age: " << age << endl;
cout << "Weight: " << weight << endl;
cout << "Height: " << height << endl;
cout << "ID:" << id << endl; 
cout << "Coordinades: ";
xy.showcoor();
}


string name;
unsigned int age;
unsigned int weight;
unsigned int height;
int id = 100;
coor xy;
};

int main()
{

human man;
man.name = "Ivan";
man.age = 19;
man.height = 180;
man.weight = 90;
man.xy.x = 5;
man.xy.y = 6;

man.info();
cout << endl;
cout << endl;
human woman;
woman.name = "Maria";
woman.age = 20;
woman.height = 165;
woman.weight = 55;
woman.info();

    return 0;
}