

// THIS IS A PROGRAMME FOR TAKE ATTENDENCE MADE

#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<iomanip>
#include<fstream>
#include<conio.h>
#include<iostream>
#include<string.h>
#include<dir.h>
#include<dos.h>

using namespace std;


class attendenceout;
class rollinfo
{
protected:
    char  depcode[7],subcode[8],lecno[6];
    int no,year,month;
    int day;
public:
    void roll(void){cout<<depcode<<no;}
    void dayset(void);
};

void rollinfo::dayset(void)
        {
          struct date a;
          getdate(&a);
          year=a.da_year;
          month=a.da_mon;
          day=a.da_day;
          cout<<day<<"."<<month<<"."<<year<<endl;
        }

class attendencein:virtual public rollinfo
        {
          char filename[15];
          char folnam[15] ;
          int tot, flag[120];
          public:
          void input(void);
          void attend(void);
          void folder(void);
          void file(void);
          void crefilename(int);
          void sinfile(int pa);
        } ;

void attendencein::folder(void)
        {
        strcpy(folnam,depcode);
        mkdir(folnam);
        strcat(folnam,"\\");
          }

void attendencein::input(void)
        {
        cout<<endl<<"ATTENDENCE SHEET"<<endl;
        cout<<"\n Enter the batch code and department code:(example 0607): ";
        cin>>depcode ;
        cout<<"\n Input subject code : ";
         cin>>subcode;
        cout<<"\n Input class number : ";
        cin>>lecno;
        cout<<"\n Total student      : ";
        cin>>tot ;
        attend();
        file();
           }
void attendencein::crefilename(int i)
         {
          if(i==1)
            {
             strcpy(filename,depcode);
            }
        else  if(i==0)
            {
         strcpy(filename,subcode);
         strcat(filename,lecno);
         strcat(filename,".txt");
            }

         }

void attendencein::file(void)
{
     dayset();
     fstream k;
     crefilename(0);
     k.open(filename,ios::out);
     k<<"\tATTENDENCE SHEET\n\t----------------\n\n";
     k<<"\ndate"<<day<<"\\"<<month<<"\\"<<year<<endl ;
     k<<"\nBatch Code and Departmental Code : ";
     k<<depcode;
     k<<"\nSubject Code : ";
     k<<subcode;
     k<<"\nCLASS NO : ";
     k<<lecno;
     k<<"\n\nROLL NO\t\t\tATTENDENCE\n";
     int i=1;
     while(i<=(no-1))
     {
        k.fill(48);
        k<<"\n"<<depcode<<setw(3)<<i<<"\t\t\t";
        if(flag[i]==0)
            k<<"absent";
        else
            k<<"present";
        i++;
    }
    k.close();
}


void attendencein::attend(void)
 {
    dayset();
    no=1;
    int t=tot;
    char a[4];
    strcpy(a,depcode);
    cout<<"\n(*if absent press 'TAB' and if present press any key if postponed operation press ""ESC"")\n";
    getch();
    clrscr();
    folder();
    cout<<"date"<<day<<"\\"<<month<<"\\"<<year<<endl ;
    cout<<"\nROLL NO\t\tATTENDENCE\n";
    while(no<=t)
     {
       cout.fill(48);
       cout<<"\n"<<a<<setw(3)<<no<<"\t\t";
       char c=getch();
           if(c==9)
         {
          flag[no]=0;

        textcolor(1);
        cprintf("absent");
          sinfile(0);
          }
      else  if(c==27)
          {
          for(;no<=t;no++)
              {
               flag[no]=1;
               sinfile(1);
              }
           break;
          }
      else  if(c!=9)
           {
            flag[no]=1;
            textcolor(0);
            cprintf("present");
            textcolor(7);
            sinfile(1);
            }
        no++;
        if(no==125)
        break;
        }
        }
//idividual file setting part
void attendencein::sinfile(int pa)
{
    fstream x;
    char nam[10],name[20],*tmp;
    itoa(no,nam,10);
    strcpy(name,depcode);
    strcat(name,nam);
    tmp=new char[strlen(folnam)+strlen(name)+4];
    strcpy(tmp,folnam);
    strcat(strcat(tmp,name),".txt");
    x.open(tmp,ios::app);
    x<<pa;
    x.close();
    delete [] tmp;
}

class attendenceout:virtual attendencein,virtual rollinfo
            { int no;
              public:
              char filename[12];
              int outputfile(void);
              int outstfile(void);
              void output(void);
              void getdata(void);
              void getrollno(void){cout<<"\n\ninput the roll no of student(exp 1 or 12)";
                        cin>>no;  }
              void classdata(void);
              void studentdata(void);
          };
void attendenceout::getdata(void)
               {
               clrscr();
               cout<<"\n Enter the batch code and department code: \n\n";
               cout<<"\n BATCHCODE and DEPARTMENTAL CODE  : ";
               cin>>depcode;
               cout<<"\n Input subject code : ";
               cin>>subcode;
               cout<<"\n Input class number : ";
               cin>>lecno;
               }
int attendenceout::outputfile(void)
        {int i=0;
         char p;
         fstream u;
         strcpy(filename,subcode);
         strcat(filename,lecno);
         strcat(filename,".txt");
         u.open(filename,ios::in);
         if(!u)
           {
            cout<<"file error"<<filename;
            return 0;
           }
         clrscr();
         cout<<"\n\nTHE CLASS PATICIPATION SHEET IS BELOW :\n\n\n" ;
         while(u)
             {  if(i==660)
               {
             i=0;
             getch();
             clrscr();
            }
            delay(50);
              u.get(p);
              cout<<p;
              i++;
             }
          u.close();
         getch();
          return 0;
                }

void attendenceout::output(void)
            {while(1)
              {
             cout<<"\nENTER UR OPTION\n";
             cout<<"TO SHOW CLASS DATA(press enter)\nTO SHOW STUDENT DATA(press space)\nTO back press ESC\n";
             char i;
             i=getch();
             if(i==13)
            classdata();
            else if(i==32)
             studentdata();
             else if(i==27)
              break;
              }
            }
void attendenceout::classdata(void)
               {
                getdata();
                outputfile();
               }

void attendenceout::studentdata(void)
            {
             getdata();
             getrollno();
             outstfile();
            }
int attendenceout::outstfile(void)
           {
            crefilename(1);
            ifstream st;
        int ab=0,cl=0,pre=0;
        char nam[10],name[20],file[20],ch;
        itoa(no,nam,10);
        strcpy(file,depcode);
        strcat(file,"\\");
        strcpy(name,depcode);
        strcat(name,nam);
        strcat(file,name);
        strcat(file,".txt") ;
        st.open(file);
        while(st)
        {st.get(ch);
         if(ch==48)
           ab++;
         if(ch==49)
           pre++;
         }
        st.close();
        cl=ab+pre;
        float per=(pre*100/cl) ;

        cout<<"\nStudent data\n\n" ;
        cout<<"TOTAL CLASS :";
        delay(150) ;
        cout<<cl<<"\n";
        cout<<"PRESENT  :";
        delay(150);
        cout<<pre<<"\n";
        cout<<"ABSENT   :";
        delay(150);
        cout<<ab<<"\n";
        cout<<"TOTAL CLASS PERSENTENCE:";
        delay(250);
        cout<<per<<endl;
        return 0;
        }

int main()
    {
    textbackground(3);
    rollinfo d;
    d.dayset();
    attendencein a;
    char option;
    int i=0;
    clrscr();
    while(1)
         {
          clrscr();
          flushall();
          textcolor(4);
          d.dayset();
          cout<<"\nWelcome in attendence programme\n\n" ;
          cout<<"press ESC......QUIT\n1.......INPUT\n2.......OUTPUT\n\n\n";
          option=getch();
          clrscr();
          if(option==49)
           {
         a.input();
         i=1;
        }
        else if(option==50)
        {
         attendenceout b;
         b.output();
        }
        else if(option==27)
        {
         if(i==1)
         textcolor(128);
         cout<<"\n";
          cprintf("YOU COULD SEE ATTENDENCESHEET IN FILES OR U CAN SAW THAT  BY USING OUTPUT OPTION ") ;
          cout<<endl;
          cprintf("THANK YOU FOR USING ATTENDENCE SOFTWARE");
         break;
        }
     }
     getch();
     return 0;
    }

//finished

///////////////////////////////////////////////////////////////////////////
Copy & paste this code in your TC & run, then you will get output.......
If you have any problem please comment below.........
Email This
BlogThis!
Share to Twitter
Share to Facebook
Share to Pinterest

Newer Post Older Post Home
INFOLINKS IN TEXT ADS
Picture Window theme. Powered by Blogger.

