#include<graphics.h>
int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm," ");
    bar(0,0,660,660);
    setcolor(1);
    circle(250,80,80);
    line(190,30,160,5);
    line(160,5,175,50);

    line(310,30,350,15);
    line(325,50,350,15);
    setcolor(5);
    circle(220,60,5);

    circle(220,60,15);//chosma
    line(190,30,205,60);
    circle(280,60,15);//chosma
    line(295,60,310,30);
    line(235,60,265,60);

    circle(280,60,5);
//mouth
     //line(230,120,265,120);

     //arc(247,120,0,180,10);

   ellipse(247,125,0,360,20,2);
   //ellipse(100,60,0,360,20,40);

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
