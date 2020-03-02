#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
    class iteam
 {
    protected:
        char name[20][20];
        float price[20];
        int sum,code[20];

    public:
        iteam()
        {
         sum=0;
         temp=0;
        }
        char catagory[20];
        int temp;
        void insert();
        void add();
        void display();
        void search();
        void remove();
        void total_amount();
        void catago_amount();
        void error1();
        void initial_task();
        int function1();
 };
void iteam::insert()
   {
    int i,n,k;
    cout<<"enter catagory name=";
    cin>>catagory;
    cout<<"how many item do u want to insert =";
    cin>>n;
    for(i=temp;i<n;i++)
    {
      cout<<"enter name of the iteam=";
      cin>>name[temp];
      cout<<"enter code=";
      cin>>code[temp];
      cout<<"enter price=";
      cin>>price[temp];
      temp++;
      sum=sum+price[i];
    }
   };
     void iteam::add()
   {
    int i,n;
    cout<<"enter catagory name=";
    cin>>catagory;
    cout<<"how many item do u want to add =";
    cin>>n;
    for(i=temp;i<n;i++)
    {
      cout<<"enter name of the iteam=";
      cin>>name[temp];
      cout<<"enter code=";
      cin>>code[temp];
      cout<<"enter price=";
      cin>>price[temp];
      temp++;
      sum=sum+price[i];
    }
   }
     void iteam::display()
  {
    int i;
    cout<<"under the "<<catagory<<" catagory the items are:"<<'\n'<<'\n';
    cout<<"item name"<<'\t';
    cout<<"code"<<'\t';
    cout<<"price"<<'\t'<<'\n';
    for(i=0;i<temp;i++)
    {

      cout<<name[i]<<'\t'<<'\t';
      cout<<code[i]<<'\t';
      cout<<price[i]<<'\n'<<'\n';
     }
     cout<<'\n'<<'\n';
   }
    void iteam::search()
  {
      int i,m;
      cout<<"enter code:";
      cin>>m;
      for(i=0;i<temp;i++)
      {
    if(code[i]==m)
    {
    cout<<"item name is ="  <<name[i]<<'\n';
    cout<<"price is="<<price[i]<<'\n'<<'\n';
    }
    else
    cout<<"u have entered wrong code"<<'\n'<<'\n';
      }
      cout<<'\n'<<'\n';
  }
     void iteam::remove()
  {
      int i,m;
      cout<<"enter code:";
      cin>>m;
      for(i=0;i<temp;i++)
      {
    if(code[i]==m)
    {
      price[i]=0;
    }
    else
    cout<<"u have entered wrong code"<<'\n'<<'\n';
      }
      cout<<'\n'<<'\n';
  }
    void iteam::total_amount()
    {
     cout<<"the total price of all the items of all catagories is="<<sum<<'\n'<<'\n';
    }
    void iteam :: catago_amount()
    {
    cout<<"under the "<<catagory<<" catagory the total price of the items are="<<sum<<'\n'<<'\n';
    }
    void iteam::error1()
    {
      cout<<"FIRST U NEED TO INSERT ITEAM";
      cout<<'\n'<<'\n';
    }
    void iteam::initial_task()
    {
  cout<<"What do u want to do ?"<<'\n';
  cout<<"1.if u want to insert press 1"<<'\n';
  cout<<"2.if u want to add press 2"<<'\n';
  cout<<"3.if u want to display press 3"<<'\n';
  cout<<"4.if u want to search press 4"<<'\n';
  cout<<"5.if u want to remove press 5"<<'\n';
  cout<<"6.if u want to see the total price press 6"<<'\n';
  cout<<"7.if u want to exit press 0"<<'\n';
    }
    int iteam::function1()
    {
    int a1;
    cout<<"choose a option to enter from the following sites"<<'\n';
    cout<<"1.press 1 for cloths."<<'\n'<<"2.press 2 for daily using thing."<<'\n'
    <<"3.press 3 for raw materials."<<'\n'<<"4.press 0 for exit."<<'\n';
    cin>>a1;
    return a1;
    }
    class cloth:public iteam
    {
    private:
        char clt[15],cr[15];
    public:
       cloth operator+(cloth);
       void insert_cl();
       void display_cl();
    };
   cloth  cloth::operator+(cloth c)
   {
     cloth ob1;
     ob1.sum=sum+c.sum;
     return (ob1);
   }
   void cloth::insert_cl()
   {
   cout<<"what type of cloth is this ?(cotton,polyester,......)"<<'\n';
   cin>>clt;
   cout<<"what's the color of the cloth ?"<<'\n';
   cin>>cr;
   cout<<'\n'<<'\n'<<'\n';
   }
   void cloth::display_cl()
   {
   cout<<"type :"<<clt<<'\n';
   cout<<"color :"<<cr<<'\n'<<'\n'<<'\n';
   }
    class dusing:public iteam
    {
      private:
          char dus[15];
      public:
       dusing operator+(dusing);
       void insert_du();
       void display_du();
    };
   dusing dusing::operator+(dusing c)
   {
     dusing ob2;
     ob2.sum=sum+c.sum;
     return (ob2);
   }
   void dusing::insert_du()
   {
    cout<<"what type of daily using thing is this ?(food,cosmatics,.......)"<<'\n';
    cin>>dus;
    cout<<'\n'<<'\n'<<'\n';
   }
   void dusing::display_du()
   {
    cout<<"type :" <<dus<<'\n'<<'\n'<<'\n';
   }
    class material:public iteam
    {
    private:
        int sp;
        char mat[14],qu[15];
    public:
      material operator+(material c);
       void insert_ma();
       void display_ma();
    };
    material material::operator+(material c)
    {
     material ob3;
     ob3.sum=sum+c.sum;
     return (ob3);
    }
    void material::insert_ma()
    {
    cout<<"what type of raw material is this ?(vegetable,fish,fruits,.......)"<<'\n';
    cin>>mat;
    cout<<"what kind of quality do it carry ?"<<'\n';
    cin>>qu;
    cout<<"nomally after how many days it will be spoiled ?"<<'\n';
    cin>>sp;
    cout<<'\n'<<'\n'<<'\n';
    }
    void material::display_ma()
    {
    cout<<"type :" <<mat<<'\n';
    cout<<"quality :" <<qu<<'\n';
    cout<<"the time after it will spoil:" <<sp<<'\n'<<'\n'<<'\n';
    }
  int main()
 {
    cloth t[20],f1,ob;
    dusing du[20],f2,ob1;
    material ma[20],f3,ob2;
    int i,x=0,n,a,j,k,l,s,m,b,c,q,g=0,a1,y=0,z=0;
    char inp[20];
  
    for(i=0;;i++)
    {
    a1=ob.function1();
    switch(a1)
    {
    case 1:
    for(i=0;;i++)
     {
       ob.initial_task();
       cin>>a;
       switch(a)
       {
     case 1:
        if(x>0)
         {
           cout<<"YOU CAN NOT INSERT ITEAM MORE THAN ONE TIMES"<<'\n'<<'\n';
           break;
          }
         else
         {
           cout<<"how many catagory do u want to insert=";
           cin>>n;
           for(i=0;i<n;i++)
            {
              t[x].insert();
              t[x].insert_cl();
               x++;
             }
          }
         break;
      case 2:
        if(x<=0)
        {ob.error1();
        break;}
         else
         {
           cout<<"how many catagory do u want to add=";
           cin>>n;
           for(j=0;j<n;j++)
            {
             t[x].add();
             t[x].insert_cl();
              x++;
             }
          break;
          }
       case 3:
        if(x<=0)
        {ob.error1();
        break;}
         else
         {
          for(s=0;s<x;s++)
           {
             t[s].display();
             t[s].display_cl();
           }
           break;
         }
       case 4:
        if(x<=0)
        {ob.error1();
        break;}
        if(x>0)
        {
         cout<<"enter ur desired catagory=";
         cin>>inp;
         for(c=0;c<x;c++)
         {
           b=strcmp(inp,t[c].catagory);
           if(b==0)
           break;
          }
          if(b==0)
            {t[c].search();
            t[c].display_cl();}
           break;
          }
        case 5:
        if(x<=0)
        {ob.error1();
          break;}
        else
        {
         cout<<"enter ur desired catagory=";
         cin>>inp;
         for(c=0;c<x;c++)
         {
           b=strcmp(t[c].catagory,inp);
           if(b==0)
           break;
          }
          if(b==0)
            t[c].remove();
           break;
          }
         case 6:
        if(x<=0)
         {ob.error1();
          break;}
        else
        {
          for(z=g;z<x;z++)
          {
            f1=f1+t[z];
            g++;
          }
        for(i=0;i<x;i++)
        t[i].catago_amount();
        f1.total_amount();
        break;
        }
     }
     if(a==0)
     break;
       }
       break;
       case 2:
    for(i=0;;i++)
     {
       ob1.initial_task();
       cin>>a;
       switch(a)
       {
     case 1:
        if(y>0)
         {
           cout<<"YOU CAN NOT INSERT ITEAM MORE THAN ONE TIMES"<<'\n'<<'\n';
           break;
          }
         else
         {
           cout<<"how many catagory do u want to insert=";
           cin>>n;
           for(i=0;i<n;i++)
            {
              du[y].insert();
              du[y].insert_du();
               y++;
             }
          }
         break;
      case 2:
        if(y<=0)
        {ob1.error1();
        break;}
         else
         {
           cout<<"how many catagory do u want to add=";
           cin>>n;
           for(j=0;j<n;j++)
            {
             du[y].add();
             du[y].insert_du();
              y++;
             }
          break;
          }
       case 3:
        if(y<=0)
        {ob1.error1();
        break;}
         else
         {
          for(s=0;s<y;s++)
           {
             du[s].display();
             du[s].display_du();
           }
           break;
         }
       case 4:
        if(y<=0)
        {ob.error1();
        break;}
        if(y>0)
        {
         cout<<"enter ur desired catagory=";
         cin>>inp;
         for(c=0;c<y;c++)
         {
           b=strcmp(inp,du[c].catagory);
           if(b==0)
           break;
          }
          if(b==0)
           { du[c].search();
            du[c].display_du();}
           break;
          }
        case 5:
        if(y<=0)
        {ob1.error1();
          break;}
        else
        {
         cout<<"enter ur desired catagory=";
         cin>>inp;
         for(c=0;c<y;c++)
         {
           b=strcmp(du[c].catagory,inp);
           if(b==0)
           break;
          }
          if(b==0)
            du[c].remove();
           break;
          }
         case 6:
        if(y<=0)
         {ob.error1();
          break;}
        else
        {
          for(z=g;z<x;z++)
          {
            f2=f2+du[z];
            g++;
          }
        for(i=0;i<y;i++)
        du[i].catago_amount();
        f2.total_amount();
        break;
        }
     }
     if(a==0)
     break;
       }
       break;
       case 3:
    for(i=0;;i++)
     {
       ob2.initial_task();
       cin>>a;
       switch(a)
       {
     case 1:
        if(z>0)
         {
           cout<<"YOU CAN NOT INSERT ITEAM MORE THAN ONE TIMES"<<'\n'<<'\n';
           break;
          }
         else
         {
           cout<<"how many catagory do u want to insert=";
           cin>>n;
           for(i=0;i<n;i++)
            {
              ma[z].insert();
              ma[z].insert_ma();
               z++;
             }
          }
         break;
      case 2:
        if(z<=0)
        {ob2.error1();
        break;}
         else
         {
           cout<<"how many catagory do u want to add=";
           cin>>n;
           for(j=0;j<n;j++)
            {
             ma[z].add();
             ma[z].insert_ma();
              z++;
             }
          break;
          }
       case 3:
        if(z<=0)
        {ob2.error1();
        break;}
         else
         {
          for(s=0;s<z;s++)
           {
             ma[s].display();
             ma[s].display_ma();
           }
           break;
         }
       case 4:
        if(z<=0)
        {ob2.error1();
        break;}
        if(z>0)
        {
         cout<<"enter ur desired catagory=";
         cin>>inp;
         for(c=0;c<z;c++)
         {
           b=strcmp(inp,ma[c].catagory);
           if(b==0)
           break;
          }
          if(b==0)
            {ma[c].search();
            ma[s].display_ma();}
           break;
          }
        case 5:
        if(z<=0)
        {ob2.error1();
          break;}
        else
        {
         cout<<"enter ur desired catagory=";
         cin>>inp;
         for(c=0;c<z;c++)
         {
           b=strcmp(ma[c].catagory,inp);
           if(b==0)
           break;
          }
          if(b==0)
            ma[c].remove();
           break;
          }
         case 6:
        if(z<=0)
         {ob2.error1();
          break;}
        else
        {
          for(q=g;q<z;q++)
          {
            f3=f3+ma[q];
            g++;
          }
        for(i=0;i<z;i++)
        ma[i].catago_amount();
        f3.total_amount();
        break;
        }
     }
     if(a==0)
     break;
       }
       break;
      }
      if(a1==0)
      break;
      }
       return 0;
     }


