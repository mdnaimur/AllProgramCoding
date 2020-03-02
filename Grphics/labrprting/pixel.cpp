#include<graphics.h>
#include<stdio.h>

void main( )
{
int gd = DETECT, gm;
initgraph(&gd, &gm, "C:\\TC\\BGI");
Putpixel(100,100,RED)
getch( );
closegraph( );
}
