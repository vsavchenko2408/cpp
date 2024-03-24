#include <iostream>
#include <cinttypes>
#include <string>
using std::cout;
using std::endl;


int descendingOrder(int a)
{
int arr[10];
for(int i=1;i<100;i+10)
{
  arr[i] = (a/i);
}


 for(int j=0;j<10;j++)
 {
  cout << arr[j] << " " ;
 } 
  
  return 0;
}

int main() {

descendingOrder(123456789);

    return 0;
}