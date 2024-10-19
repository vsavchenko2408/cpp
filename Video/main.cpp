#include <iostream>
#include <fstream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
  ///////////
  std::ofstream ofile("MyFile.txt");
  std::string ostr = "some text!";
  if (!ofile.is_open())
  {
    std::cerr << "File not open for write!" << endl;
  }
  else
  {
    cout << "File opened and write!" << endl;
    ofile << ostr;
  }
  ofile.close();
  ////////////
  std::ifstream ifile("MyFile.txt");
  // std::string istr;
  char c;
  char str[50];
  int count = 0;
  if (!ifile.is_open())
  {
    std::cerr << "File nor open for read!" << endl;
  }
  else
  {
    cout << "File opened and read!" << endl;
    while (ifile.get(c))
    {
      str[count] = c;
      count++;
    }
    str[count] = '\0';
    //  std::getline(ifile, istr);
  }
  cout << str << "\n";
  // cout << istr << endl;
  ifile.close();
  return 0;
}
