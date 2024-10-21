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
};

int main()
{
Point pt(43,54,13);
std::string path = "/home/master/cpp/Video/File.bin";
std::ofstream ofile(path, std::ios_base::binary);
if(ofile.is_open())
{
  ofile.write((char*)&pt,sizeof(Point));
  cout << "File open and write!" << endl;
}
else
{
std::cerr << "Error! File not open!" << endl;
}
ofile.close();
///////////////
Point ptin;
std::ifstream ifile(path, std::ios::binary);
if(ifile.is_open())
{
  ifile.read((char*)&ptin,sizeof(Point));
  cout << "File open and read!" << endl;
}
else
{
  std::cerr << "Error! File not open and read!" << endl;
}
ptin.show();


ifile.close();
  return 0;
}
