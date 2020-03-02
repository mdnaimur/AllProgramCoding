

//Geometrical drawing.
#include<iostream>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
#include<stdio.h>
#include<stdlib.h>


class data
{
  protected:
    int rad,radx,rady,x,y;

};

class bitto:public data
{

    public:
          void getrad()
          {cout<<"\ninput the radius for circle(example 100)";
           cin>>rad;
          }
        void cir();
};

void bitto::cir()
{
              int gdriver = DETECT, gmode, errorcode;
              int midx, midy;
              initgraph(&gdriver, &gmode, "c:\\tc\\bgi");
              errorcode = graphresult();
              if (errorcode != grOk)
              {
               printf("Graphics error: %s\n", grapherrormsg(errorcode));
               printf("Press any key to halt:");
               getch();
               exit(1);
              }

             midx = getmaxx()/2;
             midy = getmaxy()/2;
             setcolor(getmaxcolor());
              circle(midx, midy, rad);
              getch();
            closegraph();
}


   class por:public data
{
                public:
          void getrad()
          {
           cout<<"\ninput the radius for elipse for x axis and y axis\n";
           cin>>radx>>rady;
          }
          void pora();
};

void por::pora()
{
   int gdriver = DETECT, gmode, errorcode;
   int midx, midy;
   int stangle = 0, endangle = 360;
   initgraph(&gdriver, &gmode, "c:\\tc\\bgi");
   errorcode = graphresult();
   if (errorcode != grOk)
   {
      printf("Graphics error: %s\n", grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();
      exit(1);

   }
   midx = getmaxx() / 2;
   midy = getmaxy() / 2;
   setcolor(getmaxcolor());
   ellipse(midx, midy, stangle, endangle,
       radx, rady);
   getch();
   closegraph();
}


class rekha:public data
     {
      public:
       void getrad()
       {
        cout<<"\nEnter x & y for line first point\n";
        cin>>x>>y;
        cout<<"\nEnter x & y for line last point\n ";
        cin>>radx>>rady;
        }
       void cross_line();
      };

void rekha::cross_line()
{

   int gdriver = DETECT, gmode, errorcode;
   int maxx, maxy;
   initgraph(&gdriver, &gmode, "c:\\tc\\bgi");
   errorcode = graphresult();
   if (errorcode != grOk)
   {
      printf("Graphics error: %s\n", grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();
      exit(1);
   }
   line(x,y,radx,rady );
   getch();
   closegraph();
}


class conic:public data{
public:
  void getrad()
          {
           cout<<"\ninput the angles for conic for 1st angle and 2nd angle\n";
           cin>>radx>>rady;
           cout<<"\ninput the radius for conic\n";
           cin>>rad;
          }
   void coni();

};


void conic::coni(){
   int gdriver = DETECT, gmode, errorcode;
   int midx, midy;

   initgraph(&gdriver, &gmode, "c:\\tc\\bgi");


   errorcode = graphresult();
   if (errorcode != grOk)
   {
      printf("Graphics error: %s\n", grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();
      exit(1);
   }

   midx = getmaxx() / 2;
   midy = getmaxy() / 2;

   setfillstyle(EMPTY_FILL, getmaxcolor());
   pieslice(midx, midy, radx, rady, rad);

   getch();
    closegraph();
}



class jaa:public data{
public:
  void getrad()
          {
           cout<<"\ninput the angles for arc for 1st angle and 2nd angle\n";
           cin>>radx>>rady;
           cout<<"\ninput the radius for arc\n";
           cin>>rad;
          }
   void ja();

};


void jaa::ja(){
   int gdriver = DETECT, gmode, errorcode;
   int midx, midy;

   initgraph(&gdriver, &gmode, "c:\\tc\\bgi");


   errorcode = graphresult();
   if (errorcode != grOk)
   {
      printf("Graphics error: %s\n", grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();
      exit(1);
   }

   midx = getmaxx() / 2;
   midy = getmaxy() / 2;

   setfillstyle(EMPTY_FILL, getmaxcolor());
   arc(midx, midy, radx, rady, rad);

   getch();
    closegraph();
}


class rect:public data{
public:
       void getrad()
       {
        cout<<"\nEnter left, top,right,bottom for rectangle\n";
        cin>>x>>y>>radx>>rady;
        }
     void rec();
}  ;

void rect::rec(void)
{
   int gdriver = DETECT, gmode, errorcode;
   initgraph(&gdriver, &gmode, "c:\\tc\\bgi");
   errorcode = graphresult();
   if (errorcode != grOk)
   {
      printf("Graphics error: %s\n", grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();
      exit(1);
   }
   rectangle(x,y,radx,rady);
   getch();
   closegraph();
}

void day()
{
 struct date d;
 int i,j;
 clrscr();
 getdate(&d);
 i=d.da_day;
 j=d.da_mon;
 cout<<"\nDATE:"<<i;
 cout<<":"<<j;
 cout<<":"<<d.da_year;
 }
void somoy(){
   int i,j,k;
   struct  time t;

   gettime(&t);
   i=t.ti_hour;
   j=t.ti_min;
   k=t.ti_sec;

   cout<<"\t\t\t\t\t\t\tTIME:"<<i<<":"<<j<<":"<<k<<"\n";

}


int main()
{

 clrscr();
 bitto c;
 por p;
 rekha l;
 conic co;
 jaa j;
 rect r;
 int a;

 while(1)
 {  textcolor(4);
 cout<<"\n\n\t";
 delay(2000);
 cprintf("");
 day();
 somoy();
 cout<<"\t";
 cprintf("..............WELCOME IN GEOMATRICAL DRAWING............") ;

 delay(100);
 cout<<endl<<endl;
 cout<<"\nEnter choice:";
 delay(100);
 cout<<"\n1.Circle";
  delay(100);
 cout<<"\n2.Ellipse" ;
  delay(100);
 cout<<"\n3.Line";
  delay(100);
 cout<<"\n4.Conic";
  delay(100);
 cout<<"\n5.Arc";
  delay(100);
 cout<<"\n6.Rectangle";
  delay(100);
 cout<<"\n7.Exit\n";

 cin>>a;
 clrscr();
 switch(a)
 {
  case 1:
      c.getrad();
      clrscr();
      c.cir();
      break;
  case 2:
     p.getrad();
     clrscr();
     p.pora();
     break;
   case 3:
     l.getrad();
     clrscr();
     l.cross_line();
     break;
   case 4:co.getrad();
      clrscr();
      co.coni();
    break;
    case 5:
        j.getrad();
        clrscr();
        j.ja();
     break;
     case 6:
       r.getrad();
       clrscr();
        r.rec();
        break;
      case 7:
        break;
   }
   if(a==7)
   break;
   }
   getch();
   return 0;
}


