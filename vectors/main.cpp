#include<iostream>
#include <vector>
#include <string>
using std::vector;
using std::cout;
using std::cin;
using std::endl;

int main()
{


vector<float> MyVector(15);
 MyVector.reserve(100); 
for(int i=0;i<MyVector.size();i++)
{
MyVector[i] = i;
}
for(int j=0;j<MyVector.size();j++)
{
    cout << MyVector[j] << endl;
} 





 return 0;
}
