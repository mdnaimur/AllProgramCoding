#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<fstream>
using namespace std;
class plan
{
   private:
     char name[10];
     int seat;
     int am;
     char des[30];

   public:
     void get(void);
     void display(void);
     void s(void);
     void cancle(void);
};

void plan::get()
{

   cout<<"\nPlease,Enter your name:                   \n";
   cin>>name;
   cout<<"\nWhat's your seat choice?\nSeat Choice:    \n";
   cin>>seat;
   cout<<"\nAmount:                                   \n";
   cin>>am;
   cout<<"\nDestination:                              \n";
   cin>>des;

}
void plan::display()
{
   cout<<"\n********************************************\n";
   cout<<"*    Name of Customer:"<<name<<"                   *\n";
   cout<<"*    Seat Choice     :"<<seat<<"                   *\n";
   cout<<"*    Cost of Ticket  :"<<am<<"                   *\n";
   cout<<"*    Destination     :"<<des<<"                   *\n";
   cout<<"********************************************\n";
}

void plan::s()
{
  int a;
  cout<<"\nTo Search Please Enter your seat no.\n";
  cin>>a;
  if(a==seat)
  {
     display();
  }
  else
     cout<<"\nSorry,you are wrong.\n";
}

void plan::cancle()
{
  int b;
  cout<<"\nPlease,Enter your Seat no.\n";
  cin>>b;
  if(b==seat)
  {
    am=0;
    display();
  }
  else
     cout<<"\nYou are Wrong.\n";
    }

int main()
{
   int q,m;
   
   cout<<"\nEnter How many people you want to include?\n";
   cin>>q;
   plan p[10];
   fstream file;
   file.open("seatplan",ios::out|ios::in);

   do
   {
       cout<<"\nEnter The Appropriate number.\n"
       <<"\n1.for taking personal information."
       <<"\n2.for display."
       <<"\n3.for search."
       <<"\n4.for Withdraw."
       <<"\n5.Quit."
       <<"\nWhat is your option?\n ";

    cin>>m;
    switch(m)
    {
    case 1:
      for(int i=0;i<q;i++)
      {
         cout<<"\nName,seat no & amount of seat of customer of "<<i+1<<endl;
         p[i].get();
         file.write((char *)&p[i],sizeof (p[i]));


      }
      file.clear();
      file.seekg(0);

     break;

    case 2:
     for(int i=0;i<q;i++)
     {
        cout<<"\nDisplay the information of "<<i+1<<endl;
        file.read((char *)&p[i],sizeof (p[i]));
        p[i].display();
     }
     file.seekp(0);
     break;

   case 3:
    for(int i=0;i<q;i++)
    {
       cout<<"\nfor Searching "<<i+1<<endl;
       p[i].s();
      }
      break;

   case 4:
    for(int i=0;i<q;i++)
    {
        cout<<"\nTo Withdraw.\n"<<i+1<<endl;
        p[i].cancle();
     }
     break;

   case 5:
     break;

   default:
     cout<<"\nError Input .Try Again.\n";
   }
}while(m!=5);

getch();
return 0;
}

