#include<graphics.h>

int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm," ");

    circle(260,200,100);
    //setcolor(1);
    circle(260,200,80);
  //  setcolor(2);
    circle(260,200,60);

    //setcolor(3);
    circle(260,200,40);
   // setcolor(4);
    circle(260,200,20);
    getch();
    closegraph();
}
