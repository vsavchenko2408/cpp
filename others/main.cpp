#include <iostream>
//#include <vector>
#include <string>
using std::cout;
using std::endl;

bool solution(std::string const &str, std::string const &ending)
{
char pn_str, lst_str;
char pn_end, lst_end;
for(auto i = str.begin(); i != str.end();i++)
{
 pn_str = *i;
 lst_str = *(i-1);
}

  for(auto i = ending.begin(); i != ending.end();i++)
{
  pn_end = *i;
 lst_end = *(i-1);
}
if(ending.empty()){return true;}
  
  else if(pn_str == pn_end && lst_str == lst_end){ return true;}
  
    return false ;
  
    //return true;
}
int main() {

  cout <<   solution("hello", "") << endl;

    return 0;
}