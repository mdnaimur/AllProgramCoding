//Dress Shop Management.
#include<fstream>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<iostream>
using namespace std;
class dress{
        private:
            char filename[20];

        protected:

            char dressname[60];
            char dressid[10];
            float price;
            void get();
};


void dress::get()
           {
        cout<<"\n ENTER  DRESS NAME  : ";
        cin>>dressname;
        cout<<"\n ENTER DRESS ID  NO : ";
        cin>>dressid;
        cout<<"\n ENTER DRESS PRICE  : ";
        cin>>price;

        strcpy(filename,dressid);
        strcat(filename,".txt");
        ofstream  x(filename);

        x<<"\n\nDRESS NAME  :"<<dressname;
        x<<"\n\nDRESS ID  :"<<dressid;
        x<<"\n\nPRICE     :"<<price;
        x.close();

           }

class male:protected dress
{
   public:
        male();

};
void male::male(void)
        {
         get();
         fstream x("MALE.txt",ios::app|ios::out);
         x<<dressname;
         x<<"\t"<<dressid;
         x<<"\t "<<price<<endl;
         x.close();
        }



class female:protected dress{

                public:
                     female();

                 };

void female::female()
        {
         get();
         fstream x("FEMALE.txt",ios::app|ios::out);
         x<<dressname;
         x<<"\t"<<dressid;
         x<<"\t "<<price<<endl;
         x.close();
        }

class childrn:protected dress

{

          public:
              childrn();
};


void childrn::childrn()
        {
         get();
         fstream x("CHILD.txt",ios::app|ios::out);
         x<<dressname;
         x<<"\t"<<dressid;
         x<<"\t "<<price<<endl;
         x.close();
        }


class add {

     private:
             int i;

     public:
             add();

       };

add::add()
{
     

      while(1)
     {
         
        cout<<"\n\n";
        cout<<"\t\t Categories of the dress products\n\n";
        cout<<"\n\n01. MALE. \n\n02. FEMALE. \n\n03. CHILDREN  OR";
        cout<<"\n\n04. EXIT. ";
        cout<<"\n\n\n\t Enter your option :";
        cin>>i;


        if(i==1)
        {
            male m;
        }

        if(i==2)
        {
            female f;
        }

        if(i==3)
        {
            childrn c;
        }
        if(i==4)

        break;

     }
}


class search{

      private:
               int m;
               char ch;

      public:
               search();

         };


search::search(){

              while(1)

                {

                      
                     cout<<"\n\n 01.Male";
                     cout<<"\n\n 02.Female";
                     cout<<"\n\n 03.Children";
                     cout<<"\n\n 04.Search by id";
                     cout<<"\n\n 05.Exit";
                     cout<<"\n\n\t Select an option :";
                     cin>>m;


                       if(m==1)

                        {

                         ifstream m("MALE.txt");
                         while(m)

                           {
                            m.get(ch);
                            cout<<ch;


                           }
                      getch();

                          }

                       if(m==2)

                        {
                         ifstream m("FEMALE.txt");
                         while(m)

                           {
                             m.get(ch);
                             cout<<ch;


                           }
                      getch();

                        }


                       if(m==3)
                        {
                          ifstream m("CHILD.txt");
                          while(m)
                           {
                             m.get(ch);
                             cout<<ch;


                           }
                     getch();

                         }

                       if(m==4)
                        {
                          char id[10],filename[20];

                          cout<<"input id for search:";
                          cin>>id;
                          strcpy(filename,id);
                          strcat(filename,".txt");
                          ifstream m(filename);

                          while(m)

                               {
                               m.get(ch);
                               cout<<ch;


                            }
                         getch();
                        }

                        if(m==5)
                        break;




          }

        }


class cut{

    public:
         cut();

      };

cut::cut()
     {         char id[20],filename[20];
           cout<<"\n\nEnter the id to delete : ";
           cin>>id;
           strcpy(filename,id);
           strcat(filename,".txt");
           fstream x(filename,ios::out);
           x<<"INFORMATION IS UNAVALABLE";
           x.close();
     }



  int main()

     {
         int i;

         textcolor(5);
         textbackground(0);

          

        while(1)
               {
                 
                cout<< "Choose an option\n\n";
                cout<< "\n\t01. Add a product.\n";
                cout<< "\n\t02. Search any product.\n";
                cout<< "\n\t03. Delete any product.\n";
                cout<< "\n\t04. Exit.";
                cout<< "\n\n\nEnter an option :";
                cin>>i;

                if(i==1)
                   {
                   add a;
                   }

                if(i==2)
                {

                    search s;

                }

                 if(i==3)
                {
                    cut c;
                }

                  if(i==4)
                  break;

               }

       return 0;

     }

