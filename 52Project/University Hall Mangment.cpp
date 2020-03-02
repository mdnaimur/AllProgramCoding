
//University Hall Management.
            /***** HALL MANAGEMENT *****/


#include<iostream>
#include<conio.h>
#include<fstream>
#include<string.h>
#include<dir.h>
#include<stdlib.h>
#include<dos.h>
using namespace std;
class hall{
         protected:
         int room;
         char hallname[20];
         public:
         void gethallinfo()
                 {  
				 cout<<"\n WHAT IS THE HALL NAME?\n :";
                cin>>hallname;
                cout<<"\n HOW MANY ROOM IN THAT HALL?\n :";
                cin>>room;

                 }
                 void dishallinfo()
                 {  cout<<"\n HALL NAME?\n";
                cout<<hallname;
                cout<<"\n ROOM IN HALL:";
                cout<<room<<endl;

                 }



};

class room:public hall
       {
        protected:
        char roomno[4];
        public:
        void getroom(){cout<<"\n\n Input the room no:";
               cin>>roomno;

        }

        };

class student:public room{
               public:
               char id[4];
               char name[20];

               void getstinfo(){
               cout<<"\n   Input the student name:";
               cin>>name;
               cout<<"\n   Input the student id:";
               cin>>id;
               }
               void disstinfo(){
               cout<<"\n  Student's name:"<<name;
               cout<<"\n  Input the student id:"<<id;
               }

};


class getfile:public student
          {char filename[40];
           public:
           void file();
};

void getfile::file()
           { class student s[3];
        gethallinfo();
         for(int i=0;i<room;i++)
         {
         getroom();
         cout<<"\n Input four student informations who live in that room:-\n" ;
        for(int i=0;i<4;i++)
            {
              s[i].getstinfo();
              char la[20];
              strcpy(la,s[i].id);
              ofstream per(la);
              per<<" ROOM NO : "<<roomno<<endl;
              per<<" HALL NAME: "<<hallname<<endl;
              per.close();
            }
            mkdir(hallname) ;
            char a[50];
            strcpy(a,hallname);
            strcat(a,"\\");
            strcat(a,roomno);
            ofstream ro(a);
            for(i=0;i<4;i++)
            {
             ro<<s[i].name<<" ";
             ro<<s[i].id;
             ro<<endl;
            }

          }

           } ;

class disfile:public student
          { public:
           void display();
           };

void disfile:: display(){
           int y;
           cout<<"\n\n What do you want to search ?\n\n  1...student\n  2....room\n"
           <<"  Choise:";
           cin>>y;
           if(y==1)
           {clrscr();
        cout<<"\n Input the student id:"  ;
        char r[20],m;
        cin>>r;
        ifstream dd(r);
        if(!dd)
        cout<<"\n Error!";
        else
        {while(dd)
        {dd.get(m);
        cout<<m;
        }
        }
        getch();
        dd.close();
           }
           if(y==2)
           {clrscr();
        char hn[40], rn[5];
        cout<<"\n Input the hall name:";
        cin>>hn;
        cout<<"\n Input the room number:";
        cin>>rn;
        char a[50];
            strcpy(a,hn);
            strcat(a,"\\");
            strcat(a,rn);
            ifstream ro(a);
            char m;
            if(!ro)
            cout<<"\n Error!";
            else
              {cout<<"\nStudent name and id:\n";
              while(ro)
               {ro.get(m);
            cout<<m;
            }
        }
        getch();

        ro.close();

           }
         }




 int main()
 {
  textcolor(33);
  textbackground(114);
  clrscr();
  cout<<"\n\t\t******** WELCOME TO THE HALL MANAGEMENT ******** ";
  delay(3000);
  getfile a;
  disfile d;
  while(1)
  {cout<<"\n\n\n 1...input\n 2...search\n 3...exit\n Choise:";
  int j;
  cin>>j;
  if(j==1)
  {a.file();
  }
  if(j==2)
  {clrscr();
   d.display();
  }
  if(j==3)
  break;
  }
  return 0;


 }


