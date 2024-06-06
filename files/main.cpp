#include <iostream>
#include <fstream>
#include <random>
#include <ctime>
#include <algorithm>
using std::cout;
using std::endl;
using std::cin;

int main()
{
    srand(time(NULL));
const int N = 50;                                                //размер массива
int* arr = new int[N];                                           //выделение памяти




std::ofstream createfile("file.txt");   
createfile.open("file.txt");

if(createfile.is_open())
{
    for(int i=0;i<N;i++)
    {
        arr[i] = rand()%99;
    }
}
else
{
    cout << "Can't created File!" << endl;
    system("pause");
    exit(404);
    
}

createfile.close();




std::ifstream file;                                              //создание объекта который открывает файл
file.open("file.txt");                                           //открытие файла
if(file.is_open())                                              //проверка если файл открылся то выводим сообщение и заполняем массив последовательными числами из файла
{
    cout << "File is open!" << endl;
    for(int i=0;i<N;i++)
    {

       file >> arr[i];
        cout << arr[i] << " " ;
    }
    cout << endl;
}
else
{
std::cerr << "File not found" << endl; 
}
file.close();                                                       //закрытие файла

std::sort(arr, arr+N);
cout << "Sorted!" << endl;

std::ofstream newfile;                                              //создание нового файла 
newfile.open("newfile.txt");
if(newfile.is_open())
{
    cout << "File is open! " << endl;
for(int i=0;i<N;i++)                                                //запись в новый файл массива

{
    newfile << arr[i] << endl;
    cout << arr[i] << " ";
}
cout << "\n";
}
else
{
std::cerr << "File corrupt!" << endl;
}

newfile.close();                                                     //закрытие нового файла
cout << "File closed!" << endl;
delete[] arr;                                                          //освобождение выделенной памяти

system("pause");
    return 0;
}