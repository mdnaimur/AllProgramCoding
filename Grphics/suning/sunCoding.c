#include<graphics.h>

int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm," ");

    circle(260,220,100);

    //setcolor(4);
    line(80,220,160,220);
    line(360,220,440,220);

    line(260,120,260,40);
    line(260,320,260,400);

//setcolor(3);
    line(320,300,340,320);
    line(180,160,150,140);

    line(180,280,150,300);
    line(335,155,360,135);
    getch();

    closegraph();
}
