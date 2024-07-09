#include <iostream>
#include <algorithm>
using std::cout;
using std::cin;
using std::endl;
using std::sort;
int main()
{
int size =0;
cout << "Введите размер массива: " << endl;
cin >> size;
int arr[size];
cout << "Введите элементы массива: " ;
for(int i=0;i<size;i++)
{
    cin >> arr[i];
}
sort(arr, arr+size);
cout << "Оригинальный отсортированный массив: " << endl;
for(int j=0;j<size;j++)
{
    cout <<arr[j] << " " ;
}
cout << endl << "########################################" << endl;
int new_arr[size];
int count=0;//счетчик для разделения массива
//четные влево массива
for(int k=0;k<size;k++)
{
if(arr[k]%2 == 0)
{
new_arr[count] = arr[k];
count++;
}
}
//нечетные вправо
for(int l=0;l<size;l++)
{
    if(arr[l]%2 != 0)
    {
    new_arr[count] = arr[l];
    count++;
    }
}
cout << endl << "########################################" << endl;
//Вывод отсортированного массива как задано
cout << "Отсортированный массив: " << endl;
for(int j=0;j<size;j++)
{  
    cout <<new_arr[j] << " " ;
}
cout << endl << "########################################" << endl;
    return 0;
}