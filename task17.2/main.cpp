#include <iostream>
#include <random>
using std::cout;
using std::endl;
using std::cin;

int main()
{
srand(time(NULL));
int arr[9];
for(int i=0;i<9;i++)
{
    arr[i] = rand()%100;
}
for(int j=0;j<9;j++)
{
    cout << arr[j] << " " ;
}
cout << endl;
cout << "#########################" << endl;

int min=0;
int max=0;
for(int k=0;k<9;k++)
{
    for(int l=0;l<9;l++)
    {
        if(arr[k] > arr[l])
        {
            min = arr[l];
        }
        /*
        else if(arr[l] > arr[k])
        {
            max = arr[l];
        }
        */
    }
}
cout << "Min = " << min << endl;
//cout << "Max = " << max << endl;

    return 0;
}