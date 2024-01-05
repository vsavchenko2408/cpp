#include <iostream>
#include <random>
using std::cout;
using std::endl;
using std::cin;

int main()
{
srand(time_t(NULL));
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
int count_min=0;
int count_max=0;
int min=arr[0];
int max=arr[0];
for(int l=0;l<9;l++)
{
        if(arr[l] < min)
        {
            min = arr[l];
            count_min = l;
        }
        if(arr[l]>max)
        {
            max = arr[l];
            count_max = l;
        }
}

cout << "Min = " << min << " " << count_min << endl;
cout << "Max = " << max << " " << count_max << endl;
std::swap(arr[count_max], arr[count_min]); 
cout << endl;
cout << "#########################" << endl;
for(int j=0;j<9;j++)
{
    cout << arr[j] << " " ;
}
cout << endl;
cout << "#########################" << endl;
    return 0;
}