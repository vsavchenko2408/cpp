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
            cout << map_arr[i][j] ;
        } 
        cout << "\n";
    }
}
void fill_map()
{
 for(int i = 0;i<VER;i++)
    {
    for(int j = 0;i<GOR;j++)
        {
           map_arr[i][j] = '#';
        } 
    }
}   

private:
 const int VER = 10;
 const int GOR = 10;
 char map_arr[VER][GOR];


};