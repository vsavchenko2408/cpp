#include <iostream>
#include <vector>
using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main()
{
    setlocale(LC_ALL,"RU");
int size_vec=0;
cout << "??????? ?????? ???????: " << endl;
cin >> size_vec;

vector<int> MyVec;
for(int i=0;i<size_vec;i++)
{
    int tmp;
    cout << "???????? ?????: " << endl;
    cin >> tmp;
    MyVec.push_back(tmp);
}

    return 0;
}