#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<dos.h>
using namespace std;
class dhaka
{
private:
    char survey[100][100];
    char problem[100];
    float count;
    int z;

public:                                     //  input();
        void input(void);
        void calculation(void);
        dhaka()
        { count=0.0;
        }
        void date(){
        	
        struct date d;
        getdate(&d);

printf("Date:%d/", d.da_day);
printf("%d/", d.da_mon);
printf("%d\t\t\t\t\t", d.da_year);
        }

        void time(){
         struct  time t;

gettime(&t);
printf("Time: %2d:%02d:%02d.%02d\n\n\n",
       t.ti_hour, t.ti_min, t.ti_sec, t.ti_hund);
        }
};


        void dhaka::input(void)
{

do
{

        cout<<"What is the main problem of dhaka city";
        cout<<"\nPress s for survey report\n\nE for exit\n\n";
        gets(problem);
        if((strcmpi("s",problem)==0))
        calculation();
        else if(strcmpi("e",problem)==0)
        exit(0);

        strcpy(survey[count],problem);
        count++;
        
} //do
while(1);
}



        void dhaka::calculation(void)
{

        float percent=0.0;
        clrscr();

        date();
        time();
        cout<<"\nSurvey\treport :";
        cout<<"\n\n\t\tPROBLEM------VOTE------PERCENTAGE\n";
        for(float i=0.0;i<count;i++)
        {
        float m=0.0;
        for(float j=i-1;j>=0;j--)
        {
        if((strcmpi(survey[i],survey[j])==0))
        {
            m++;
          } //if1
           } //2nd for
         if(m==0)
         {   int n=1;
             for(float k=i+1;k<count;k++)
             {
             if((strcmpi(survey[i],survey[k])==0))
             {
                n++;
             }
             } //3rd for
              percent=(n/count)*100;
    cout<<"\n\t\t"<<survey[i]<<"------"<<n<<"------"<<percent<<"%";
             }//if2
              }//1st for
              cout<<"\n\n\t\tTotal voter:"<<count;
              cout<<"\n\n\n\n\n\n\n\n\n1.If u would like to continue\n\n2.Exit";
              cin>>z;
    while(1)
    {
    if(z==1)
      input();
    else  if(z==2)
      exit(1);
      else
      //exit(0);
      cout<<"Wrong input";
    }//while
    //    goto s;

              //cout<<"\n\n\n\n\t\tPress Any Key To Exit";
            }



int main()
{
dhaka x;

x.date();
x.time();
x.input();
x.calculation();
getch();
return 0;
}


