#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{

#ifdef linux
cout << "Linux" << endl;
#elif WIN32
cout << "Windows" << endl;
#elif macos
cout << "MacOS" << endl;

#endif

#ifdef WIN32
system("pause");
#endif
  return 0;
}
