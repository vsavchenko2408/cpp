#pragma once
#include <iostream>

using std::cout;
using std::endl;
using std::cin;

class Map
{
public:
Map()
{


}
void draw_map()
{
for(int i = 0;i<VER;i++)
    {
    for(int j = 0;i<GOR;j++)
        {
            cout << "#" ;
        } 
        cout << "\n";
    }
}
private:
const int VER = 10;
const int GOR = 10;
char arrmap[][];


};