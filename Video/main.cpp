#include <iostream>
#include <fstream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
  std::fstream file;
  file.open("MyFile.txt", std::ios::out | std::ios::app);

  std::string str = "some text!";
  if (!file.is_open())
  {
    std::cerr << "File not open!" << endl;
  }
  else
  {
    file << str;
  }

  file.close();
  return 0;
}
