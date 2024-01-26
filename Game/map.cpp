#include <iostream>

using std::cout;
using std::endl;
using std::cin;
class Map
{
public:
Map()
{
 map_arr = new char*[VER];
        for (int i = 0; i < VER; ++i)
        {
            map_arr[i] = new char[GOR];
        }

}
void draw_map()
{
for(int i = 0;i<VER;i++)
    {
    for(int j = 0;j<GOR;j++)
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
    for(int j = 0;j<GOR;j++)
        {
        if(j<=1 && j >=(GOR-1))
        {
            map_arr[i][j] = '#';
        }
        map_arr[i][j] = ' ';
        } 
    }
}   
~Map() {
        // Освобождение выделенной памяти при уничтожении объекта
        for (int i = 0; i < VER; ++i) {
            delete[] map_arr[i];
        }
        delete[] map_arr;
    }
private:
 const int VER = 10;
 const int GOR = 10;
 char** map_arr;


};