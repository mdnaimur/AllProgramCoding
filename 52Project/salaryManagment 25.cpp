

//Salary Management Software.
//*This Project is developed by W@sif Islam*//

#include <iostream>
#include <conio.h>
#include <dos.h>
#include <stdio.h>
#include <string.h>
#include <fstream>
using namespace std;
class data
{
   protected:
    char p[30];
    unsigned long int x,y,z,m,n,d,a,b,c,e,f;
   public:
    void getdata()
    {
     cout<<"\n Enter name:";
     cin>>p;
     }
  };



class salary:public virtual data
{
  public:

    int wasif(void);
    void time_date(void);
    unsigned long int daycount(int,int,int);
    void manager(int);
    void search_employee(void);
 };

 int salary::wasif(void)
 {
  char w;
  cout<<"\n\n\n         ";
  textattr(4+9);
  cprintf("If you want to do anything,press 'Enter' or press 'Esc'.");
  textcolor(6);textbackground(9);
  w=getch();
  if(w==13)
   return 1;
  else
   return 0;
  }

void salary::time_date()
 {
  struct date d;
  int i,j;
  clrscr();
  getdate(&d);
  i=d.da_day;
  j=d.da_mon;
  cout<<"Date:"<<i<<"/"<<j<<"/"<<d.da_year;
  struct time t;
  int k;
  gettime(&t);
  i=t.ti_hour;
  j=t.ti_min;
  k=t.ti_sec;
  cout<<"\t\t\t\t\t\t           Time:"<<i<<":"<<j<<":"<<k<<endl;
  cout<<"\n\n\n                ";
  textcolor(3);
  textbackground(9);
  cprintf("WELCOME TO THE SALARY MANAGEMENT SOFTWARE");
  cout<<"\n\n\n";
  textcolor(6);
  textbackground(9);
  }

 unsigned long int salary::daycount(int x,int y,int z)
  {
     unsigned long int year1,day1,month1,year2,day2,month2,
     year,day,month;

    day1=x;month1=y;year1=z;
    cout<<endl;
    struct date d;
    getdate(&d);
    day2=d.da_day;
    month2=d.da_mon;
    year2=d.da_year;
    year1=year1*365;
    month1=month1*30;
    day1=day1+year1+month1;
    year2=year2*365;
    month2=month2*30;
    day2=day2+year2+month2;
    unsigned long int date=day2-day1;

      return date;
  }

void salary::manager(int salaryType=0)
{
     cout<<"\n Employee name:"<<p; delay(1000);
     cout<<"\n\n His joined date:(Day/Month/Year):";
     cin>>x>>y>>z;delay(500);
     cout<<"\n His working days are:";
     d=daycount(x,y,z);
     cout<<"\n "<<d%30<<" days "<<(d%365)/30<<" months "<<d/365<<" years";delay(500);
     cout<<"\n\n His per month salary is:";
     if(salaryType==0)
     {
       cout<<1500.0*30.0<<" taka";delay(500);
       m=1500.0*daycount(x,y,z);
       n=(1500.0*30.0)+((1500.0*30.0)*((d/365.0)*0.25));
     }
     else if(salaryType==1)
     {
       cout<<1000.0*30.0<<" taka";delay(500);
       m=1000.0*daycount(x,y,z);
       n=(1000.0*30.0)+((1000.0*30.0)*((d/365.0)*0.20));
     }
     else if(salaryType==2)
     {
       cout<<800.0*30.0<<" taka";delay(500);
       m=800.0*daycount(x,y,z);
       n=(800.0*30.0)+((800.0*30.0)*((d/365.0)*0.15));
     }
     else
     {
       cout<<500.0*30.0<<" taka";delay(500);
       m=500.0*daycount(x,y,z);
       n=(500.0*30.0)+((500.0*30.0)*((d/365.0)*0.10));
     }
     cout<<"\n His total income is:"<<m<<" taka";delay(500);
     cout<<"\n\n He spent "<<d/365<<"years in this post";delay(500);
     cout<<"\n\n After each year the company will implement his salary";delay(500);
     cout<<"\n\n Now in 2007 his salary is:"<<n<<" taka";delay(500);
     if(salaryType==0)
        n=(1500.0*30.0)+((1500.0*30.0)*(((d/365.0)+1)*0.25));
     else if(salaryType==1)
        n=(1000.0*30.0)+((1000.0*30.0)*(((d/365.0)+1)*0.20));
     else if(salaryType==2)
        n=(800.0*30.0)+((800.0*30.0)*(((d/365.0)+1)*0.15));
     else
        n=(500.0*30.0)+((500.0*30.0)*(((d/365.0)+1)*0.10));
     cout<<"\n\n Next year his salary will be:"<<n<<" taka";delay(500);
     cout<<"\n\n His Eid bonus is 10% of his salary";delay(500);
     if(salaryType==0)
        n=1500.0*30.0*(10.0/100.0);
     else if(salaryType==1)
        n=1000.0*30.0*(10.0/100.0);
     else if(salaryType==2)
        n=800.0*30.0*(10.0/100.0);
     else
        n=500.0*30.0*(10.0/100.0);
     cout<<"\n\n His bonus is:"<<n<<" taka";

}

void salary::search_employee()
{
    cout<<"\nEnter the employee name whom you want to search:";
    char q[30];
    gets(q);
    strcat(q,".txt");
    fstream z;
    z.open(q,ios::in);
    z.seekg(0);
    if(!z)
    {
     cout<<"\n\t\t\t Searching.";
     for(int l=0;l<5;l++)
     {
      delay(500);
      cout<<".";
        }
     sound(1550);
     cout<<"\n\t\t\t File not found...";
     delay(1000);
     nosound();
     }
    if(z)
    {
     cout<<"\n\t\t\t Searching.";
     for(int l=0;l<5;l++)
     {
      delay(500);
      cout<<".";
        }
     cout<<"\n\t\t\t File found...";delay(500);
     }
    char ch;
    while(z)
    {
     z.get(ch);
     cout<<ch;delay(25);
     }
}

class file:public virtual data,public salary
{
 public:
    void file_manager(int);
 };

void file::file_manager(int fileType=0)
{
     char mng[30];
     strcpy(mng,p);
     strcat(mng,".txt");
     fstream k;
     k.open(mng,ios::out);
     k<<"\n\n Our  Employee Mr."<<p<<"\n\n His joined date:";
     k<<x<<"/"<<y<<"/"<<z;
     k<<"\n\n His working days are:";
      d=daycount(x,y,z);
      a=d%30;b=(d%365)/30;c=d/365;
     k<<a<<" days "<<b<<" months "<<c<<" years";
     k<<"\n\n His per month salary is:";
     if(fileType==0)
     {
       e=1500.0*30.0;
       k<<e<<" taka";
       m=1500.0*daycount(x,y,z);
       n=(1500.0*30.0)+((1500.0*30.0)*((d/365.0)*0.25));
     }
     else if(fileType==1)
     {
       e=1000.0*30.0;
       k<<e<<" taka";
       m=1000.0*daycount(x,y,z);
       n=(1000.0*30.0)+((1000.0*30.0)*((d/365.0)*0.20));
     }
     else if(fileType==2)
     {
       e=800.0*30.0;
       k<<e<<" taka";
       m=800.0*daycount(x,y,z);
       n=(800.0*30.0)+((800.0*30.0)*((d/365.0)*0.15)) ;
      }
     else
     {
       e=500.0*30.0;
       k<<e<<" taka";
       m=500.0*daycount(x,y,z);
       n=(500.0*30.0)+((500.0*30.0)*((d/365.0)*0.10)) ;
      }
     k<<"\n\n His total income is:"<<m<<" taka";
      f=d/365;
     k<<"\n\n He spent "<<f<<" years in this post\n\n After each year the company will implement his salary";
     k<<"\n\n Now in 2007 his salary is:"<<n<<" taka";
     if(fileType==0)
           n=(1500.0*30.0)+((1500.0*30.0)*(((d/365.0)+1)*0.25));
     else if(fileType==1)
           n=(1000.0*30.0)+((1000.0*30.0)*(((d/365.0)+1)*0.20));
     else if(fileType==2)
           n=(800.0*30.0)+((800.0*30.0)*(((d/365.0)+1)*0.15));
     else
           n=(500.0*30.0)+((500.0*30.0)*(((d/365.0)+1)*0.10));
     k<<"\n\n Next year his salary will be:"<<n<<" taka\n\n His Eid bonus is 10% of his salary";
     if(fileType==0)
           n=1500.0*30.0*(10.0/100.0);
     else if(fileType==1)
           n=1000.0*30.0*(10.0/100.0);
     else if(fileType==2)
           n=800.0*30.0*(10.0/100.0);
     else
           n=500.0*30.0*(10.0/100.0);
     k<<"\n\n His bonus is:"<<n<<" taka";
     k.close();
}

int main()
{
  textcolor(6);
  textbackground(9);
 int a;
 data d;
 salary s;
 file f;
 do
 {
  clrscr();
  s.time_date();
  cout<<"\n Enter your choice:\n 1.Add an employee\n 2.Search an employee\n 3.Quit";
  cout<<"\n (Press 1 to 3)\n";
  int a1;
  cin>>a1;
  clrscr();
  s.time_date();
 if(a1==1)
  {
   f.getdata();
   cout<<"\n His post in the office:\n 1.Manager\n 2.Executive manager\n 3.Programmer\n 4.Software developer";
   cout<<"\n(Press 1 to 4)\n";
   cin>>a;
   clrscr();
   s.time_date();
   switch(a)
   {
    case 1:
       f.manager();
       f.file_manager();
       break;
    case 2:
       f.manager(1);
       f.file_manager(1);
       break;
    case 3:
       f.manager(2);
       f.file_manager(2);
       break;
    case 4:
       f.manager(3);
       f.file_manager(3);
       break;
    default:
       cout<<"\n\n\t You entered an invalid number";
       break;
       }

    }
 if(a1==2)
  {
    clrscr();
    s.time_date();
    f.search_employee();
    }
 if(a1==3)
    break;
   int l;
   l=f.wasif();
   if(l==0)
    break;
 }
  while(a!=3);

 return 0;
}

///////////////////////////////////////////////////////////////////////////
