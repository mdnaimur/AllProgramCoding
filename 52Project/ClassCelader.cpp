#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

/*********************Make a class calender*******************/
class calender
{
private:
    int day;
    int dgap;
public:
    void makearray(char path[20],int a[20][20]);
    void drawdigit(int b[20][20],int x,int y);
    void drawcal();
    int ly(int year);
    int findgap(int year,int month);
    int daycount(int year,int month);
    void putdigit(int dgap,int count,int month,int year);

}; //end of class

/*********************Make array for ten digit*******************/

void calender :: makearray(char path[20],int a[20][20])
{
   FILE *in;
   int c,i=0,j=0;
   //clrscr();
   if ((in =fopen(path, "r"))
       == NULL)
   {
      fprintf(stderr, "Cannot open input file.\n");
      exit(0);
   }

   while (!feof(in))
   {
      c=fgetc(in);
      if(c==' ') continue;
      if(c=='\n') continue;
      a[i][j]=c-48;
      j++;
      if(j==20)
      {
    i=i+1;
    j=0;
      }
   }

   /*  for(i=0;i<20;i++)
        {
        for(j=0;j<20;j++)
            {
            printf("%d",a[i][j]);
            }
        printf("\n");
        }
   */
   fclose(in);
}

/*******************Draw digit from the arry**********************/

void calender :: drawdigit(int b[20][20],int x,int y)
{
    int i,j;
    int oldx=x;
    b[0][0]=0;
    for(i=0;i<20;i++)
    {
    for(j=0;j<20;j++)
    {
        if(b[i][j]==0)
        {
            x++;
        }
        else
        {
            putpixel(x,y,5);
            x++;
        }

    }
    y++;
    x=oldx;
   }
}

/*********************Draw a calender by graphics******************/

void calender :: drawcal()
{
    rectangle(20,50,615,320);

    line(20,95,615,95);
    line(20,140,615,140);
    line(20,185,615,185);
    line(20,230,615,230);
    line(20,275,615,275);

    line(105,50,105,320);
    line(190,50,190,320);
    line(275,50,275,320);
    line(360,50,360,320);
    line(445,50,445,320);
    line(530,50,530,320);

    outtextxy(50,70,"SAT");
    outtextxy(135,70,"SUN");
    outtextxy(220,70,"MON");
    outtextxy(305,70,"TUE");
    outtextxy(390,70,"WED");
    outtextxy(475,70,"THU");
    outtextxy(560,70,"FRI");
 }

/*************************Find leap year********************/

int calender :: ly(int year)
{
    if(year%400==0||year%100!=0&&year%4==0)
        return 1;
    else
        return 0;
}

/*********************Find standard day gap********************/

int calender :: findgap(int year,int month)

{
   int i;
   day=0;dgap=0;
   if(year>=2004)
    {
    for(i=2004;i<year;i++)
        {
            if (ly(i))
                day=day+366;
            else
                day=day+365;
        }
        for(i=1;i<month;i++)
        {
            switch(i)
            {
                case 4:
                case 6:
                case 9:
                case 11:
                    day=day+30;
                    break;
                case 1 :
                case 3 :
                case 5 :
                case 7 :
                case 8 :
                case 10:
                case 12:
                    day=day+31;
                    break;

                default:
                    if(ly(year))
                        day=day+29;
                    else
                        day=day+28;
            }


        }
    //printf("day=%d\n",day);
    dgap=day%7;
    }
   else
   {
   for(i=2004;i>year+1;i--)
    {
    if (ly(i))
        day=day+366;
    else
        day=day+365;
    }
    if(year<2003)
    day=day-1;

    for(i=12;i>=month;i--)
    {
    switch(i)
        {
        case 4:
        case 6:
        case 9:
        case 11:
              day=day+30;
              break;
        case 1 :
        case 3 :
        case 5 :
        case 7 :
        case 8 :
        case 10:
        case 12:
             day=day+31;
             break;

        default:
             if(ly(year))
                day=day+29;
             else
                day=day+28;
    }



    }
    //printf("day= %d",day);
    dgap=day%7;
    dgap=7-dgap;

   }

    //dgap=day%7;
    return dgap;
}

/*********************Count the day of instant month*******************/

int calender :: daycount(int year,int month)
{
    day=0;
    switch(month)
    {
        case 4:
        case 6:
        case 9:
        case 11:
              day=day+30;
              break;
        case 1 :
        case 3 :
        case 5 :
        case 7 :
        case 8 :
        case 10:
        case 12:
             day=day+31;
             break;

        default:
             if(ly(year))
                day=day+29;
             else
                day=day+28;
    }
      return day;
}

/******************Put digit at right position*******************/

void calender :: putdigit(int dgap,int count,int month,int year)
{
   int x,y,i;
   char s[10];
   int zero[20][20], one[20][20],two[20][20],three[20][20],four[20][20],
   five[20][20],six[20][20],seven[20][20],eight[20][20], nine[20][20];
   char monthname[13][10]={"","January","February","March","April","May","June","July","August","September","October","November","December"};
   outtextxy(240,20,monthname[month]);
   //outtextxy(295,20,",");
   outtextxy(310,20,itoa(year,s,10));

   makearray("0.txt",zero);
   makearray("1.txt",one);
   makearray("2.txt",two);
   makearray("3.txt",three);
   makearray("4.txt",four);
   makearray("5.txt",five);
   makearray("6.txt",six);
   makearray("7.txt",seven);
   makearray("8.txt",eight);
   makearray("9.txt",nine);

    x=50,y=110;
    switch(dgap)
    {
    case 2:
          x=x;
          break;
    case 3:
          x=x+85;
          break;
    case 4:
          x=x+(2*85);
          break;

    case 5:
          x=x+(3*85);
          break;
       case 6:
          x=x+(4*85);
          break;
       case 7:
          x=x+(5*85);
          break;
       case 0:
          x=x+(5*85);
          break;
       case 1:
          x=x+(6*85);
          break;
    }

    for(i=1;i<=count;i++)
    {
    switch(i)
    {
        case 1:
            drawdigit(one,x,y);
            break;
        case 2:
            drawdigit(two,x,y);
            break;
        case 3:
            drawdigit(three,x,y);
            break;
        case 4:
            drawdigit(four,x,y);
            break;
        case 5:
            drawdigit(five,x,y);
            break;
        case 6:
            drawdigit(six,x,y);
            break;
        case 7:
            drawdigit(seven,x,y);
            break;
        case 8:
            drawdigit(eight,x,y);
            break;
        case 9:
            drawdigit(nine,x,y);
            break;
        case 10:
            drawdigit(one,x-10,y);
            drawdigit(zero,x+10,y);
            break;
        case 11:
            drawdigit(one,x-10,y);
            drawdigit(one,x+10,y);
            break;
        case 12:
            drawdigit(one,x-10,y);
            drawdigit(two,x+10,y);

            break;
        case 13:
            drawdigit(one,x-10,y);
            drawdigit(three,x+10,y);

            break;
        case 14:
            drawdigit(one,x-10,y);
            drawdigit(four,x+10,y);

            break;
        case 15:
            drawdigit(one,x-10,y);
            drawdigit(five,x+10,y);

            break;
        case 16:
            drawdigit(one,x-10,y);
            drawdigit(six,x+10,y);

            break;
        case 17:
            drawdigit(one,x-10,y);
            drawdigit(seven,x+10,y);

            break;
        case 18:
            drawdigit(one,x-10,y);
            drawdigit(eight,x+10,y);

            break;
        case 19:
            drawdigit(one,x-10,y);
            drawdigit(nine,x+10,y);

            break;
        case 20:
            drawdigit(two,x-10,y);
            drawdigit(zero,x+10,y);

            break;
        case 21:
            drawdigit(two,x-10,y);
            drawdigit(one,x+10,y);

            break;
        case 22:
            drawdigit(two,x-10,y);
            drawdigit(two,x+10,y);

            break;
        case 23:
            drawdigit(two,x-10,y);
            drawdigit(three,x+10,y);
            break;
        case 24:
            drawdigit(two,x-10,y);
            drawdigit(four,x+10,y);
            break;
        case 25:
            drawdigit(two,x-10,y);
            drawdigit(five,x+10,y);
            break;
        case 26:
            drawdigit(two,x-10,y);
            drawdigit(six,x+10,y);
            break;
        case 27:
            drawdigit(two,x-10,y);
            drawdigit(seven,x+10,y);
            break;
        case 28:
            drawdigit(two,x-10,y);
            drawdigit(eight,x+10,y);
            break;
        case 29:
            drawdigit(two,x-10,y);
            drawdigit(nine,x+10,y);

            break;
        case 30:
            drawdigit(three,x-10,y);
            drawdigit(zero,x+10,y);
            break;
        case 31:
            drawdigit(three,x-10,y);
            drawdigit(one,x+10,y);
            break;
    }
    x=x+85;
    if(x>610)
    {
        x=50;
        y=y+45;
    }
    if(y>320)
    {
        y=110;
    }
     }
}

/**********************Main function************************/

int main(void)
{

   FILE *in;
   clrscr();
   int gdriver = EGA, gmode = EGAHI, errorcode;
   int year=0,month=0,dgap=0,count=0;

   initgraph(&gdriver, &gmode, "D:\\tc\\bgi");
   errorcode = graphresult();
   if (errorcode != grOk)
   {
      printf("Graphics error: %s\n", grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();
      exit(1);
   }

   setbkcolor(1);
   setcolor(9);


 int ch;
 while(1)
 {
   while(1)
   {

    outtextxy(20,30,"Input a year: ");
    gotoxy(18,3);   //indicate the carsor position after outtext position
    scanf("%d",&year);

    outtextxy(20,45,"Input a month: ");
    gotoxy(18,4);
    scanf("%d",&month);
    if (month>0 && month<13 && year>1914 && year<2094)
        break;
    else
        cleardevice();
        outtextxy(20,5,"insert again");
   }
   cleardevice();   //it works as clrscr() in graphics mode
   calender c;      //create object of the class

   c.drawcal();
   dgap=c.findgap(year,month);
   //printf("dgap=%d\n",dgap);
   count=c.daycount(year,month);
   //printf("count=%d",count);
   c.putdigit(dgap,count,month,year);

   getch();     //program stop here until press enter

   cleardevice();
   outtextxy(20,5,"for continue press 1 & for quit press any key");
  // cleardevice();
   outtextxy(20,16,"Enter Choice: ");
   gotoxy(18,2);
   scanf("%d",&ch);
   if (ch==1)
    continue;
   else
    break;

 }

   closegraph();
   return 0;
}

