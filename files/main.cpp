#include <iostream>
#include <fstream>
using std::cout;
using std::endl;
using std::cin;

int main()
{
srand(time_t(NULL));
const int N = 100;
int* arr_out = new int[N];

std::ofstream myfile("config.txt", std::ios_base::out);
//myfile.open("config.txt");

if(myfile.is_open())
    {
        cout << "File open!" << endl;
        //myfile << "Test" << endl;
    for(int i=0;i<N;i++)
        {
        arr_out[i] = rand()%999;
       
        myfile << arr_out[i] << endl;
        }
    }
else
{
   cout << "File is not open! " << endl;
}
delete[] arr_out;
myfile.close();
cout << "/////////////////////////// " << endl;

std::ifstream inputfile("config.txt");
int* arr_in = new int[N];

if(inputfile.is_open())
{
    cout << "File open for read to array! " << endl;
for(int i=0;i<N;i++)
{
    inputfile >> arr_in[i];
}
}
else
{
cout << "Unable to read file! " << endl;
}
inputfile.close();

for(int j=0;j<N;j++)
{
    cout << arr_in[j]<< endl;
}
delete[] arr_in;

    return 0;
}