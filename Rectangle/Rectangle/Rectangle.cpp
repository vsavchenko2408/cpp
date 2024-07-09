/*������� 1:
�������� ����� Rectangle (�������������) � ���������� ������ width (������) � height (������).
���������� ������ ��� ���������� ������� � ��������� ��������������.
�������� ���������, ������� ������� ������� Rectangle,
���������� � ������������ �������� ������ � ������, � ������� �� ������� � ���������.*/
#include <iostream>
using namespace std;

class rectangle
{
public:
	void set_data()
	{
		cout << "Input Width : " << endl;
		cin >> width;
		cout << "Input Height : " << endl;
		cin >> height;		
	}
	void get_data()
	{
		cout << "Width : " << width << endl;
		cout << "Height : " << height << endl;
	}
	int area()
	{
		int area = width * height;
		return area;
	}
	int perimetr()
	{
		int per = (width * 2) + (height * 2);
		return per;
	}
private:
	int width;
	int height;
};
int main()
{
	rectangle a;
	a.set_data();
	int area = a.area();
	int per = a.perimetr();
	cout << "Your rectangle have area : " << area << endl;
	cout << "And perimeter : " << per << endl;
	return 0;
}