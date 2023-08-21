/*
—оздайте класс Vector, представл€ющий вектор в трехмерном пространстве. 
–еализуйте методы дл€ сложени€, вычитани€ и скал€рного произведени€ векторов,
а также метод дл€ вычислени€ длины вектора.
*/
#include <iostream>
using namespace std;

class MyVector
{
public:
	void set_coor(int x, int y , int z)
	{
		this->x = x;
		this->y = y;
		this->z = z;
	}
	void get_coor()
	{
		cout << "Coordinates: " << endl;
		cout << "X = " << x << endl;
		cout << "Y = " << y << endl;
		cout << "Z = " << z << endl;
	}
	void addition(const MyVector& obj1, const MyVector& obj2)
	{
		int x =obj1.x + obj2.x;
		int y = obj1.y + obj2.y;
		int z = obj1.z + obj2.z;
		cout << x << endl << y << endl << z << endl;
	}
	void subtraction(const MyVector& obj1, const MyVector& obj2)
	{
		int x = obj1.x - obj2.x;
		int y = obj1.y - obj2.y;
		int z = obj1.z - obj2.z;
		cout <<  x << endl << y << endl << z << endl;
	}
	void product(const MyVector& obj1, const MyVector& obj2)
	{
		int x = obj1.x * obj2.x;
		int y = obj1.y * obj2.y;
		int z = obj1.z * obj2.z;
		cout << x << endl << y << endl << z << endl;
	}

private:
	int x, y, z;
};
int main()
{

	MyVector first;
	first.set_coor(3,13,8);
	MyVector second;
	second.set_coor(2, 15, 6);
	first.addition(first,second);
	first.subtraction(first, second);
	first.product(first, second);
	first.get_coor();
	second.get_coor();
		return 0;
}
