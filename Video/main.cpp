#include <iostream>
#include <fstream>
using std::cin;
using std::cout;
using std::endl;

class Pointer
{
public:
  int x;
  int y;
  int z;
  Pointer() = default;
  Pointer(int x, int y, int z) : x(x), y(y), z(z) {}
  void show()
  {
    cout << "\tx: " << x << "\ty: " << y << "\tz: " << z << endl;
  }
};
int main()
{
  std::string path = "/home/master/cpp/Video/file.bin";
  Pointer ptr(13, 32, 18);
  std::ofstream ofile(path, std::ios_base::binary);
  if (!ofile.is_open())
  {
    std::cerr << "File not open!" << endl;
  }
  else
  {
    cout << "File open and write!" << endl;
    ofile.write((char *)&ptr, sizeof(Pointer));
  }
  ofile.close();
  
  Pointer iptr;
  std::ifstream ifile(path, std::ios_base::binary);
  ifile.read((char *)&iptr, sizeof(Pointer));
  iptr.show();
  ifile.close();
  return 0;
}
