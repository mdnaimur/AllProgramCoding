#include<stdio.h>
#include<conio.h>
#include<iomanip>
#include<fstream>
#include<string.h>
#include<dos.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
class versity

   {
    public:
        char name[20];
        char id[10];
        float salary;
        void time_date(void);
   };

class teacher:public versity

  {

  };

class professor:public teacher

  {
    public:
        void get_data1(void);
        void show();
  };

void professor::get_data1(void)

  {
    cout<<"\n\nEnter professor's name  :";
    gets(name);
    cout<<"\n\nEnter professor's id    :";
    gets(id);
    cout<<"\n\nEnter professor's salary:";
    cin>>salary;

    char file[20];
    strcpy(file,id);
    strcat(file,".txt");
    ofstream x(file);
    x<<"NAME           : ";
    x<<name;
    x<<"\nPOSITION      : PROFESSOR";
    x<<"\nID            : ";
    x<<id;
    x<<"\nSALARY        : ";
    x<<salary;
    x.close();

    fstream y("PROFESSO.txt",ios::app|ios::out);
    y.setf(ios::right);
    y.width(14);
    y<<name;
    y.width(19);
    y<<id;
    y.width(21);
    y<<salary<<endl;
    y.close();

    fstream t("TEACHER.txt",ios::app|ios::out);
    t.setf(ios::right);
    t.width(14);
    t<<name;
    t.width(18);
    t<<"PROFESSOR";
    t.width(19);
    t<<id;
    t.width(21);
    t<<salary<<endl;
    t.close();

  }

class lecturar:public teacher

  {
    public:
        void get_data2(void);
        void show_data2(int m);
        void show();
  };

void lecturar::get_data2(void)

  {

    cout<<"\n\nEnter lecturar's name  :";
    gets(name);
    cout<<"\n\nEnter lecturar's id    :";
    gets(id);
    cout<<"\n\nEnter lecturar's salary:";
    cin>>salary;

    char file[20];
    strcpy(file,id);
    strcat(file,".txt");
    ofstream x(file);
    x<<"\nNAME      : ";
    x<<name;
    x<<"\nPOSITION  : LECTURAR";
    x<<"\nID        : ";
    x<<id;
    x<<"\nSALARY    : ";
    x<<salary;
    x.close();

    fstream y;
    y.open("LECTURE.txt",ios::app|ios::out);
    y.setf(ios::right);
    y.width(14);
    y<<name;
    y.width(20);
    y<<id;
    y.width(20);
    y<<salary<<endl;
    y.close();

    fstream t("TEACHER.txt",ios::app|ios::out);
    t.setf(ios::right);
    t.width(14);
    t<<name;
    t.width(17);
    t<<"LECTURER";
    t.width(20);
    t<<id;
    t.width(21);
    t<<salary<<endl;
    t.close();
  }

class staff:public versity

 {
     public:

 };

class officer:public staff

 {
     public:
     void get_data4(void);
     void show_data4(int m);
     void show();
 };

void officer::get_data4(void)

{
    cout<<"\n\nEnter officer's name  :";
    gets(name);
    cout<<"\n\nEnter officer's id    :";
    gets(id);
    cout<<"\n\nEnter officer's salary:";
    cin>>salary;

    char file[20];
    strcpy(file,id);
    strcat(file,".txt");
    ofstream x(file);
    x<<"\nNAME      : ";
    x<<name;
    x<<"\nPOSITION  : OFFICER" ;
    x<<"\nID        : ";
    x<<id;
    x<<"\nSALARY    : ";
    x<<salary;
    x.close();

    fstream y("OFFICER.txt",ios::app|ios::out) ;
    y.setf(ios::right);
    y.width(14);
    y<<name;
    y.width(18);
    y<<id;
    y.width(22);
    y<<salary<<endl;
    y.close();

    fstream s("STAFF.txt",ios::app|ios::out) ;
    s.setf(ios::right);
    s.width(14);
    s<<name;
    s.width(16);
    s<<"OFFICER";
    s.width(21);
    s<<id;
    s.width(21);
    s<<salary<<endl;
    s.close();

  }

class medical_off:public staff

  {
      public:
      void get_data5(void);
      void show_data5(int m);
      void show();
  };

void medical_off::get_data5(void)

  {
     cout<<"\n\nEnter medical_off's name  :";
     gets(name);
     cout<<"\n\nEnter medical_off's id    :";
     gets(id);
     cout<<"\n\nEnter medical_off salary  :";
     cin>>salary;

     char file[20];
     strcpy(file,id);
     strcat(file,".txt");
     ofstream x(file);
     x<<"\nNAME      : ";
     x<<name;
     x<<"\nPOSITION  : MEDICAL OFFICER.";
     x<<"\nID        : ";
     x<<id;
     x<<"\nSALARY    : ";
     x<<salary;
     x.close();

     fstream y("MEDICAL.txt",ios::app|ios::out) ;
     y.setf(ios::right);
     y.width(14);
     y<<name;
     y.width(18);
     y<<id;
     y.width(23);
     y<<salary<<endl;
     y.close();

     fstream s("STAFF.txt",ios::app|ios::out) ;
     s.setf(ios::right);
     s.width(14);
     s<<name;
     s.width(25);
     s<<"MEDICAL OFFICER.";
     s.width(12);
     s<<id;
     s.width(21);
     s<<salary<<endl;
     s.close();
  }

class lab_assistent:public staff

  {
      public:
      void get_data6(void);
      void show_data6(int m);
      void show();
  };

void lab_assistent::get_data6(void)

  {
      cout<<"\n\nEnter lab_assistent's name  :";
      gets(name);
      cout<<"\n\nEnter lab_assistent's id    :";
      gets(id);
      cout<<"\n\nEnter lab_assistent's salary  :";
      cin>>salary;

      char file[20];
      strcpy(file,id);
      strcat(file,".txt");
      ofstream x(file);
      x<<"\nNAME      : ";
      x<<name;
      x<<"\nPOSITION  : LAB ASSISTANT.";
      x<<"\nID        : ";
      x<<id;
      x<<"\nSALARY    : ";
      x<<salary;
      x.close();

      fstream y("LABASSIS.txt",ios::app|ios::out) ;
      y.setf(ios::right);
      y.width(14);
      y<<name;
      y.width(17);
      y<<id;
      y.width(22);
      y<<salary<<endl;
      y.close();

      fstream s("STAFF.txt",ios::app|ios::out) ;
      s.setf(ios::right);
      s.width(14);
      s<<name;
      s.width(23);
      s<<"LAB ASSISTANT.";
      s.width(14);
      s<<id;
      s.width(21);
      s<<salary<<endl;
      s.close();
  }

class teach

  {
      public:
          void teacherget();
  };

void teach::teacherget()

  {
      professor p;
      lecturar l;
         while(1)
        {
            
           cout<<"\n\nWhat is your option?";
           cout<<"\n\n1...Professor.\n2...Lecturar.\n3...exit";
           cout<<"\n\nInput your choice.";
            int i;
            cin>>i;
            if(i==1)
            p.get_data1();
            if(i==2)
            l.get_data2();
            if(i==3)
            break;
        }
  }

class office

  {
    public:
        office();
  };

office::office()

  {
         
        medical_off m;
        officer o;
        lab_assistent a;
           while(1)
            {
              
             cout<<"\n\nWhat is your option ?";
             cout<<"\n\n1...Medical_officer.\n2...Officer.\n3...LAb assistant.\n4...break\n";
             cout<<"\n\nInput your choice :";
              int j;
              cin>>j;
              if(j==1)
                 m.get_data5();
              if(j==2)
                 o.get_data4();
              if(j==3)
                 a.get_data6();
              if(j==4)
                 break;
            }
  }

class search

{
     public:
     void find(void);
};

void search::find(void)

{
        int i;
        char id[20],c;
          while(1)
           {
              
             cout<<"1...ALL TEACHER\n2...ALL PROFESSOR\n3...ALL LECTURER\n";
             cout<<"4...ALL STAFF\n5...ALL OFFICER\n6...ALL MEDICAL OFFICER\n7...ALL LAB ASSISTENT.\n8...SEARCH BY ID\n9...Exit";
             cin>>i;
               if(i==9)
               break;
               if(i==1)
              {
                ifstream x("TEACHER.txt");
                cout<<"\tTEACHERS NAME AND ID AND SALARY\n\n";
                cout.setf(ios::right);
                cout.width(13);
                cout<<"NAME";
                cout.width(18);
                cout<<"POSITION";
                cout.width(18);
                cout<<" ID";
                cout.width(24);
                cout<<"SALARY";
                cout<<"\n\n";
                 while(x)
                  {
                   x.get(c);
                  delay(50);
                   cout<<c;
                  }
                getch();
                x.close();
                 }
               if(i==2)
                 {
                ifstream x("PROFESSO.txt");
                cout<<"\t  PROFESSORS NAME AND ID AND SALARY\n\n";
                cout.setf(ios::right);
                cout.width(13);
                cout<<"NAME";
                cout.width(18);
                cout<<" ID";
                cout.width(24);
                cout<<"SALARY";
                cout<<"\n\n";
                 while(x)
                  {
                    x.get(c);
                    delay(50);
                    cout<<c;
                  }
                getch();
                x.close();
                  }

               if(i==3)
                   {
                ifstream x("LECTURE.txt");
                cout<<"\tLECTURERS NAME AND ID AND SALARY\n\n";
                cout.setf(ios::right);
                cout.width(13);
                cout<<"NAME";
                cout.width(18);
                cout<<" ID";
                cout.width(24);
                cout<<"SALARY";
                cout<<"\n\n";
                 while(x)
                  {
                   x.get(c);
                   delay(50);
                   cout<<c;
                  }
                 getch();
                 x.close();
                   }

               if(i==4)
                  {
                ifstream x("STAFF.txt");
                cout<<"\tSTAFFS NAME AND ID AND SALARY\n\n";
                cout.setf(ios::right);
                cout.width(13);
                cout<<"NAME";
                cout.width(18);
                cout<<"POSITION";
                cout.width(18);
                cout<<" ID";
                cout.width(24);
                cout<<"SALARY";
                cout<<"\n\n";
                 while(x)
                  {
                    x.get(c);
                    delay(50);
                    cout<<c;
                  }
                getch();
                x.close();
                  }

               if(i==5)
                  {
                ifstream x("OFFICER.txt");
                cout<<"\tOFFICERS NAME AND ID AND SALARY\n\n";
                cout.setf(ios::right);
                cout.width(13);
                cout<<"NAME";
                cout.width(18);
                cout<<" ID";
                cout.width(24);
                cout<<"SALARY";
                cout<<"\n\n";
                 while(x)
                  {
                    x.get(c);
                    delay(50);
                    cout<<c;
                  }
                getch();
                x.close();
                   }

               if(i==6)
                  {
                ifstream x("MEDICAL.txt");
                cout<<"\tMEDICAL OFFICERS NAME AND ID AND SALARY\n\n";
                cout.setf(ios::right);
                cout.width(13);
                cout<<"NAME";
                cout.width(18);
                cout<<" ID";
                cout.width(24);
                cout<<"SALARY";
                cout<<"\n\n";
                while(x)
                  {
                    x.get(c);
                    delay(50);
                    cout<<c;
                  }
                 getch();
                 x.close();
                  }

               if(i==7)
                  {
                ifstream x("LABASSIS.txt");
                cout<<"\tLAB ASSISTENTS NAME AND ID AND SALARY\n\n";
                cout.setf(ios::right);
                cout.width(13);
                cout<<"NAME";
                cout.width(18);
                cout<<" ID";
                cout.width(24);
                cout<<"SALARY";
                cout<<"\n\n";
                 while(x)
                  {
                    x.get(c);
                    delay(50);
                    cout<<c;
                  }
                 getch();
                 x.close();
                  }


               if(i==8)
                  {
                 
                cout<<" Input the id: ";
                cin>>id;
                char fil[20];
                strcpy(fil,id);
                strcat(fil,".txt");
                ifstream x(fil);
                while(x)
                   {
                     x.get(c);
                     delay(50);
                     cout<<c;
                   }
                  getch();
                  x.close();
                 }
           }
  }


void versity::time_date()

 {
      struct date d;
      int i,j;
       
      getdate(&d);
      i=d.da_day;
      j=d.da_mon;
      cout<<"Date:"<<i<<"/"<<j<<"/"<<d.da_year;
      struct time t;
      int k;
      gettime(&t);
      i=t.ti_hour;
      j=t.ti_min;
      k=t.ti_sec;
      cout<<"\t\t\t\t\t\t         Time:"<<i<<":"<<j<<":"<<k<<endl;
 }


int main()

  {
      int i;
      textcolor(0);
      textbackground(7);
      while(1)
       {
      
     versity v;
     v.time_date();
     cout<<"\n\n**************  WELCOME TO THE VERSITY EMPLOYEE INFORMATION  ***********\n\n\n";
     cout<<"\n\t*************************************************";
     cout<<"\n\t*\t\t \t\t\t\t*\n\t*\t\t1...TEACHER\t\t\t* \n\t*\t\t2...STAFF\t\t\t*";
     cout<<"\n\t*\t\t3...SEARCH\t\t\t*\n\t*\t\t4...EXIT\t\t\t*\t\n\t*\t\t\t\t\t\t*\n\t";
     cout<<"*************************************************";
     cout<<"\n\nINPUT UR CHOICE: ";
     cin>>i;
      if(i==1)
         {
            teach t;
            t.teacherget();
         }

      if(i==2)
         {
            office o;
         }
      if(i==3)
         {
            search s;
            s.find();
         }
      if(i==4)
      break;
    }

getch();
return 0;

}


