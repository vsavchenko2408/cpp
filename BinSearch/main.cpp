#include <iostream>
#include <random>
#include <vector>
using std::cin;
using std::endl;
using std::cout;

void fill_random(std::vector<int> &vec, const int SIZE);
void show(const std::vector<int> &vec);
void mysort(std::vector<int> &vec);
int binarysearch(std::vector<int> &vec, int srch);
//main 
int main()
{
    srand(time_t(NULL));
std::vector<int> vec;

fill_random(vec, 50);
show(vec);
mysort(vec);
cout << "Sorted!" << endl;
show(vec);
cout << "Input value for search: ";
int srch =0;
cin >> srch;
int found = binarysearch(vec, srch);
if(found == -1)
{
    cout << "value not found!" << endl;
}
else
{
cout << "Value found in: " << found << " index." << endl;
}

getchar();
    return 0;
}
/////////////////////////////////////////////////////////
void fill_random(std::vector<int> &vec, const int SIZE)
{
for(int i=0;i<(SIZE);++i)
{
    vec.emplace_back(rand()%999);
}
}

void show(const std::vector<int> &vec)
{
    for(auto x: vec)
    {
        cout << x << ", ";
    }
    cout << endl;
}
void mysort(std::vector<int> &vec)
{
for(int i=0;i<vec.size();++i)
{
    for(int j=0;j<vec.size();++j)
    {
        if(vec[i] < vec[j])
        {
            int temp = vec[i];
            vec[i] = vec[j];
            vec[j] = temp;
        }
    }    
}
}

int binarysearch(std::vector<int> &vec, int srch)
{
 
    int left = 0;
    int right = vec.size() - 1;

    while (left <= right) 
    {
    int mid = left + (right - left) / 2; // Уникаємо переповнення

        if (vec[mid] == srch) 
        {
            return mid; // Знайшли елемент, повертаємо його індекс
        }
        if (vec[mid] < srch) 
        {
            left = mid + 1; // Шукаємо в правій половині
        }
        else 
        {
            right = mid - 1; // Шукаємо в лівій половині
        }
    }

    return -1; // Елемент не знайдено


}