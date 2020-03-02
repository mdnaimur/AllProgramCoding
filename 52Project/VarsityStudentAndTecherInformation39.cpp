

//Varsity Students & Teachers Information.
       #include<iostream>
       #include<stdio.h>
       #include<conio.h>
       #include<string.h>
       #include<dos.h>
       #include<windows.h>
       using namespace std;

              class kuet
             {  protected:
            char name[30],adress[30],dept[20];
            float emp_id;
            public:
            void input()
            {
            cout<<"\n\n\tEnter  name:";gets(name);
            cout<<"\n\n\tGIVE EMP_ID= ";cin>>emp_id;
            cout<<"\n\n\tEnter  adress:";gets(adress);
            cout<<"\n\n\tEnter  department name: ";gets(dept);
            }
            void display()
            {
            cout<<"\n\tName: "<<name<<"\n\tEmployee id= " <<emp_id<<"\n\tAdress: "<<adress<<"\n\tDepartment: "<<dept;
            }
             };

       class student:protected virtual kuet
         {  float roll;
        public:
          void inputid()
          {input();}
          void displayid()
          {display();}
          void inputs()
          {cout<<"\n\n\tGive the roll no=";cin>>roll;}
          void displays()
          {cout<<"\n\tRoll no= "<<roll;}
         };
//=================(student)================class==============

               class un_graduate:protected student
               {
             float cgpa,sm_star,year;
             public:
             int a;
             void inputu()
                {
                 inputid();
                 inputs();
                 cout<<"\n\n\tStudents cgpa ";cin>>cgpa;
                 cout<<"\n\n\tCurrent semistar ";cin>>sm_star;
                 cout<<"\n\n\tCurrent year ";cin>>year;
                }
             void inputu(float)
                  {
cout<<"\n\n\tYou have four options.\n\t\t1)cgpa\n\t\t 2)semistar\n\t\t3)year \n\t\t4)all\n\n\t\tWhat's your choice?\t";
                 int ui;
                 cin>>ui;
                 if(ui==1||ui==4)
                  { cout<<"\n\n\tStudents cgpa ";cin>>cgpa;
                  }
                 if(ui==2||ui==4)
                  { cout<<"\n\n\tChanged semi star: ";cin>>sm_star;
                  }
                 if(ui==3||ui==4)
                  { cout<<"\n\n\tChanged year ";cin>>year;
                  }
                   }
             void displayu()
                   {
                   displayid();
                   displays();
                   cout<<"\n\tCgpa= "<<cgpa;
                   }
             void searchu(float u)
                   {
                   if(u==emp_id) {a=1;}
                   else  a=0;
                   }
               };
 //||||||||||||||class ug student||||||||||||||||||

              class masters:public virtual student
           {
               float year;
               char result[10],subject[30];
               public:
             int a;
              void inputm()
              {
              cout<<"\n\n\tMaster's students subject: ";gets(subject);
              cout<<"\n\n\tMaster's students result: ";gets(result);
              }
              void inputm(float )
              { cout<<"\nYou have two options.\n \t1)subject\t 2)result\t3)both\nWhat's your choice?\t";
                 int mi;
                 cin>>mi;
                 if(mi==1||mi==3)
                   {
                   cout<<"\n\n\tMaster's students subject: ";gets(subject);
                   }
                 if(mi==2||mi==3)
                   {
                   cout<<"\n\n\tMaster's students result: ";gets(result);
                   }
              }
              void displaym()
              {
             cout<<"\n\tStudents(masters) subject: "<<subject;
             cout<<"\n\tStudents(masters) result: "<<result;
              }
              void searchm(float m)
              {
                 if(m==emp_id)  {a=1;}
                  else  a=0;
              }
           };
//##########class masters of students#####################################

              class phd:public virtual student
           {
              char topic[30];
               public:
              int a;
              void inputp()
              {
              cout<<"\n\n\tWhich topic? ";gets(topic);
              }
                void inputp(float )
              {
              cout<<"\n\n\tWhat is the changed topic? ";gets(topic);
              }
              void displayp()
              {
              cout<<"\n\tTopic: "<<topic;
              }
              void searchp(float p)
              {
                 if(p==emp_id)  {a=1;}
                  else  a=0;
              }
           };
//_____________class PHD___________________________

    class teacher:virtual protected kuet
           {
         private:
         float salary,exp;
         public:
           int a;
            void inputt()
          {   input();
              cout<<"\n\n\tGive monthly salary= ";cin>>salary;
          }
            void inputt(float)
          {
          cout<<"\n\n\tGive changed monthly salary= ";cin>>salary;
          }
            void displayt()
          {    display();
              cout<<"\n\tMonthly salary= "<<salary<<" taka";
          }
            void searcht(float t)
          {
            if(t==emp_id)  {a=1;}
            else  a=0;
          }
           };
//------------class teacher-------------

class teastd:virtual protected teacher,public virtual masters,public virtual phd
            {
            public:
              int a;
              void inputts()
              {
              inputt();
              inputs();
              }
               void inputts(float sid)
              {
              inputt(sid);
              }

              void displayts()
              {
              displayt();
              displays();
              }
              void searchts(float ts)
              {
                 if(ts==emp_id)  {a=1;}
                  else a=0;
              }
                void searchts(float ts,teastd &tp)
              {
                 if(ts==tp.emp_id)  {a=1;}
                  else a=0;
              }
            };
//==================================class teacher and student============

             class officer:protected virtual kuet
            {
               private:
               float rank,dues;
               public:
              int a;
            void inputo()
            {  input();
               cout<<"\n\n\tRanking(float)= ";cin>>rank;
            }
                void inputo(float)
            {
               cout<<"\n\n\tChanged Ranking(float)= ";cin>>rank;
            }
            void displayo()
            {
               display();
               cout<<"\n\tRanking (float)= "<<rank;
            }
                void searcho(float o)
            {
                 if(o==emp_id)  {a=1;}
                  else  a=0;
            }
            };
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@class officer@@@@@@@@@@@

class offstd:virtual protected officer,public virtual masters,public virtual phd
            {
                public:
                int a;
              void inputos()
              {
              inputo();
              inputs();
              }
               void inputos(float oid)
              {
              inputo(oid);
              }
              void displayos()
              {
              displayo();
              displays();
              }
                 void searchos(float os)
              {
                 if(os==emp_id)
                   {a=1;}
                  else a= 0;
              }
                   void searchos(float os,offstd &op)
              {
                  if(os==op.emp_id)  {a=1;}
                  else a= 0;
              }
            };
//===========================officer and student=======================

               int main()

            {
             

               un_graduate u[20];
               masters m[20];
               phd p[20];
               teacher t[20];
               officer o[20];
               teastd ts[20];
               offstd os[20];

                char ch[20],c[20],ca[20];
          int index,i,j,k,x,ids,idt,ido;
                float id;

                 while(1)
              {   
			  // textcolor(114);
              // textbackground(4);

                
cout<<"\n\n\t1:OPENING ID FOR STUDENTS\n\t2:OPENINGID OF TEACHERS\n\t3:OPEN ID FOR OFFICERS\n\t4:DISPLAY OPTION\n\t5:EDITING INFORMATION\n\t6:SEARCHING\n\t7:Quit\n\t";

                 for(int e=0;e<3;e++)
                {
                 Sleep(500);
                 cout<<" . ";
                }
                cout<<"\n\n\t\tWhat is your option?\n\n\t\t  ";
                cin>>index;

                  switch(index)
                  {
                  case 1:
                   
                cout<<"\n\n\tHOW MANY ID'S FOR STUDENTS\n\n\t\t";
                       cin>>ids;
                   for(i=0;i<ids;i++)
                   {
cout<<"\n\n\tPRESS 'u' FOR U.G. students,\n\n\t'm' FOR ONLY MASTERS and\n\n\t 'p' FOR ONLY PHD STUDENTS\n\n\t\t";
                   cin>>c[i];
                    if(c[i]=='u')
                      {   
                       u[i].inputu();       //ug input
                      }
                    if(c[i]=='m')
                      {   
                       m[i].inputid();
                       m[i].inputm();
                      }                 //masters input
                    if(c[i]=='p')
                      {   
                    p[i].inputid();
                    p[i].inputp();
                      }               //phd input
                   }
                   break;     //opening id of students

                   case 2:
                 
           cout<<"\n\n\tHOW MANY ID'S FOR TEACHERS\n\n\t\t";
                     cin>>idt;
                  for(j=0;j<idt;j++)
                {
cout<<"\n\n\t\tIF THE TEACHER IS A STUDENT OF MASTERS OR PHD,\n\tTHEN PRESS 's' FOR MASTERS AND 'h' FOR PHD \n\tAND IF ONLY TEACHER THEN,PRESS't'\n\n\t\t\t";
                     cin>>ch[j];

                    if(ch[j]=='t')
                      {   
                     t[j].inputt();
                      }

                    if(ch[j]=='s')
                      {    
                      ts[j].inputts();
                      ts[j].inputm();    //teacher+mas
                      }

                    if(ch[j]=='h')
                      {    
                      ts[j].inputts();  //teacher+phd
                      ts[j].inputp();
                      }

                }
                   break;
     //===================opening teacher------------------- id

                   case 3:
                  
         cout<<"\n\n\tHOW MANY ID'S FOR OFFICERS\n\n\t\t";
             cin>>ido;
                  for(k=0;k<ido;k++)
         {  cout<<"\n\n\t\tIF THE OFFICER IS A STUDENT OF MASTERS OR PHD,\n\tTHEN PRESS 'f' FOR MASTERS AND 'd' FOR PHD \n\tAND IF ONLY OFFIER THEN,PRESS'o'\n\n\t\t\t";
                     cin>>ca[k];

                   if(ca[k]=='o')
                    { 
                     o[k].inputo();
                    }
                     if(ca[k]=='f')
                    {  
                      os[k].inputos();
                      os[k].inputm();       //officer+mas
                     }
                 if(ca[k]=='d')
                     { 
                      os[k].inputos();
                      os[k].inputp();   //officer+phd
                     }
         }    //for ends
                break;

                case 4:
cout<<"\n\tYOU MAY SEE INFORMATIONS OF\n\tSTUDENTS BY PRESSING 1\n\tTEACHERS BY PRESSING 2\n\tOFFICER BY PRESSING3\n";
                    int n;
                    cin>>n;
                     if(n==1)
                    {
                    for(i=0;i<ids;i++)
                       {
                       if(c[i]=='u')
                       u[i].displayu();

                       if(c[i]=='m')
                      {
                       m[i].displayid();
                       m[i].displaym();
                      }
                       if(c[i]=='p')
                      {
                       p[i].displayid();
                       p[i].displayp();
                      }
                       }
                    }
                     if(n==2)
                    {
                    for(j=0;j<idt;j++)
                       {
                       if(ch[j]=='t')
                       t[j].displayt();

                       if(ch[j]=='s')
                      {
                       ts[j].displayts();
                       ts[j].displaym();
                      }
                       if(ch[j]=='h')
                      {
                       ts[j].displayts();
                       ts[j].displayp();
                      }
                      }
                    }

                     if(n==3)
                    {
                     for(k=0;k<ido;k++)
                      {
                       if(ca[k]=='o')
                       o[k].displayo();

                       if(ca[k]=='f')
                      {
                       os[k].displayos();
                       os[k].displaym();
                      }
                       if(ca[k]=='d')
                      {
                       os[k].displayos();
                       os[k].displayp();
                      }
                      }
                    }
                  getch();
                   break;

                   case 5:
                    cout<<"\n Give employee id: ";
                  cin>>id;
                     for(i=0;i<ids;i++)
                      {
                         u[i].searchu(id);
                          {
                        if(u[i].a==1)
                        {u[i].inputu(id);
                        goto y;}
                          }
                          m[i].searchm(id);
                          { if(m[i].a==1)
                        {m[i].inputm(id);
                        goto y;
                        }
                          }
                          p[i].searchp(id);
                          {    if(p[i].a==1)
                        {p[i].inputp(id);
                        goto y;}
                          }
                      }
                    for(j=0;j<idt;j++)
                      {
                          t[j].searcht(id);
                           {if(t[j].a==1)
                        {t[j].inputt();
                        goto y;  }
                           }
                          ts[j].searchts(id);
                           {if(ts[j].a==1)
                        {ts[j].inputm(id);
                        goto y;}
                           }
                          ts[j].searchts(id,ts[j]);
                           {if(ts[j].a==1)
                        {ts[j].inputts(id);
                         ts[j].inputp(id);
                        goto y;}
                           }
                     }
                    for(k=0;k<idt;k++)
                    {
                          o[k].searcho(id);
                           {    if(o[k].a==1)
                        {o[k].inputo(id);
                        goto y;}
                        }
                          os[k].searchos(id);
                        if(os[j].a==1)
                        {os[j].inputos(id);
                         os[j].inputm(id);
                        goto y;}
                          os[k].searchos(id,os[k]);
                        if(os[j].a==1)
                        {os[j].inputos(id);
                         os[j].inputp(id);
                        goto y;}
                    }
                   y:break;

                   case 6:
                     int s=0;
                     
                  cout<<"\n\n\tGive employee id: ";
                  cin>>id;

                     for(i=0;i<ids;i++)
                    {
                         u[i].searchu(id);
                          {
                        if(u[i].a==1)
                        { cout<<"\n\tSEARCHING ";
                        for(int e=0;e<8;e++)
                          {
                         Sleep(500);
                         cout<<" . ";
                          }
                        u[i].displayu();
                         getch();
                        goto z;}
                          }
                         m[i].searchm(id);
                          { if(m[i].a==1)
                        { cout<<"\n\tSEARCHING ";
                        for(int e=0;e<8;e++)
                          {
                         Sleep(500);
                         cout<<" . ";
                          }
                        m[i].displayid();
                        m[i].displaym();
                        getch();
                        goto z;
                        }
                          }
                          p[i].searchp(id);
                          {    if(p[i].a==1)
                        { cout<<"\n\tSEARCHING ";
                        for(int e=0;e<8;e++)
                          {
                         Sleep(500);
                         cout<<" . ";
                          }
                        p[i].displayid();
                         p[i].displayp();
                         getch();
                        goto z;
                        }
                          }
                     }

                      for(j=0;j<idt;j++)
                   {
                    t[j].searcht(id);
                    {       if(t[j].a==1)
                           { cout<<"\n\tSEARCHING ";
                        for(int e=0;e<8;e++)
                          {
                         Sleep(500);
                         cout<<" . ";
                          }
                           t[j].displayt();
                        getch();
                        goto z;  }
                    }
                    ts[j].searchts(id);
                    {    if(ts[j].a==1)
                        { cout<<"\n\tSEARCHING ";
                        for(int e=0;e<8;e++)
                          {
                         Sleep(500);
                         cout<<" . ";
                          }
                        ts[j].displayts();
                         ts[j].displaym();
                         getch();
                        goto z;}
                    }
                    ts[j].searchts(id,ts[j]);
                    {    if(ts[j].a==1)
                        {  cout<<"\n\tSEARCHING ";
                        for(int e=0;e<8;e++)
                          {
                         Sleep(500);
                         cout<<" . ";
                          }
                         ts[j].displayts();
                         ts[j].displayp();
                         getch();
                        goto z;
                        }
                    }
                   }
                    for(k=0;k<ido;k++)
                    {
                    o[k].searcho(id);
                    { if(o[k].a==1)
                        { cout<<"\n\tSEARCHING ";
                        for(int e=0;e<8;e++)
                          {
                         Sleep(500);
                         cout<<" . ";
                          }
                        o[k].displayo();
                         getch();
                        goto z;
                        }
                    }
                    os[k].searchos(id);
                    {    if(os[k].a==1)
                        { cout<<"\n\tSEARCHING ";
                        for(int e=0;e<8;e++)
                          {
                         Sleep(500);
                         cout<<" . ";
                          }
                        os[k].displayos();
                         os[k].displaym();
                        getch();
                        goto z;
                        }
                     }
                    os[k].searchos(id,os[k]);
                     {    if(os[k].a==1)
                        { cout<<"\n\tSEARCHING ";
                        for(int e=0;e<8;e++)
                          {
                         Sleep(500);
                         cout<<" . ";
                          }
                        os[k].displayos();
                         os[k].displayp();
                         getch();
                        goto z;
                        }
                      }
                    }
                       if(s==n)
                       {
                    cout<<"\nNot found\n";
                    getch();
                    goto z;
                       }
                   z:break;
                   
                   case 7: break;

                   default:
                   cout<<"\n\n\n\tWRONG INPUT,PLEASE TRY AGAIN\n";
                   getch();
                   break;
                   }           //switch ends
                 if(index==7)
                 break;
              }               //while ends
           return 0;
           } //end of main function


