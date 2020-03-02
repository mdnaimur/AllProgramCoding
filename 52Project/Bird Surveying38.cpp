
/* A project of Bird surveying.*/





#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
  class bird
  {
    public:
       char loc[90],name[90],col[90],nat[90];
       float liv,code;

      void get()
          {
           cout<<"\nEnter the bird name: ";
           gets(name);
           cout<<"What the color it posseses: ";
           gets(col);
           cout<<"It's nature: ";
           gets(nat);
           cout<<"Where found: ";
           gets(loc);
           cout<<"Living duration: ";
           cin>>liv;
           cout<<"Having code: ";
           cin>>code;
          }
      void view()
          {
           cout<<"\nBird's name: "<<name;
           cout<<"\nColour     : "<<col;
           cout<<"\nNature     : "<<nat;
           cout<<"\nLocation   : "<<loc;
           cout<<"\nLive       : "<<liv<<" year";
           cout<<"\nCode       : "<<code;
          }
  }b[100];

  int main()
  {
    
    int i,j,k,index;

       do
         {
           cout<<"\n\nWhat do you want to do\n1.Input bird's information"
           <<"\n2.Display\n3.Search\n4.Exit."
           <<"\n\nChoose appropriate number: ";
           cin>>index;

           switch(index)
             {
              case 1:
                 cout<<"Enter the number of bird how many to input: ";
                 cin>>j;
                 for(i=1;i<=j;i++)
                 {
                 cout<<"\nInformation of Bird "<<i<<".\n";
                 b[i].get();
                 }
                 break;

               case 2:
                  for(i=1;i<=j;i++)
                 {
                  cout<<"\nBird no "<<i<<".\n";
                  b[i].view();
                 cout<<"\n";
                 }
                 break;

               case 3:
                 cout<<"\nEnter the bird code: ";
                 cin>>k;

                 for(i=1;i<=j;i++)
                  {
                 if(k==b[i].code)
                    {
                     cout<<"\nBird no "<<i<<".\n";
                     b[i].view();
                     break;
                    }
                   }
                 if(k!=b[i].code)
                   cout<<"Wrong code input...\n";
                  break;

               case 4:
                  break;

               default:
                  cout<<"Wrong choice\nPlease enter correct number.";
                  break;
             }

         }while(index!=4);
  }


