#include <iostream>
#include <fstream>
using std::cout;
using std::endl;
using std::cin;

int main()
{
srand(time_t(NULL));
const int N = 100;
int* arr = new int[N];

std::ofstream myfile("config.txt");
myfile.open("config.txt");
//std::ofstream myfile("config.txt");
if(myfile.is_open())
    {
        cout << "File open!" << endl;
    for(int i=0;i<N;i++)
        {
        arr[i] = rand()%999;
        myfile << arr[i] << endl;
        }
    }
else
{
   cout << "File is not open! " << endl;
}
myfile.close();
cout << "File is close " << endl;

delete[] arr;
    return 0;
}