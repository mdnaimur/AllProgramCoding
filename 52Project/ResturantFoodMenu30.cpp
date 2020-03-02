


//International Restaurant Food List.
#include<iostream>
#include<conio.h>
#include<fstream>
#include<stdlib.h>
#include<graphics.h>
using namespace std;
class TIR
{
private:
    char cat[40][50];
    int cost[100];
    int code[100];
    int i,j,sum;
public:
       void getc(void);
       void geti(void);
       void getb(void);
       void readc(void);
       void readi(void);
       void readb(void);
       void order(void);
       void show(void);

};
void TIR::getc (void)
{
       int n;
       cout<<"Enter how many ITEMS for chinese:=";
       cin>>n;
       ofstream fout;
      fout.open("D:\\Chinese.txt");
       for(i=0;i<n;i++)
       {
       cout<<"Enter food items:=";
     cin>>cat[i];
     cout<<"Enter food code:=";
     cin>>code[i];
     cout<<"Enter food  cost:=";
     cin>>cost[i];
     cout<<"\n \n";
     fout<<cat[i]<<"\t"<<code[i]<<"\t"<<cost[i]<<"\n";
    }
    fout.close();
}
void TIR::geti(void)
{
   int n;
       cout<<"Enter how many ITEMS for Indian:=";
       cin>>n;
       ofstream fout;
      fout.open("D:\\indian.txt");
       for(i=0;i<n;i++)
       {
       cout<<"Enter items:=";
     cin>>cat[i];
     cout<<"Enter code:=";
     cin>>code[i];
     cout<<"Enter cost:=";
     cin>>cost[i];
     cout<<"\n \n";
     fout<<cat[i]<<"\t"<<code[i]<<"\t"<<cost[i]<<"\n";
    }
    fout.close();
       }
void TIR::getb(void)
{
   int n;
       cout<<"Enter how many ITEMS for Banladeshie:=";
       cin>>n;
       ofstream fout;
      fout.open("D:\\Bangladeshi.txt");
       for(i=0;i<n;i++)
       {
       cout<<"Enter items:=";
     cin>>cat[i];
     cout<<"Enter code:=";
     cin>>code[i];
     cout<<"Enter cost:=";
     cin>>cost[i];
     fout<<cat[i]<<"\t"<<code[i]<<"\t"<<cost[i]<<"\n";
    }
    fout.close();
}

 void TIR::readc(void)
 {
      ifstream  fin;
      fin.open("D:\\Chinese.txt",ios::in);
       cout<<"ITEMS "<<"\t \t"<<"CODE "<<"\t"<<"COST "<<"\n";
      for(j=0;j<4;j++)
      {
       fin>>cat[j];
       fin>>code[j];
       fin>>cost[j];


       cout<<cat[j]<<"\t \t"<<code[j]<<"\t"<<cost[j];
       cout<<"\n";
       }
       fin.close();
}
void TIR::readi(void)
{
      ifstream  fin;
      fin.open("D:\\indian.txt",ios::in);
       cout<<"ITEMS "<<"\t \t"<<"CODE "<<"\t"<<"COST "<<"\n";
      for(j=0;j<4;j++)
      {
       fin>>cat[j];
       fin>>code[j];
       fin>>cost[j];


       cout<<cat[j]<<"\t \t"<<code[j]<<"\t"<<cost[j];
       cout<<"\n";
       }
       fin.close();
}
void TIR::readb(void)
{
      ifstream  fin;
      fin.open("D:\\Bangladeshi.txt",ios::in);
       cout<<"ITEMS "<<"\t \t"<<"CODE "<<"\t"<<"COST "<<"\n";
      for(j=0;j<4;j++)
      {
       fin>>cat[j];
       fin>>code[j];
       fin>>cost[j];


       cout<<cat[j]<<"\t \t"<<code[j]<<"\t"<<cost[j];
       cout<<"\n";
       }
       fin.close();
}
void TIR::order(void)
{
  int m;
  sum=0;
  cout<<"Enter the item code to order:=";
  cin>>m;
  for(int j=0;j<4;j++)
  {
  if(m==code[j])
  {
  sum=sum+cost[j];
  break;
  }
  }
}
void TIR::show(void)
{
  clrscr();
  highvideo();
  cout<<"sum:="<<sum<<"\n \n";
  getch();
  }
int main()
{
  textcolor(4);
  textbackground(7);
  highvideo();
  TIR i;

  for(; ;)
  {
  clrscr();
  cout<<"*****************************************************"<<endl;
  cout<<"\n\n WELCOME TO INTERNATIONAL REASTAURENT\n"<<endl;
  cout<<"1. FOR SELECTING CHINESE FOOD ITEMS.\n";
  cout<<"2.FOR SELECTING INDIAN FOOD ITEMS.\n";
  cout<<"3.FOR SELECTING BANLADESHI FOOD ITEMS.\n";
  cout<<"4.TO SHOW THE TOTAL SUM OF THE SELECTED FOODS.\n";
  cout<<"5.EXIT.\n \n";
  cout<<"*****************************************************"<<endl;
  cout<<"Enter our Choice:=";
  int a;
  cin>>a;
    textcolor(4);
  highvideo();

  switch(a)
  {
   case 1:
     //i.getc();
     clrscr();
     i.readc();
     i.order();
     break;
   case 2:

      //i.geti();
      clrscr();
      i.readi();
      i.order();
      break;
   case 3:

      //i.getb();
      clrscr();
      i.readb();
      i.order();
      break;
   case 4:
        clrscr();

        {
        i.show();
        }
        break;
   default :
         cout<<"\nNo choice given \n";
         exit(1);
    }
     highvideo();

    }
//getch();
 //return 0;
}
///////////////////////////////////////////////////////////////////////////

/*Some file with data for this program ,

BANGLADE.TXT Data :

u    34    765
w    6    89
wqs    8    233
l    12    786

CHINESE.TXT Data :

t    5    44
j    2    44
jjj    122    897
n    12    777

Description Of The Project.txt Data :

This is a project designed for Hotel Management
Here three types of food items are given 
& From there customer selects a item
then he can he total price of his selected
foods.

INDIAN.TXT Data :

k    7    44
p    12    765
o    4    8965
e    232    765

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
*/
