#include <iostream>
#include <vector>
using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main()
{
vector<int> MyVec;
cout << "Заполните массив: " << endl;
cout << "Ввод нуля закончит ввод!" << endl;
int val=0;
int count =0;
do
{
cin >> val;
if(val==0) break;
MyVec.push_back(val);
count++;
}
while(val != 0);
/////////////////////////////
int min=MyVec[1];
for(int i=0;i<count;i++)
{
    //cout << MyVec[i] << " ";
    if(MyVec[i] < min) min = MyVec[i];
}
cout << "Минимальное введенное значение в массив = " << min << endl;

    return 0;
}