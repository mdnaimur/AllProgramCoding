

//Education Board GPA System.
#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
using namespace std;
class board
{
   public:
      int e_year;
      char b_name[10];
      int b_code;
    void showboard(void)
       {
       cout<<"board information";
       cout<<"\nPlease enter board  name:";
       cin>>b_name;
       cout<<"Please enter board code:";
       cin>>b_code;
    }
       };
class centre:public board
{
   public:
     char c_name[20];
     int e_year,t_student,a_can,p_student,a_student;
     void cen_info()
     {
       cout<<"\n\ncentre informaton";
       cout<<"\nPlease enter centre name:";
       cin>>c_name;
       cout<<"Please enter the exam year:";
       cin>>e_year;
       cout<<"enter number A+ candidates:";
       cin>>a_can;
       cout<<"enter number of D_A candidates:";
       cin>>p_student;
       cout<<"enter number of F candidates:";
       cin>>a_student;
       t_student=a_can+p_student+a_student;
       cout<<"total student is:";
       cout<<t_student;
      }
          };

class student:public board
{
char s_name[15];
char s_id[10];
float s_gpa;

public:
       void getinfo()
       {
       char name[15],id[10];
       cout<<"\n\nstudents result information";
       cout<<"\nPlease insert students name:";
       cin>>name;
       strcpy(s_name,name);
       cout<<"Please insert students roll no.:";
       cin>>id;
       strcpy(s_id,id);
       }
       void showinfo()
       {
       cout<<"\n\n ~*INFORMATION*~\n\n";
       cout<<"Name:"<<s_name<<"\n\n";
       cout<<"ID:"<<s_id<<"\n\n";
       cout<<"GPA:"<<s_gpa<<"\n\n";
       }
       float showgrade(int s);
       void calculate();
};

  float student::showgrade(int s)
       {
    float g;
    if((s>=80)&&(s<=100))
    g=5.00;
    else if((s<80)&&(s>=70))
    g=4.00;
    else if((s<70)&&(s>=60))
    g=3.5;
    if((s<60)&&(s>=50))
    g=3.00;
    else if((s<50)&&(s>=40))
    g=2.00;
    else if((s<40)&&(s>=33))
    g=1.00;
    else if((s<30)&&(s>=0))
    g=0.00;
      return g;
         }

void student::calculate()
{
float gp,sum=0;
int s;
cout<<"\nenter score in bangla:";
cin>>s;
gp=showgrade(s);
sum=sum+gp;

cout<<"\enter score in eng:";
cin>>s;
gp=showgrade(s);
sum=sum+gp;

cout<<"\enter score in math:";
cin>>s;
gp=showgrade(s);
sum=sum+gp;

cout<<"\enter score in phy:";
cin>>s;
gp=showgrade(s);
sum=sum+gp;

cout<<"\enter score in chem:";
cin>>s;
gp=showgrade(s);
sum=sum+gp;

s_gpa=sum/5;
}


int main()
{
 
board b;
student a[60]; int i=1,n=1;
centre c;
while(1)
{
    switch(n)
    {
    case 1:
        {
        b.showboard();
        c.cen_info();
        a[i].getinfo();
        a[i].calculate();
        a[i].showinfo();
        i++;
        break;
        }
    case 0:
        exit(1);
    default:
        cout<<"wrong choice!";
    }
    cout<<"\n\t1 to continue\n\t0to quit\nenter your choice:  ";
    cin>>n;

}
   }

