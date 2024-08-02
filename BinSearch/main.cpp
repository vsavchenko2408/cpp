#include <iostream>
#include <random>
#include <vector>
using std::cin;
using std::endl;
using std::cout;

void fill_random(std::vector<int> &vec, const int SIZE);
void show(const std::vector<int> &vec);
void mysort(std::vector<int> &vec);
void binarysearch(std::vector<int> &vec, int srch);
//main 
int main()
{
    srand(time(NULL));
std::vector<int> vec;

fill_random(vec, 50);
show(vec);
mysort(vec);
cout << "Sorted!" << endl;
show(vec);


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

void binarysearch(std::vector<int> &vec, int srch)
{
   int half = vec.size() / 2;
    int left = 0;
    int right = 0;
do
{

}

}