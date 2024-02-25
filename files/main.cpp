#include <iostream>
#include <fstream>
#include <random>

using std::cout;
using std::endl;
using std::cin;

int main()
{
    srand(time(NULL));
const int N = 50;
int* arr = new int[N];

std::ifstream file;
file.open("file.txt");
if(file.is_open())
{
    cout << "File is open!" << endl;
    for(int i=0;i<N;i++)
    {

       file >> arr[i];
        cout << arr[i] << endl;
    }
}
else
{
std::cerr << "File not found" << endl; 
}
file.close();


std::ofstream newfile;
newfile.open("newfile.txt");
if(newfile.is_open())
{
    cout << "File is open! " << endl;
for(int i=0;i<N;i++)
{
    newfile << arr[i] << endl;
}
}
else
{
std::cerr << "File corrupt!" << endl;
}

<<<<<<< HEAD
for(int j=0;j<N;j++)
{
    cout << arr_in[j]<< endl;
}
delete[] arr_in;
getchar();
=======
newfile.close();

delete[] arr;
>>>>>>> d7342ef92e020d9c9b06244df2a59de1febbfd68
    return 0;
}