#include <iostream>
 using std::cout;
 using std::endl;

int main()
{
int arr[5][5][5];

for(int i=0;i<5;i++)
{
    for(int j=0;j<5;j++)
    {
        for(int k=0;k<5;k++)
        {
        arr[i][j][k] = j;
        }
    }
}

for(int i=0;i<5;i++)
{
    for(int j=0;j<5;j++)
    {
        for(int k=0;k<5;k++)
        {
      cout <<  arr[i][j][k];
        }
        cout << endl;
    }
    cout << endl;
}


    return 0;
}