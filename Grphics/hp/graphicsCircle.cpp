#include<iostream>
#include<graphics.h>
using namespace std;
void main()
{

int gdriver=DETECT,gmode;
initgraph(&gdriver,&gmode,"C:\TC\BGI");
circle(20,15,30);
getch();
closegraph();
}
