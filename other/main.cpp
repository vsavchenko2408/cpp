#include <iostream>
#include <chrono>
#include <thread>
using namespace std;

const unsigned int COL = 10;
const unsigned int ROW = 10;

void fillarr(char arr[COL][ROW])
{
    for (size_t i = 0; i < COL; ++i)
    {
        for (size_t j = 0; j < ROW; ++j)
        {
            arr[i][j] = ' ';
        }
    }
}

void draw(char arr[COL][ROW])
{
    cout << "\033[1;1H";
    for (size_t i = 0; i < COL; ++i)
    {
        for (size_t j = 0; j < ROW; ++j)
        {
            cout << arr[i][j];
        }
        cout << endl;
    }
}

void run(char arr[COL][ROW])
{
    for (size_t i = 0; i < COL; ++i)
    {

        for (size_t j = 0; j < ROW; ++j)
        {
            arr[j][i] = '*';
            std::this_thread::sleep_for(chrono::milliseconds(100));
            draw(arr);
            arr[j][i] = ' ';
        }
    }
}
int main()
{

    char arr[COL][ROW];
    while (true)
    {
        fillarr(arr);
        std::cout << "\033[2J\033[1;1H";
        run(arr);
    }
    return 0;
}
