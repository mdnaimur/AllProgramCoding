#include<graphics.h>

int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm," ");
    rectangle(160,150,380,360);
   // setcolor(1);
    rectangle(180,170,360,340);
    ////  setcolor(2);
    rectangle(200,190,340,320);

     //setcolor(3);
    rectangle(220,210,320,300);
  //  setcolor(4);
    rectangle(240,230,300,280);
   // setcolor(5);
    rectangle(260,250,280,260);




    /*setcolor(10);
    line(10,400,800,400);
    line(10,10,10,400);*/
    getch();
    closegraph();
}
