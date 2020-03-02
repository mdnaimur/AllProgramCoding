#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<fstream>
#include<stdlib.h>
#include<string.h>
#include<dos.h>
using namespace std;
class boat
{
 protected:
       char pro[25];
       char name[25];
       char detail[500];
};

/*************************************************/

class eng:virtual  public boat
{
       int j,m;

  public:
       void see_e(void);
       void add_e(void);
       void serch_e(void);

};
/******************SEE******************/

void eng::see_e()
  {

     
    std::ifstream in;
    in.open("menu_e.txt");
    cout<<"\n\n\t   THE LIST OF ENGINE BOAT\n\t*****************************";
    j=0;
    while(in)
    {
      delay(200);
      j++;
      in.getline(name,25);
      if(strlen(name)>1)
      cout<<"\n\t"<<j<<". "<<name<<endl;
    }
    in.close();
     getch();
    }
/******************ADD****************/

 void eng::add_e()
 {

    ofstream out,ot;
    char name[25],detail[500];
     
    flushall();
    ot.open("menu_e.txt",ios::app);
    //cin.getline(name,25);
    cout<<"\n\n\tENTER THE BOAT NAME::";
    gets(name);
    ot<<name<<"\n";
    ot.close();
    strcat(name,".txt");
    out.open(name);
    flushall();
    cout<<"\n\n\tENTER THE DETAILS::";
    gets(detail);
    out<<detail;
    out.close();
 }
/*****************SEARCH***************/

void eng::serch_e()

{
    char name[100];
     
    cout<<"\n\n\tENTER THE BOAT NAME ::";
    flushall();
    gets(name);
    cout<<"\n\n\tSERCHING";
     for(m=0;m<8;m++)
        {
        delay(200);
        cout<<" .";
        }
    strcat(name,".txt");
    ifstream fin(name,ios::in);
    if (!fin)
    {
        
       delay(100);
       cout<<"\n\n\n\tTHIS BOAT ISN'T INCLUDE IN THE MANU LIST.";
       delay(200);
       cout<<"\n\n\t FOR YOUR KIND INFORMATION SEE THE LIST.";
       delay(300);
       cout<<"\n\n\t\t\t*THANK YOU*";
    }
    else
    {
      
     cout<<"\n\n\t   MESSAGE OF THIS BOAT\n\t**************************\n\n\t";
     char tmp;
     fin.seekg(0);
     while(!fin.eof())
      {
       fin.get(tmp);
       cout<<tmp;
       delay(100);
       }//cout<<fin.readbuf();
    }
getch();
}
/*****************************************/

class menual:virtual  public boat
{


  public:
       void see_m(void);
       void add_m(void);
       void serch_m(void);
       int i,m;
};

/*********************SEE**********************/

void menual::see_m()
  {

     
    ifstream in;
    in.open("menu_m.txt");
    i=1;
    cout<<"\n\n\t   THE LIST OF MANUAL BOAT\n\t*****************************";
    while(in)
    {
      delay(200);
      in.getline(name,25);
      if(strlen(name)>1)

      cout<<"\n\t"<<i<<". "<<name<<endl;
      i++;

    }

    in.close();
    getch();
    }
 /****************ADD**************/

 void menual::add_m()
 {

    ofstream out1,ot1;
    char name[25],detail[500];
     
    cout<<"\n\n\tENTER THE BOAT NAME::";
    flushall();

    ot1.open("menu_m.txt",ios::app);
    //cin.getline(name,25);

    gets(name);
    ot1<<name<<"\n";
    ot1.close();
    strcat(name,".txt");

    out1.open(name);

    //cin.getline(detail,500);
    flushall();
    cout<<"\n\n\tENTER THE DETAILS::";
    gets(detail);
    out1<<detail;

    out1.close();


 }
 /***************SEARCH*************/

  void menual:: serch_m()

  {
    char name[100];
     
    cout<<"\n\n\tENTER THE BOAT NAME ::";
    flushall();
    gets(name);
    strcat(name,".txt");
    cout<<"\n\n\tSERCHING";
     for(m=0;m<8;m++)
        {
        delay(200);
        cout<<" .";
        }

    ifstream fin(name,ios::in);
     if (!fin)
    {
       
      delay(100);
      cout<<"\n\n\tTHIS BOAT ISN'T INCLUDE IN THE MANU LIST.";
      delay(200);
      cout<<"\n\n\t FOR YOUR KIND INFORMATION SEE THE LIST.";
      delay(300);
      cout<<"\n\n\t\t\t*THANK YOU*";
    }
    else

    {
     
    char tmp;
    cout<<"\n\n\t   MESSAGE OF THIS BOAT\n\t**************************\n\n\t";
    fin.seekg(0);
     while(!fin.eof())
      {
        fin.get(tmp);
        cout<<tmp;
        delay(200);
        //    cout<<tmp;
        //    fin>>tmp;
      }
                 //cout<<fin.readbuf();
    }
  getch();
  }
 /********************PROPERTI********************/
  class properti:virtual public boat
  {
        int m,i;
        char tmp[25];
     public:
        void see_p(void);
        void add_p(void);
        void serch_p(void);
        void boat_p(void);
  };
/**********************************************/
void properti::see_p()
  {

     
    ifstream in;
    in.open("menu_p.txt");
    i=1;
    cout<<"\n\n\t   THE LIST OF PROPERTI \n\t*****************************";
    while(in)
    {
      delay(200);
      in.getline(name,25);
      if(strlen(name)>1)

      cout<<"\n\n\t"<<i<<". "<<name<<endl;
      i++;

    }

    in.close();
    getch();
    }
/***********************************************/

 void properti::boat_p()
 {
  char n[25],nm[25],b[25];
  cout<<"\n\n\tENTER THE PROPERTI::";
  flushall();
  gets(n);
  strcpy(nm,n);
  strcat(nm,".txt");
  ofstream o1;
  cout<<"\n\n\tENTER THE BOAT NAME::";
  flushall();
  o1.open(nm,ios::app);
  gets(b);
  o1<<b<<"\n";
  o1.close();
 }
/******************************************/
 void properti::add_p()
 {
    ofstream outp,otp;
    char name[25],detail[500];
     
    cout<<"\n\n\tENTER THE PROPERTI::";
    flushall();
    otp.open("menu_p.txt",ios::app);
    //cin.getline(name,25);
    gets(name);
    otp<<name<<"\n";
    otp.close();
    strcat(name,".txt");
    outp.open(name);
    //cin.getline(detail,500);
    flushall();
    cout<<"\n\n\tENTER THE BOAT NAME::";
    gets(detail);
    outp<<detail<<"\n";
    outp.close();
 }
/*****************************************/

  void properti:: serch_p()

  {
    char name[100];
     
    cout<<"\n\n\tENTER THE PROPERTI ::";
    flushall();
    gets(name);
    strcat(name,".txt");
    cout<<"\n\n\tSERCHING";
     for(m=0;m<8;m++)
        {
        delay(200);
        cout<<" .";
        }

    ifstream fin(name,ios::in);
    if (!fin)
    {
       
      delay(100);
      cout<<"\n\n\tTHIS PROPERTI ISN'T INCLUDE IN THE MANU LIST.";
      delay(200);
      cout<<"\n\n\t FOR YOUR KIND INFORMATION SEE THE LIST.";
      delay(300);
      cout<<"\n\n\t\t\t*THANK YOU*";
    }
    else

    {
     

    cout<<"\n\n\t   THE LIST OF BOAT OF THIS PROPERTI\n\t***************************************";
    fin.seekg(0);
     i=1;
     while(!fin.eof())
      {
        delay(100);
        fin.getline(tmp,25);
        if(strlen(tmp)>1)
        cout<<"\n\n\t"<<i<<". "<<tmp;
        i++;
      }
                 //cout<<fin.readbuf();
    }
  getch();
  }
/*************************************************/
class f
{
 public:
       f();

 };

    f::f()
    {
    while(1)
    {
       
      cout<<"\n\n\t   THE PROJECT IS THE SURVE OF WATER VAHICLES";
      cout<<"\n\n\t************************************************";
      cout<<"\n\n\t1.TEXT MESSAGE FOR BOAT\n\n\t2.PROPERTIS OF BOAT\n\n\t3.EXIT";
      cout<<"\n\n\tCHOSE YOUR OPTION::";
      int n1;
      cin>>n1;
      if(n1==1)
      {
          while(1)
          {
         int n2;
         eng w;
          
         cout<<"\n\n\t   MESSAGE FOR BOAT\n\t**********************";
         cout<<"\n\n\t1.ENGINE BOAT\n\n\t2.MANUAL BOAT\n\n\t3.PREVIOUS MANU";
         cout<<"\n\n\tCHOSE YOUR OPTION::";
         cin>>n2;
         if(n2==1)
           {
              while(1)
              {
             int n3;
             char a[20][20],b[20][20];
              
             cout<<"\n\n\t   ENGINE BOAT   \n\t*****************";
             cout<<"\n\n\t1.SEE THE LIST OF BOAT\n\n\t2.ADD BOAT & DETAILS\n\n\t3.PREVIOUS MANU\n\n\t4.FOR SHOWING DETAILS";
             cout<<"\n\n\tCHOSE YOUR OPTION::";
             cin>>n3;
             if(n3==1)
                 w.see_e();
             else if(n3==2)
                 w.add_e();
             else if(n3==3)
                 break;
             else if(n3==4)
                 w.serch_e();
              }
           }

         else if(n2==2)
           {
              while(1)
              {
             int n4;
             menual x;
             char a[20][20],b[20][20];
              
             cout<<"\n\n\t   MANUAL BOAT   \n\t*****************";
             cout<<"\n\n\t1.SEE THE LIST OF BOAT\n\n\t2.ADD BOAT & DETAILS\n\n\t3.PREVIOUS MANU\n\n\t4.FOR SHOWING DETAILS";
             cout<<"\n\n\tCHOSE YOUR OPTION::";
             cin>>n4;
             if(n4==1)
                x.see_m();
             else if(n4==2)
                x.add_m();
             else if(n4==3)
                break;
             else if(n4==4)
                x.serch_m();
              }
           }
         else if(n2==3)
            break;
       }//while ar bra
     }//n1 ar bra

       else if(n1==2)
     {
       while(1)
        {
        properti p;
         
        int m;
        cout<<"\n\n\t   PROPERTI   \n\t****************";
        cout<<"\n\n\t1.SEE THE LIST OF PROPERTI\n\n\t2.ADD PROPERTI & BOAT NAME\n\n\t3.PREVIOUS MANU\n\n\t4.SERCH THE PROPERTI\n\n\t5.ADD BOAT NAME";
        cout<<"\n\n\tCHOSE YOUR OPTION::";
        cin>>m;
        if(m==1)
         p.see_p();
        else if(m==2)
         p.add_p();
        else if(m==4)
         p.serch_p();
        else if(m==3)
         break;
        else if(m==5)
         p.boat_p();
        }
     }
    else
     if(n1==3)
       break;
    }

      }


/************************MAIN**********************/

int main()
{
    textcolor(114);
    textbackground(0);
    highvideo();
    f a;
return 0;
}

