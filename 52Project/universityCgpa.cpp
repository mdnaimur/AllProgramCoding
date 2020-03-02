#include<fstream>
#include<string.h>
#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
class student{
          protected:
          char name[40];
          char roll[10];
          char dep[5];
          char batch[5];
          void get(){
           cout<<"\n enter the name";
           cin>>name;
           cout<<"\n enter the roll";
           cin>>roll;
           cout<<"\n enter the deperment";
           cin>>dep;
           cout<<"\n enter the batch";
           cin>>batch;

          }

};

class cgpa:protected student{
                  private:
                  char subname[10][20];
                  char subcode[10][20];
                  float gpa[10];
                  float credit[10];
                  float totalcredit;
                  float subg[10];
                  float total;
                  int i;
                  float grade;
                  char gradeno[4];
                  public:
                   void getgpa();
                   void file();
                   void gra(float);
                   };

    void cgpa::gra(float k){   while(1)
                  {
                  if(k<2.0)
                  { strcpy(gradeno,"F");
                   break;
                  }
                  else if(k<2.25)
                   {strcpy(gradeno,"D" );
                break;
                   }
                   else if(k<2.5)
                   {strcpy(gradeno,"c" );
                break;
                   }
                   else if(k<2.75)
                   {strcpy(gradeno,"c+" );
                break;
                   }
                   else if(k<3.0)
                   {strcpy(gradeno,"B-" );
                break;
                   }
                   else if(k<3.25)
                   {strcpy(gradeno,"B" );
                break;
                   }
                   else if(k<3.5)
                   {strcpy(gradeno,"B+" );
                break;
                   }
                   else if(k<3.75)
                   {strcpy(gradeno,"A-" );
                break;
                   }
                   else if(k<4.0)
                   {strcpy(gradeno,"A" );
                break;
                   }
                   else if(k==4)
                   {strcpy(gradeno,"A+" );
                break;
                   }

                   }

    }
    void  cgpa::getgpa(){get();
                totalcredit =0;
                total=0;
                cout<<"\n HOW MANY SUBJECT IN HIS EXAM HE ATTEND";
                cin>>i;
                for(int j=0;j<i;j++)
                   { cout<<"\n enter the subject name ";
                   gets(subname[j]);
                   cout<<"\n enter the subject code ";
                   gets(subcode[j]);
                   cout<<"\n enter the credit of that subject ";
                   cin>>credit[j];
                   cout<<"\n enter the gpa of that subject";
                   cin>>gpa[j];
                   totalcredit=totalcredit+credit[j];
                   subg[j]=gpa[j]*credit[j];
                   total=subg[j]+total;
                   }
                   grade=total/totalcredit;
                   cout<<"RESULT "<<grade;
                   gra(grade);
                   cout<<"\nGRADE "<<gradeno;
                   getch();
                   fstream x("RESULT",ios::app|ios::out);
                   x<<endl
                   <<name<<"\t"<<roll<<"\t"<<grade<<"\t"<<gradeno<<endl;
                   x.close();
                   }
     void cgpa::file()
           { getgpa();
           ofstream out(roll);
           out<<"\nname "<<name;
           out<<"\nroll "<<roll;
           out<<"\ndeperment "<<dep;
           out<<"\n batch "<<batch;
           out<<"\n\n\n subject name\t subject code\t credit of that subject\tgpa of that subject";
                 for(int j=0;j<i;j++)
                   {out<<"\n";
                   out<<subname[j];
                   out<<"\t\t\t"<<subcode[j];
                   out<<"\t\t\t" ;
                   out<<credit[j];
                   out<<"\t\t\t" ;
                   out<<gpa[j];
                  }
         out<<"\n\nTOTTAL CREDIT= "<<totalcredit;
         out<<"\n\nTOTAL GRADE POINT "<<grade;
         out<<"\n\nCGPA "<<gradeno;
         out.close();
         }



int main()
{

 int p;
 while(1)
 {
 cout<<"1..input\n2...show\n3...search\n4...exit";
  cin>>p;
 if(p==1)
 {cgpa x;
 x.file();
 }
 if(p==2)
   {cout<<"input the roll";
    char roll[20];
    cin>>roll;
    char c;
     
    ifstream x(roll);
    while(x)
      {  x.get(c);
       cout<<c;

      }
      getch();
   }
   if(p==3)
   { 
   char c;
     ifstream x("RESULT");
     while(x)
      {x.get(c);
      cout<<c;
      }
      getch();

   }
   if(p==4)
   break;
 }
   return 0;
}

