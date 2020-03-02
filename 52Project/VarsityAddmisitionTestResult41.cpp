

//Varsity Admission Test Result.
#include<iostream>
#include<conio.h>
#include<math.h>
#include<string.h>
#include<iomanip>
#include<stdlib.h>
#include<stdio.h>
#include<fstream>

using namespace std;

class table1     //for publishing selected student
{ public:

     float total1[30];
     char name1[30][30];
     long int form1[30];
     int count;
     int count1;
     table1(){count=0;count1=0;}

        };


class project:public table1            //for input of the student information
{
 protected:
     long int form_no[30];
     char name[30][30];
     float phy[30];
     float chem[30];
     float math[30];
     float eng[30];
     float total[30];
     int roll[30];
  public:
     project(){};
     void input(int);
     void sum(int);
     void sort(int);
     void sort(int ,int);
     void sort_total(int i,int j);
     void sort_name(int ,int);
     void sort_formno(int ,int);
     void sort_phy(int ,int);
     void sort_chem(int,int);
     void sort_math(int,int);
     void sort_eng(int ,int);
     void show1(void);
     void changevar(int );
};

class table2 :public project            //for publishing merit list of the selected student
{ protected:

     float marks[30];
     float marks1[30];
     int roll2[30];
     int rollin[30];
     int meritpos[30];
     int waitpos[30];
     long int form2[30];
public:
     table2(){}
     void getmarks(void);
     void comparemarks(void);

     void publishpos(void);
     void search(int);
};
/*project::project(size)
{
    for(int i=0;i<size;i++)
    total[i]=0;
                    // roll[i]=0;
}*/
void project::input(int size)
{
   for(int i=0;i<size;i++)
    {
     cout<<"\n candidate's name"<<i+1<<":";
     cin>>name[i];
     cout<<"form number:" ;
     cin>>form_no[i];
     cout<<"\ngpa in physics:";
     cin>>phy[i];
     cout<<"\ngpa in chemistry:";
     cin>>chem[i];
     cout<<"\ngpa in mathmatics:";
     cin>>math[i];
     cout<<"\ngpa in english:";
     cin>>eng[i];
     cout<<"\n";
}
}
void project::sum(int size)
{
    for(int i=0;i<size;i++)
    total[i]=phy[i]+chem[i]+math[i]+eng[i];
}
void project:: sort_name(int i ,int j)
{
        char n1[30];
        strcpy(n1,name[i]);
        strcpy(name[i],name[j]);
        strcpy(name[j],n1);
}
void project::sort_formno(int i,int j)
    {
        long int form=form_no[i];
        form_no[i]=form_no[j];
        form_no[j]=form;
    }
void project::sort_total(int i,int j)
    {
     float temp=total[i];
      total[i]=total[j];
      total[j]=temp;
      }
 void project::sort_phy(int i,int j)
      {
      float a=phy[i];
        phy[i]=phy[j];
        phy[j]=a;
      }
void project:: sort_chem(int i,int j)
         {
         float b=chem[i];
         chem[i]=chem[j];
         chem[j]=b;
        }
void project:: sort_math(int i,int j)
         {
         float c=math[i];
        math[i]=math[j];
        math[j]=c;
        }
void project::sort_eng(int i,int j)
        {
          float d=eng[i];
        eng[i]=eng[j];
        eng[j]=d;
        }
void project::sort(int i,int j)
                 { sort_total(i,j);
                     sort_name(i,j);
                     sort_formno(i,j);
                     sort_phy(i,j);
                     sort_chem(i,j);
                     sort_math(i,j);
                     sort_eng(i,j);
                  }


void project::sort(int size)
{
     for(int i=0;i<size;i++)
{
     for(int j=i+1;j<size;j++)
{
     if(total[i]!=total[j])
      {
          if(total[i]<total[j])
          {
            sort(i,j);
         }
      }
  else
     {
        if(math[i]!=math[j])
          {
             if(math[i]<math[j])
             {
                sort(i,j);
            }
         }
      else
         {
          if(phy[i]!=phy[j])
             {
                if(phy[i]<phy[j])
                     {
                      sort(i,j);
                     }
              }
              else
              {
              if(chem[i]!=chem[j])
              {
                if(chem[i]<chem[j])
                    {
                        sort(i,j);
                     }
                  }
            else
            {
             if(eng[i]!=eng[j])
             {
              if(eng[i]<eng[j])
              {
                     sort(i,j);

                }
            }
        else
        {
          if(form_no[i]!=form_no[j])
          {
            if(form_no[i]>form_no[j])
             {
                  sort(i,j);
             }
         }

        }
        }
        }
        }
        }
        }
        }
        }


void table2::getmarks()
{     cout<<"roll no should be qulified student's roll\n";

    for(int i=0;i<count;i++)
    {
      cout<<"enter admission test roll"<<i+1<<":";
      cin>>rollin[i];
      cout<<"\nenter the admission test marks:";
      cin>>marks[i];
      cout<<endl;
    }
 }



 void table2::comparemarks()
 {
     int i,j;
    for( i=0;i<count;i++)
    {
    for( j=0;j<count;j++)          //initial roll and input roll test
     {
        if(rollin[i]==roll[j])
        {
            roll2[count1]=rollin[i];              //
            marks1[count1]=marks[i];
            form2[count1]=form1[j];
            count1++;
        break;
        }
      }
    }
  for( i=0;i<count1;i++)
  {
  for( j=i+1;j<count1;j++)
  {
  if(marks1[i]<marks1[j])
  {
  float t1=marks1[i];
  marks1[i]=marks1[j];
  marks1[j]=t1;

  int r1=roll2[i];
  roll2[i]=roll2[j];
  roll2[j]=r1;

  long int fm;
  fm=form2[i];
  form2[i]=form2[j];
  form2[j]=fm;
  }
  }
  }
 }

void table2::publishpos()
{
    for(int j=0;j<count1;j++)
    {
        meritpos[j]=j+1;
        }
       ofstream fout("c:\merit.txt");

     cout<<"roll"<<"\t"<<"merit"<<endl;
     fout<<"roll"<<"\t"<<"merit"<<endl;
     cout<<"----\t----\n";
     fout<<"----\t----\n";
    for(int i=0;i<count1;i++)
       {    cout<<roll2[i]<<"\t"<<meritpos[i]<<endl;
        fout<<roll2[i]<<"\t"<<meritpos[i]<<endl;
       }
}

void project::changevar(int size)
{ int j=1;
          for(int i=0;i<size;i++)
         {
         if(total[i]>=17&&phy[i]>=3.5&&chem[i]>=3.5&&math[i]>=3.5&&eng[i]>=3.5)
         {
             strcpy(name1[count],name[i]);
          total1[count]=total[i];
          form1[count]=form_no[i];
          roll[count]=j++;
          count++;
         }
          }
}

void project::show1()
{
      ofstream fout("c:\out.txt");
         cout<<"form\tname\troll\n";
         fout<<"form\tname\troll\n";
         cout<<"----\t----\t----\n";
         fout<<"----\t----\t----\n";
     for(int i=0;i<count;i++)
     {
     cout<<form1[i]<<"\t"<<name1[i]<<"\t"<<roll[i]<<endl;
     fout<<form1[i]<<"\t"<<name1[i]<<"\t"<<roll[i]<<endl;

          }
    fout.close();

}


void table2::search(int a)
{   int t;
int i;
    for( i=0;i<count1;i++)
    {
    if(form2[i]==a)
    { t=1;
    break;
    }
    else
    t=0;
    }
 if(t==1)
 {
     cout<<"\nCONGRATULATIONS!\nyou have been selected for admission\n"<<endl;
     
 cout<<" \nyour roll is :"<<roll2[i]<<endl;
 cout<<"you have meritposition:"<<meritpos[i]<<endl;
 }
 else
 {cout<<"\nSORRY!\n your roll number is not found . may be you are disqualified\n"<<endl;
 }

}



int main()
{
  
 //textbackground(WHITE);
 //textcolor(BLUE);
 int no;
 cout<<"how many candidates:";
 cin>>no;
table2 t2;
int ch;
cout<<"enter candidate's informations\n";
t2.input(no);
t2.sum(no);
t2.sort(no);
t2.changevar(no);

do
{
cout<<"\n1-show valid student list\n2-show merit list\n3-search student\n4-exit";
cout<<"\nenter command\n";
cin>>ch;
switch(ch)
{
case 1:
 
cout<<"following candidate's are eligible for admission text\n";
cout<<"==========================\n";
t2.show1();
cout<<"\n========================\n";
break;
case 2:
 
t2.getmarks();
t2.comparemarks();
cout<<"the following candidate's are elligible for admission\n";
cout<<"==========================\n";
t2.publishpos();
cout<<"\n========================\n";
break;
case 3:
 
long int f;
cout<<"enter your form number:";
cin>>f;
t2.search(f);
break;
case 4:
exit(1);
default:
cout<<"unknown comand !try again ,please\n";
break;
}
} while(1);

return 0;
}


