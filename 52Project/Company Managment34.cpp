
//Company Management.
#include<fstream>
#include<conio.h>
#include<string.h>
#include<iostream>
using namespace std;

class earn{
        public:
        double profit;
        void show(){   ifstream x("ooo.txt");
        if(!x)
        cout<<"PROFIT = 0 ";
        else{
        x>>profit;
        cout<<"\nTOTAL STARTING PROFIT:  "<<profit;
        x.close();
        }
        getch();
        }

};
class product:public virtual earn{
public:
           int quan;
           char name[20];
           char id[20];
           double percost;
           double persell;
           double cost;
           double sell;
           void cal(){cost=percost*quan;
               sell=persell*quan;
               profit=profit +(sell-cost)*365;}
           void file();
           void get() ;

};
void product::get()
{
 int s;
cout<<"how many product produce;";
cin>>s;
for(int i=0;i<s;i++)
{
  cout<<"\ninput product name: ";
  cin>>name;
  cout<<"\ninput product id: ";
  cin>>id;
  cout<<"\ninput percost of product: ";
  cin>>percost;
  cout<<"\ninput persell of product: ";
  cin>>persell;
  cout<<"\ntotal product quntity:";
  cin>>quan;
  }
  cal();
  file();
}
void product::file()
{
char file[20];
strcpy(file,id);
strcat(file,".txt");
ofstream f(file);
f<< "\nproduct name: "<<name<< "\nproduct id: "<<id<<"\npercost ofproduct: " <<percost<<"\npersell of product: "<<persell<<"\nquantity"<<quan<<"\n total cost: "<<cost<<"\nsell: "<<sell;
f.close();
}

class staff:public virtual earn{
         protected:
         double salary;
         char post[12];
         char emid[10];
         int postquan;
         void cal()
         {profit=(profit-salary*postquan)*12;
         }
         void getstaff();
         void file();
};
void staff::getstaff()
{
  cout<<"\ninput salary: ";
  cin>>salary;
  cout<<"\ninput postquantity: ";
  cin>>postquan;
  cal();
  file();
}
 void staff::file()
{  char file[20];
strcpy(file,emid);
strcat(file,".txt");
ofstream f(file);
f<< "\nstaff salary: "<<salary<< "\post quantity: "<<postquan;
f.close();
}

class ammount:public staff,public product
{

 public:
    void  add();
};
void ammount::add()
{
 cout<<"\nINPUT FOR PRODUCT";
 get();
 cout<<"\nINPUT FOR EMPLOYEE" ;
 getstaff();

 ofstream x("ooo.txt");
 x<<profit;
 x.close();
}


int main()
{
   
  while(1)
  {
   
  cout<<"1..add\n2..show\n3...search\n4..exit\n";
  cout<<"what is ur choice? ";
  int u;
  cin>>u;
  if(u==1)
  {
  ammount a;
  a.show();
  a.add();
  }
  if(u==2)
  {ammount d;
  d.show();
  }
  if(u==3)
   { 
   char id[20];
   char c;
    cout<<"INPUT ID FOR search";
    cin>>id;
    char file[20];
    strcpy(file,id);
    strcat(file,".txt")  ;
    ifstream x(file);
    while(x)
    {x.get(c)   ;
     cout<<c;
    }
    getch();
    x.close();
     
   }
  if(u==4)
  break;
 }
  return 0;

}


