#include <iostream>
#include <fstream>
using std::cin;
using std::cout;
using std::endl;

class Point
{
public:
  int x;
  int y;
  int z;

  Point() {}
  Point(int x, int y, int z) : x(x), y(y), z(z) {}
  void show()
  {
    cout << "x: " << x << "\ty: " << y << "\tz: " << z << endl;
  }
  friend std::ostream& operator<<(std::ostream& os, const Point obj);
};

std::ostream& operator<<(std::ostream& os, const Point obj) 
{
  os << "x: " << obj.x << "\ty: " << obj.y << "\tz: " << obj.z << endl;
  return os;
}

std::istream& operator>>(std::istream& is, Point& obj)
{
  is >> obj.x >> obj.y >> obj.z;
  return is;
}


int main()
{
Point pt;
cin >> pt;
cout << pt;

std::ofstream ofile("file.txt");
ofile << pt;
ofile.close();



  return 0;
}
