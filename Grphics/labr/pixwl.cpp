#include<graphics.h>
int main()
 {
     int gd=DETECT,gm;
    initgraph(&gd,&gm," ");

circle(100,100,60);
ellipse(100,70,220,320,60,60);
arc(75,80,360,350,5);
arc(120,80,360,350,5);

    getch();
    closegraph();
}
