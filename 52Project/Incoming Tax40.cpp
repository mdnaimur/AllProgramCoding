
/*

  This programme is to calculate the Income Tax of different occupation.
  Here the tax is differed due to some of exceptional occupation firstly.
  Then for other occupation the tax is differed in accordance with the
  salary in a year.Thus the way to calculate the Income Tax.
*/



#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdio.h>
using namespace std;

   //==========================Base Class========================//

     class iTax
   {
     public:
         char name[90],ads[90],occ[90];
         int ID;

     void getit(char *a)
       {
        strcpy(occ,a);
        cout<<"Enter your name: ";
        gets(name);
        cout<<"Enter your ID: ";
        cin>>ID;
        cout<<"Give your address in detail: ";
        gets(ads);
       }

    void showit()
       {

        cout<<"\nName    : "<<name;
        cout<<"\nOccupation :"<<occ;
        cout<<"\nID No.  : "<<ID;
        cout<<"\nAddress : "<<ads;
       }
     };  //end of base class


   //=================================================================//

    class common:public iTax

    {
     public:
       float sal,tax;

     void get()
       {
        cout<<"How much you earn in a year: ";
        cin>>sal;
        if(sal<50000)
          {
           tax=sal*(.03);
           cout<<"Your IncomeTax is= "<<tax<<"tk."<<endl;
          }
        if((sal>50000)&&(sal<=100000))
          {
           tax=sal*(.07);
           cout<<"Your IncomeTax is= "<<tax<<"tk."<<endl;
           }
        if((sal>100000)&&(sal<=150000))
          {
           tax=sal*(.10);
           cout<<"Your IncomeTax is= "<<tax<<"tk."<<endl;
          }
        if((sal>150000)&&(sal<=200000))
          {
           tax=sal*(.15);
           cout<<"Your IncomeTax is= "<<tax<<"tk."<<endl;
           }
       if((sal>200000)&&(sal<=250000))
          {
           tax=sal*(.20);
           cout<<"Your IncomeTax is= "<<tax<<"tk."<<endl;
          }
       if((sal>250000)&&(sal<=300000))
          {
           tax=sal*(.23);
           cout<<"Your IncomeTax is= "<<tax<<"tk."<<endl;
          }
       if(sal>300000)
          {
           tax=sal*(.25);
           cout<<"Your IncomeTax is= "<<tax<<"tk."<<endl;
          }
       }


     void showc()
     {
         cout<<"\nSalary  : "<<sal<<" tk. in a year";
         cout<<"\nTax     : "<<tax<<" tk."<<"\n\n";

     }

   };

   //=========================================================//

   class p0:public iTax
   {

     public:
        float sal,tax;
        void getz()
        {
         cout<<"Enter your salary in a year: ";
         cin>>sal;
         cout<<"You have no income tax.\n";
        }
        void showz()
        {
         cout<<"\nSalary  : "<<" tk. in a year"<<sal;
         cout<<"\nTax     : 0 tk.";
        }
   };

   //============================================================//

   class p15:public iTax
   {

     public:
         float sal,tax;
        void getfn()
        {
          cout<<"Enter salary in a year: ";
          cin>>sal;
          tax=sal*(.15);
          cout<<"The income tax is: "<<tax<<"tk."<<endl;
        }
        void showfn()
        {
         cout<<"\nSalary  : "<<" tk. in a year"<<sal;
         cout<<"\nTax     : "<<tax<<" tk."<<"\n\n";
        }
   };


   //===========================================================//

   class p20:public iTax
   {
     public:
         float sal,tax;
        void getty()
        {
         cout<<"Enter salary in a year: ";
         cin>>sal;
         tax=sal*(.20);
          cout<<"The income tax is: "<<tax<<"tk."<<endl;
        }
        void showty()
        {
         cout<<"\nSalary  : "<<" tk. in a year"<<sal;
         cout<<"\nTax     : "<<tax<<" tk."<<"\n\n";
        }
   };

   //==============================================================//

   class p25:public iTax
   {
     public:
         float sal,tax;
        void gettf()
        {
         cout<<"Enter salary in a year: ";
         cin>>sal;
         tax=sal*(.25);
          cout<<"The income tax is: "<<tax<<"tk."<<endl;
        }
        void showtf()
        {
         cout<<"\nSalary      : "<<" tk. in a year"<<sal;
         cout<<"\nTax         : "<<tax<<" tk."<<"\n\n";
        }
   };


   //=======================Main Function=======================//

   int main()
   {

    common c[20];
    p0  z[20];
    p15 fn[20];
    p20 ty[20];
    p25 tf[20];
    iTax it;

    int i,j,index,ID;
    char a[70];

     
       do{
       cout<<"\t\t\t    INCOME TAX CALCULATION"
           <<"\n\nWhat do you want to do?\n1.Asking for IncomeTax view."
           <<"\n2.Search\n3.Exit.\n"
           <<"\nMake your choice= ";
       cin>>index;

       switch(index)
       {

         case 1:
             cout<<"\nHow many memebers ?  ";
             cin>>j;
             if(j==0)
             cout<<"Please enter a valid number.\n\n";

             for(i=1;i<=j;i++)
         {
               cout<<"\nEnter occupation name: ";
               cin>>a;

             if((stricmp(a,"farmer")==0)||(stricmp(a,"student")==0))
            {
               z[i].getit(a);
               z[i].getz();
            }

             else if(stricmp(a,"business")==0)
            {
              ty[i].getit(a);
              ty[i].getty();
            }
            else if(stricmp(a,"export")==0)
            {
             tf[i].getit(a);
             tf[i].gettf();
            }
           else  if(stricmp(a,"engineer")==0)
            {
              fn[i].getit(a);
              fn[i].getfn();
            }
            else
              {
               c[i].getit(a);
               c[i].get();
              }
         }
            break;


         case 2:
             cout<<"\nGive ur employee ID=";
             cin>>ID;

         if((ID!=c[i].ID)&&(ID!=z[i].ID)&&(ID!=fn[i].ID)&&(ID!=ty[i].ID)&&(ID!=tf[i].ID))
         cout<<"No match found.....\n\n";


              for(i=1;i<=j;i++)

             {
              if(ID==c[i].ID)
                {
                c[i].showit();
                c[i].showc();
                cout<<"Press any key.......\n\n";
                getch();
                }

             if(ID==z[i].ID)
                {
                z[i].showit();
                z[i].showz();
                cout<<"Press any key.......\n\n";
                getch();
                }

             if(ID==fn[i].ID)
                {
                fn[i].showit();
                fn[i].showfn();
                cout<<"Press any key.......\n\n";
                getch();
                }

             if(ID==ty[i].ID)
                {
                ty[i].showit();
                ty[i].showty();
                cout<<"Press any key.......\n\n";
                getch();
                }

             if(ID==tf[i].ID)
                {
                tf[i].showit();
                tf[i].showtf();
                cout<<"Press any key.......\n\n";
                getch();
                }
               } break;




         case 3:
             break;
         default:
             cout<<"\n\a\nWrong choice Try again...";
             cout<<"\nPress any key to return to main menu...";
             getch();
             break;
       }



      }while(index!=3);
    return 0;
   }

  //=========================End Of Main Function=========================//



