#include<graphics.h>
#include<stdio.h>
#include<conio.h>

main()
{
int gd = DETECT, gm;
initgraph(&gd, &gm, "C:\\TC\\BGI");
line(100,100,200,200);
getch();
closegraph();
}
