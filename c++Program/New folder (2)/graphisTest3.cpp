#include<iostream>
#include <graphics.h>
#include<conio.h>
using namespace std;
int main( )
{
    initwindow(400, 300, "First Sample");
    circle(100, 50, 40);
    while (!kbhit( ))
    {
        delay(200);
    }
    getch();
    return 0;
}
