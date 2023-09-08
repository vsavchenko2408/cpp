#include <iostream>
typedef unsigned short int ui;
using namespace std;

class car
{
public:
	car()
	{
		cout << "Input brand :";
		cin >> brand;
		cout << "Input model :";
		cin >> model;
		cout << "Input year :";
		cin >> year;
		cout << "Input color: ";
		cin >> color;
		speed = 0;
	}
	void speed_up()
	{
		ui value;
		cout << "Input value : ";
		cin >> value;
		speed += value;
	}
	void speed_down()
	{
		speed =- 10;
		if (speed < 0)
		{
			cout << "Car is stopped! " << endl;
			speed = 0;
		}
	}
	void get_info()
	{
		cout << brand << endl;
		cout << model << endl;
		cout << year << endl;
		cout << color << endl;
		cout << speed << endl;
	}
private:
	string brand;
	string model;
	int year;
	string color;
	ui speed;
};

int main()
{
	car car1;
	car1.speed_up();
	car1.speed_down();
	car1.speed_down();
	car1.speed_down();
	car1.speed_down();
	car1.speed_down();
	car1.speed_down();
	car1.speed_down();
	car1.get_info();
}