#include <iostream>
#include<dir.h>
#include <conio.h>
#include <string.h>
#include <fstream>
#include <iomanip>
#include <stdio.h>
using namespace std;
class student
{
    protected:
        char name[50][20];
        int roll[50];
        int pos[50];
};

class details:private student
{
    private:
    char det[100];
   public:
    void get(char *);
      void show(char *);
};

void details::get(char *a)
{
    char b[20]="Info\\";
    strcat(b,a);
    std::ofstream out;
    mkdir("Info");

    strcat(b,".txt");
    out.open(b);
    cout<<"\nFathar name    : ";
    out<<"\nFathar name    : ";
    gets(det);
    out<<det<<endl;
    cout<<"\nMothar name    : ";
    out<<"\nMothar name    : ";
    gets(det);
    out<<det<<endl;
    cout<<"\nVillage        : ";
    out<<"\nVillage        : ";
    gets(det);
    out<<det<<endl;
    cout<<"\nSchool name    : ";
    out<<"\nSchool name    : ";
    gets(det);
    out<<det<<endl;
    cout<<"\nCollege name   : ";
    out<<"\nCollege name   : ";
    gets(det);
    out<<det<<endl;
    out.close();
}

void details::show(char *a)
{
   char b[20]="Info\\";
   if(strcmp(a,"no")==0)
   {
    cout<<"\nInvalid position.";
      getch();
   }
   else
   {
   ifstream in;
   strcat(b,a);
   strcat(b,".txt");
   in.open(b);
    
   while(in)
   {
     in.getline(det,100);
     cout<<det<<endl;
   }
   getch();
   in.close();
   }
}

class mig:private student
{
    private:
        int choice[50][6];
        int dep_pos[50];
        int a,b,c,d,e,f,z,count;
        char all[50][5];
        char new_dep[50][5];
    public:
        mig (void){a=0;b=0;c=0;d=0;e=0;f=0;z=0;count=0;}
        void merite_list(void);
        void old_dept(void);
        void new_dept(int);
        int migration(void);
        void see_list(void);
        char * add(void);
        char * srch(void);
};

char * mig :: srch()
{
    int i,j=32+count,k;
    cout<<"\nEnter position  : ";
    cin>>i;
    for(k=0;k<j;k++)
    {
      if(pos[k]==i)
      return name[k];
    }
    return ("no");
}

void mig :: merite_list(void)
{
    int i;
    ifstream in;
    in.open("M.txt");
    while (in.eof()==0)
    {
      in>>name[z]>>pos[z]>>roll[z];
      for(i=0;i<6;i++)
        in>>choice[z][i];
      z++;
    }
    in.close();
}

char * mig :: add ()
{
    int i;
    ofstream out;

    out.open("M.txt",ios::app);
    cout<<"\n\nEnter Name     : ";
    cin>>name[z];
    out<<endl<<name[z]<<"\ ";
    cout<<"\nEnter Possition : ";
    cin>>pos[z];
    out<<pos[z]<<"\ ";
    cout<<"\nEnter Roll      : ";
    cin>>pos[z];
    out<<pos[z]<<"\ ";
    cout<<"\n1.CSE   2.EEE   3.ECE   4.CE   5.ME   6.IEM.\n\n";
    for(i=0;i<6;i++)
    {
      cout<<" choice "<<i+1<<" : ";
      cin>>choice[z][i];
      out<<choice[z][i];
      if(i!=5)
        out<<"\ ";
    }
    out.close();
    z++;
    return name[z-1];
}

void mig :: old_dept()
{
    int i,j=0;
    for(i=0;i<32;i++)
    {
      srch:if(choice[i][j]==1)
      {
        if (a<4)
        {
          dep_pos[i]=j;
          strcpy(all[i],"CSE");
          strcpy(new_dep[i],"CSE");
          a++;
          j=0;
        }
        else
        {
          j++;
          goto srch;
        }
      }
      else if(choice[i][j]==2)
      {
        if (b<8)
        {
          dep_pos[i]=j;
          strcpy(all[i],"EEE");
          strcpy(new_dep[i],"EEE");
          b++;
          j=0;
        }
        else
        {
          j++;
          goto srch;
        }
      }
      else if(choice[i][j]==3)
      {
        if (c<2)
        {
          dep_pos[i]=j;
          strcpy(all[i],"ECE");
          strcpy(new_dep[i],"ECE");
          c++;
          j=0;
        }
        else
        {
          j++;
          goto srch;
        }
      }
      else if(choice[i][j]==4)
      {
        if (d<8)
        {
          dep_pos[i]=j;
          strcpy(all[i],"CE");
          strcpy(new_dep[i],"CE");
          d++;
          j=0;
        }
        else
        {
          j++;
          goto srch;
        }
      }
      else if(choice[i][j]==5)
      {
        if (e<8)
        {
          dep_pos[i]=j;
          strcpy(all[i],"ME");
          strcpy(new_dep[i],"ME");
          e++;
          j=0;
        }
        else
        {
          j++;
          goto srch;
        }
      }
      else if(choice[i][j]==6)
      {
        if (f<2)
        {
          dep_pos[i]=j;
          strcpy(all[i],"IEM");
          strcpy(new_dep[i],"IEM");
          f++;
          j=0;
        }
        else
        {
          j++;
          goto srch;
        }
      }
    }
}

void mig :: see_list(void)
{
    int i,j=0,k=1,l=32+count,m=1;
     

    ofstream out("New_list.doc");
    if(l<=32)
    {
      cout<<"Srl.   Name       Roll    Possition   Dept  (CSE  EEE  ECE  CE   ME   IEM)\n";
      out<<"Srl.   Name       Roll    Possition   Dept  (CSE  EEE  ECE  CE   ME   IEM)\n";
      for(i=0;i<74;i++)
      {
        cout<<(char)45;
        out<<(char)45;
      }
      cout<<endl;
      out<<endl;
      for(i=0;i<l;i++)
      {
        if(pos[i]!=0)
        {
          cout.setf(ios::left);
          out.setf(ios::left);
          cout<<setw(0)<<" "<<setw(5)<<k<<setw(12)<<name[i]<<setw(12)<<roll[i]<<setw(8)<<pos[i]<<setw(5)<<all[i]<<setw(4);
          out<<setw(0)<<" "<<setw(5)<<k<<setw(12)<<name[i]<<setw(12)<<roll[i]<<setw(8)<<pos[i]<<setw(5)<<all[i]<<setw(4);
          cout.setf(ios::right);
          out.setf(ios::right);
          while(1)
          {
        if(choice[i][j]==m)
        {
          cout<<(j+1)<<setw(5);
          out<<(j+1)<<setw(5);
          j=-1;
          m++;
        }
        if(m==7)
        {
          m=1;
          break;
        }
        j++;
          }
          cout<<endl;
          out<<endl<<endl;
          k++;
        }
      }
    }
    else
    {
      cout<<"Srl.   Name       Roll    Pos   Old Dep.   New Dep.   (CSE EEE ECE CE  ME  IEM)\n";
      out<<"Srl.   Name       Roll   Pos   Old Dep.   New Dep.   (CSE EEE ECE CE  ME  IEM)\n";
      for(i=0;i<79;i++)
      {
        cout<<(char)45;
        out<<(char)45;
      }
      cout<<endl;
      out<<endl;
      for(i=0;i<l;i++)
      {
        if(pos[i]!=0)
        {
          cout.setf(ios::left);
          out.setf(ios::left);
          cout<<setw(0)<<" "<<setw(5)<<k<<setw(12)<<name[i]<<setw(9)<<roll[i]<<setw(7)<<pos[i]<<setw(11)<<all[i]<<setw(6)<<new_dep[i]<<setw(5);
          out<<setw(0)<<" "<<setw(5)<<k<<setw(12)<<name[i]<<setw(9)<<roll[i]<<setw(7)<<pos[i]<<setw(11)<<all[i]<<setw(6)<<new_dep[i]<<setw(5);
          strcpy(all[i],new_dep[i]);
          cout.setf(ios::right);
          out.setf(ios::right);
          while(1)
          {
        if(choice[i][j]==m)
        {
          cout<<(j+1)<<setw(4);
          out<<(j+1)<<setw(4);
          j=-1;
          m++;
        }
        if(m==7)
        {
          m=1;
          break;
        }
        j++;
          }
          cout<<endl;
          out<<endl<<endl;
          k++;
        }
      }
    }
    out.close();
    getch();
}

int mig :: migration ()
{
    int i,j,l,m,x=0,y=0;
    int n=32+count;
    cout<<"\nEnter the position: ";
    cin>>i;
    if(n<z)                      //1st if.
    {
      count++;
      for(j=0;j<n;j++)    //1st for loop.
      {
        if (pos[j]==i)        //2nd if.
        {
          y++;
          pos[j]=0;
          while(j<n)
        {
          if(x==0)        //3rd if.
          {
            if (strcmp(all[j],"CSE")==0)
              {
                a--;
                m=1;
              }

            if (strcmp(all[j],"EEE")==0)
              {
                b--;
                m=2;
              }

            if (strcmp(all[j],"ECE")==0)
              {
                c--;
                m=3;
              }

            if (strcmp(all[j],"CE")==0)
              {
                d--;
                m=4;
              }

            if (strcmp(all[j],"ME")==0)
              {
                e--;
                m=5;
              }

            if (strcmp(all[j],"IEM")==0)
              {
                f--;
                m=6;
              }

          }        //end of 3rd if.

       next:  j++;
          if (pos[j]==0)
            goto next;
          x=1;
          for(l=0;l<dep_pos[j];l++)       //2nd for loop.
          {
            if(choice[j][l]==m)
              {
            if (m==1)
              {
                strcpy(new_dep[j],"CSE");
                a++;
                x=0;
              }
            if (m==2)
              {
                strcpy(new_dep[j],"EEE");
                b++;
                x=0;
              }
            if (m==3)
              {
                strcpy(new_dep[j],"ECE");
                c++;
                x=0;
              }
            if (m==4)
              {
                strcpy(new_dep[j],"CE");
                d++;
                x=0;
              }
            if (m==5)
              {
                strcpy(new_dep[j],"ME");
                e++;
                x=0;
              }
            if (m==6)
              {
                strcpy(new_dep[j],"IEM");
                f++;
                x=0;
              }
            break;
              }
          }                    //end of 2nd for loop.
        }                        //end of while.
          break;
        }                        //end of 2nd if.
      }             //end of 1st for loop.
      if (y!=0)
        return j;
      else
      {
        count--;
        cout<<"\n\nInvalid roll no....\a\a";
        getch();
        return 0;
      }
    }                                               //end of 1st if.
    else
    {
      cout<<"No student left...!!!!\a";
      getch();
      return 0;
    }
}                            //end of migration.

void mig :: new_dept(int i)
{
    int j=0;
    srch:if(choice[i][j]==1)
      {
        if (a<4)
        {
          dep_pos[i]=j;
          strcpy(all[i],"...");
          strcpy(new_dep[i],"CSE");
          a++;
          j=0;
        }
        else
        {
          j++;
          goto srch;
        }
      }
      else if(choice[i][j]==2)
      {
        if (b<8)
        {
          dep_pos[i]=j;
          strcpy(all[i],"...");
          strcpy(new_dep[i],"EEE");
          b++;
          j=0;
        }
        else
        {
          j++;
          goto srch;
        }
      }
      else if(choice[i][j]==3)
      {
        if (c<2)
        {
          dep_pos[i]=j;
          strcpy(all[i],"...");
          strcpy(new_dep[i],"ECE");
          c++;
          j=0;
        }
        else
        {
          j++;
          goto srch;
        }
      }
      else if(choice[i][j]==4)
      {
        if (d<8)
        {
          dep_pos[i]=j;
          strcpy(all[i],"...");
          strcpy(new_dep[i],"CE");
          d++;
          j=0;
        }
        else
        {
          j++;
          goto srch;
        }
      }
      else if(choice[i][j]==5)
      {
        if (e<8)
        {
          dep_pos[i]=j;
          strcpy(all[i],"...");
          strcpy(new_dep[i],"ME");
          e++;
          j=0;
        }
        else
        {
          j++;
          goto srch;
        }
      }
      else if(choice[i][j]==6)
      {
        if (f<2)
        {
          dep_pos[i]=j;
          strcpy(all[i],"...");
          strcpy(new_dep[i],"IEM");
          f++;
          j=0;
        }
        else
        {
          j++;
          goto srch;
        }
      }
      see_list();
}

int main ()
{
    int i,j=0;
    details d;
    mig kuet;
   // textcolor(114);
   // textbackground(4);
   // highvideo();
     


    while(1)
    {
      cout<<"What do you want to do?"<<endl;
      cout<<"\n1:Make the merit list.";
      cout<<"\n2:See list.";
      cout<<"\n3:Migration.";
      cout<<"\n4.Add new student.";
      cout<<"\n5.See a student details.";
      cout<<"\n6:Exit."<<endl<<endl;
      cout<<"\nChose a no.:";
      cin>>i;
      switch(i)
      {
        case 1:
            {
               if (j!=0)
               {
             cout<<"Merite list is already been made.";
             getch();
               }
               else
               {
             kuet.merite_list();
             kuet.old_dept();
             j++;
               }
               break;
            }
        case 2:
            {
            if(j==0)
            {
              cout<<"\n\n   First make a merite list...";
              getch();
            }
            else
              kuet.see_list();
            break;
            }
        case 3:
            {
            if(j==0)
            {
              cout<<"\n\n   First make a merite list...";
              getch();
            }
            else
              kuet.new_dept(kuet.migration());
            break;
            }
        case 4:
            {
            if(j==0)
            {
              cout<<"\n\n   First make a merite list...";
              getch();
            }
            else
              d.get(kuet.add());
              break;
            }
        case 5:
            {
            d.show(kuet.srch());
            break;
            }
        case 6:
            {
            cout<<"Thank you....";
            break;
            }
      }
      if(i==6)
        break;
       
    }
    getch();
    return 0;
}
