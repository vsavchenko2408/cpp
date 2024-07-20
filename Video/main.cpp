#include <iostream>


int main()
{
for(int i=1; i<=10;i+=1)
{
    std::cout << "i: " << i << std::endl;
}

int count = 1;
while(count <= 10)
{
    std::cout << "count: " << count << std::endl; 
    count +=1;
}

int count_do = 1;
do
{
    std::cout << "count_do: " << count_do << std::endl; 
    count_do +=1;
}
while(count_do <= 10);


return 0;
}