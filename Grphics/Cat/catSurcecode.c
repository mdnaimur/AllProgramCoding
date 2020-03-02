#include<graphics.h>

int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm," ");


    bar(0,0,660,660);
    setcolor(12);

    circle(250,80,80);
    line(190,30,160,5);
   line(160,5,175,50);

line(310,30,350,15);
line(325,50,350,15);
     setcolor(5);

    circle(220,60,5);
    circle(280,60,5);

   //ellipse(230,120,0,140 ,10,10);
   arc(240,110,0,180,8);
   arc(255,110,0,180,8);

   line(230,100,100,100);
   line(230,105,100,130);
   line(230,110,100,160);

   line(265,100,365,100);
   line(265,105,365,130);
   line(265,110,365,160);


    getch();
    closegraph();
}
