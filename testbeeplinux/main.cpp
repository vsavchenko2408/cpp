#include <iostream>
#include <stdio.h>
#include <unistd.h>
void Beep(int Hz, int msec)
{
    fprintf(stderr,"\033[10;%d]\033[11;%d]\a", Hz, msec);
    usleep(msec*1000);
}
int main()
{
std::cout << "testcomplete\a" << std::endl; 
Beep(440, 1000);
    return 0;
}