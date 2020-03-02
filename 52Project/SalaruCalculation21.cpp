#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<fstream>

using namespace std;
class salary
{
      float a;
      fstream file;
      char ch;
public:

    char t;
    void show(int);
    void final(char m[20]);


};
void salary ::final(char m[20])
    {

    file.open(m,ios::in);
    if(!file)
     {
     cout<<"invalid name.";
     }
    else
    {
    while(file)
        {
        file.get(ch);
        cout<<ch;
        }
    }
    }
void salary ::show(int a)
    {
    if(a==1)
    cout<<"\n\nThe person gets 1000 to 2000$ are \n\tshawkat\n\tmahmud\n\nto show their information enter name::\n";

    if(a==2)
    cout<<"\n\nThe person gets 2000 to 3000$ are \n\thasan\n\takhtar\n\nto show their information enter name::\n";

    if(a==3)
    cout<<"\n\nThe person gets 3000 to 4000$ are \n\tkabir\n\tmasud\nto show thrir information enter name::\n";

    }


class sal_1:public salary
{
  public:

};

class sal_2:public salary
{

   public:

};


class sal_3:public salary
{

   public:
};
int main()
{
     int a;
     char m[20];
     textcolor(114);
     textbackground(0);
     highvideo();
     while(1)
      {
      

     cout<<"\nif you want to exit press 0\n\nsalary starts 1000$ to 4000$\n\n enter you salary::";

     cin>>a;


    if(a>=1000 && a<=1999)
      {
        cout<<"\nyour salary lies between 1000 to 2000$";
        sal_1 s1;
        s1.show(1);
        cin>>m;
        strcat(m,".txt");
        s1.final(m);
         getch();
      }
     else if(a>=2000 && a<=2999)
      {
        cout<<"\nyour salary lies between 2000 to 3000$";
        sal_2 s2;
        s2.show(2);
        cin>>m;
        strcat(m,".txt");
        s2.final(m);
        getch();
      }
     else if(a>=3000 && a<=4000)
      {
        cout<<"\nyour salary lies between 3000 to 4000$";
        sal_3 s3;
        s3.show(3);
        cin>>m;
        strcat(m,".txt");
        s3.final(m);

        getch();
      }
      else if(a==0)

      break;
      else if(a>>4001 && a<<999)
      {
      cout<<"invalid ammount.";
      getch();
      }

      }
return 0;
}


