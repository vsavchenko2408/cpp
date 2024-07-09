/*Создайте класс Circle (круг) с приватным полем radius (радиус).
Реализуйте методы для вычисления площади и длины окружности.
Напишите программу, которая создает объекты Circle, запрашивая у пользователя значения радиуса,
и выводит их площади и длины окружности.
*/
#include <iostream>
using namespace std;
class circle
{
public:
	void set_data()
	{
		cout << "Input radius: " << endl;
		cin >> radius;
	}
	void area()
	{
		area1 = 3.1415 * (radius * radius);
	}
	void perimeter()
	{
		perimetr = 2 * 3.1415 * radius;
	}
	void get_data()
	{
		cout << "Radius :" << radius << endl;
		cout << "Area :" << area1 << endl;
		cout << "Perimeter :" << perimetr << endl;
	}
private:
	double radius;
	double area1;//It gave an error that it cannot because of the similar function name. That's why I added one to the title.
	double perimetr;
};


int main()
{
	circle c;
	c.set_data();
	c.area();
	c.perimeter();
	c.get_data();

	return 0;
}