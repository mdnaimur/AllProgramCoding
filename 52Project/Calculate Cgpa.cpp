#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <conio.h>
#include <iomanip>
using namespace std;

static double upoint=0,ucredit=0;

/******************************************************************************/
class student{
        char *name;
        char *roll;
        char grade[8][10][3];
        float SGPA[8];
        float CGPA;
    public:
        student();
        void print(const int std,student *S);
        void get_grade(ifstream &I,const int sem);
        void get_stinfo(ifstream &in);
        void cal_sgpa(const int sem);
        void cal_cgpa(void);
        friend ostream &operator<<(ostream &I,student std);
        friend result(student *std,const int num);
        };
/******************************************************************************/
student::student()
    {
    name=new char[20];
    roll=new char[10];
    strcpy(name,"\0");
    strcpy(roll,"\0");
     for(int i=0;i<8;i++)
       {
       SGPA[i]=0;
      for(int j=0;j<10;j++)
       strcpy(grade[i][j],"\0");
       }
    CGPA=0;
    }
/******************************************************************************/
void student::get_stinfo(ifstream &I)
    {
    I>>roll>>name;  //getting STUDENTS information
    }
/******************************************************************************/
void student::get_grade(ifstream &in,const int sem)
{
char a[100],*p;
int sub=0;

    in.getline(a,50);
    p=strtok(a," ");
    while(p)
         {
        p=strtok(NULL," ");
        strcpy(grade[sem][sub],p);
        sub++;
         }
}
/*****************************************************************************/
void student::cal_sgpa(const int sem)
{
int sub=0;
char a[200],*p;
double crpoint[10][10],totlcrdt,totlpoint;
ifstream credit("C:\\student\\credit.txt");

     for(int i=0;i<sem;i++)
       {
        credit.getline(a,100);
        p=strtok(a," ");
        totlcrdt=crpoint[i][0]=atof(p);
        sub=0;
        totlpoint=0;
        while(1)
          {     //calculating waited GPA
            if(!strcmp(grade[i][sub],"A+"))totlpoint+= 4*crpoint[i][sub];
            else if(!strcmp(grade[i][sub],"A"))totlpoint+= 3.75*crpoint[i][sub];
            else if(!strcmp(grade[i][sub],"A-"))totlpoint+= 3.5*crpoint[i][sub];
            else if(!strcmp(grade[i][sub],"B+"))totlpoint+= 3.25*crpoint[i][sub];
            else if(!strcmp(grade[i][sub],"B"))totlpoint+= 3.00*crpoint[i][sub];
            else if(!strcmp(grade[i][sub],"B-"))totlpoint+= 2.75*crpoint[i][sub];
            else if(!strcmp(grade[i][sub],"C+"))totlpoint+= 2.5*crpoint[i][sub];
            else if(!strcmp(grade[i][sub],"C"))totlpoint+= 2.25*crpoint[i][sub];
            else if(!strcmp(grade[i][sub],"D"))totlpoint+= 2*crpoint[i][sub];
            p=strtok(NULL," ");
            sub++;
            crpoint[i][sub]=atof(p);
            totlcrdt+=atof(p);
          if(!p)break;
          }
       upoint+=totlpoint;
       ucredit+=totlcrdt;
       SGPA[i]=totlpoint/totlcrdt;
       }
       credit.close();
}
/*****************************************************************************************************/
void student::cal_cgpa(void)
    {
    CGPA=upoint/ucredit;
    upoint=0;
    ucredit=0;
    }
/****************************************************************************************************/
void student::print(const int std,student *S)
{
    getch();
     
ofstream output("C:\\student\\output.txt");
    output<<"\n\n\t==========================================================\n\n";
    output<<setw(19)<<"SERIAL\tNAME"<<setw(33)<<"ROLL"<<setw(13)<<"CGPA";
    output<<"\n\n\t==========================================================\n\n\n";
    cout<<"\n\n\t============================================\n\n";
    cout<<"\tSERIAL\tNAME\t\t       ROLL\tCGPA";
    cout<<"\n\n\t============================================\n\n\n";

     for(int i=0;i<std;i++)
    {//OUTPUT TO THE STDOUT
    cout<<"\t  "<<(i+1)<<")\t"<<S[i].name;
    cout<<setw(30-strlen(S[i].name))<<S[i].roll;
    cout<<setiosflags(ios::showpoint)<<setprecision(2);
    cout<<"\t"<<S[i].CGPA<<"\n\n";

    //OUTPUT TO YHE OUTPUT FILE
    output<<setw(10)<<(i+1)<<")\t"<<S[i].name;
    output<<setw(40-strlen(S[i].name))<<S[i].roll;
    output<<setiosflags(ios::showpoint)<<setprecision(2);
    output<<setw(10)<<S[i].CGPA<<"\n\n";

    }
}
/************************************************************************************/
ostream &operator<<(ostream &I,student std)
{
//printing for individual STUDENT
fstream out1("C:\\student\\output1.txt",ios::app|ios::out);
    I.precision(2);
    out1<<"NAME : "<<std.name<<endl;
    out1<<"ROLL : "<<std.roll<<endl;
    out1<<"CGPA : "<<std.CGPA<<"\n\n";
    I<<"NAME : "<<std.name<<endl;
    I<<"ROLL : "<<std.roll<<endl;
    I<<"CGPA : "<<std.CGPA<<"\n\n";
return I;
}
/************************************************************************************/
result(student *std,const int num)
{ //sorting with respect to CGPA
student temp;
     for(int i=1;i<num;++i)
    for(int j=num-1;j>=i;--j)
       {
        if(std[j].CGPA>std[j-1].CGPA)
          {
        temp=std[j-1];
        std[j-1]=std[j];
        std[j]=temp;
          }
       }
return 0;
}
/************************************************************************************/
int main()
{
 
student S[60];
int i,j,std,semst;
char buf[30];
ifstream sem[10],I("C:\\student\\std_info.txt");

cout<<"Enter how many students:";
cin>>std;
cout<<"Enter how many semtrs:";
cin>>semst;
cout<<"\n\nUNSORTED RESULT..........\n\n";

   for(i=0;i<semst;i++)
       {
       sprintf(buf,"C:\\student\\sem%d.txt",(i+1));
       sem[i].open(buf);
       }
   for(j=0;j<std;j++)
      {
       S[j].get_stinfo(I);
      for(i=0;i<semst;i++)
     {
      S[j].get_grade(sem[i],i);
      }
       S[j].cal_sgpa(semst);
       S[j].cal_cgpa();
       cout<<S[j];
      }

   for(i=0;i<semst;i++)
       sem[i].close();
   I.close();

   result(S,std);
   S[0].print(std,S);
getch();
}


