
//Cricket Players Career information.
 #include<iostream>
 #include<stdio.h>
 #include<conio.h>
 #include<fstream>
 #include<string.h>
using namespace std;

 class player
 {

 public:
    int match;
    char name[30];


    int age;
    void in()
    {
    fstream f1;
    f1.open("fill_player.txt",ios::app);

    cout<<"\n\nEnter the players name:";
    cin>>name;
    cout<<"\n\nEnter the age of the players:";
    cin>>age;
    cout<<"\n\nEnter the number of matches he played:";
    cin>>match;

    f1<<name<<endl<<age<<endl<<match<<endl<<match<<endl;

    f1.close();

    }
    void out1();

    player()
    {
    age=0;
    }

  };
  void player :: out1()
  {
  cout<<"\n\nName:"<<name<<"\n\nAge:"<<age<<"\n\nNumber of matches:"<<match;
  }
  class batsman:public virtual player
  {
  protected:
        int avg,run,out,cen,halfcen;

  public:
    void openbat();
    void showbat();
  };

  void batsman :: openbat()
  {
  fstream f2;
  f2.open("batsman.txt",ios::app);

  cout<<"\n\nEnter total runs of his career:";
  cin>>run;
  cout<<"\n\nhow many centuries he has:";
  cin>>cen;
  cout<<"\n\nHow many half centuries he has:";
  cin>>halfcen;
  cout<<"\n\nHow many times he got out?:";
  cin>>out;
  avg=run/out;

  f2<<run<<endl<<cen<<endl<<halfcen<<endl<<out<<endl<<avg<<endl;
  f2.close();

  }


  void batsman :: showbat()
  {
  cout<<"\n\ntotal runs:"<<run<<"\n\nCentury:"<<cen<<"\n\nHalf century:"<<halfcen
  <<"\n\nAverage:"<<avg;
  }

  class bowler:virtual public player
  {
  protected:
        int bavg,wic,half,brun,ovr,ecn;

  public:
    void openbowl();
    void showbowl();
  };

 void bowler :: openbowl()
 {
  fstream f3;
  f3.open("bowler.txt",ios::app);


  cout<<"\n\nEnter the number of wicket he got:";
  cin>>wic;
  cout<<"\n\nEnter the number of runs he gave:";
  cin>>brun;
  cout<<"\n\nHow many times he got 5 wickets:";
  cin>>half;
  bavg=brun/wic;
  cout<<"\n\nHow many overs he bowld:";
  cin>>ovr;
  ecn=brun/ovr;
  f3<<wic<<endl<<brun<<endl<<half<<endl<<ovr<<endl<<ecn<<endl;
  f3.close();

 }

 void bowler :: showbowl()
 {
 cout<<"\n\nNumber of wickets:"<<wic<<"\n\nGiven runs:"<<brun<<"\n\nTimes to get 5 wickets:"
 <<half<<"\n\nBowling average:"<<bavg<<"\n\nEconomy rate:"<<ecn;
 }

 class general : public  batsman,  public bowler
 {
 protected:
       int runs,outs,cens,halfcens,wics,halfs,bruns,ovrs;
 public:
     void openprof();
     void editbat();
     void editbowl();
     void searchbat(int a,int b,int c);
     void searchbowl(int a,int b,int c,int d);
     void show();

 };

 void general :: openprof()
 {
 in();
 openbat();
 openbowl();
 }

 void general :: show()
 {
 out1();
 showbat();
 showbowl();
 }

 void general :: editbat()
 {
 cout<<"\n\nRuns to add:";
 cin>>runs;
 run=run+runs;
 cout<<"\n\nOuts to add:";
 cin>>outs;
 out=out+outs;
 cout<<"\n\nCenturies to add:";
 cin>>cens;
 cen=cen+cens;
 cout<<"\n\nHalf centuries to add:";
 cin>>halfcens;
 halfcen=halfcen+halfcens;
 }

 void general :: editbowl()
 {
 cout<<"\n\nWickets to add:";
 cin>>wics;
 wic=wic+wics;
 cout<<"\n\ntimes of getting 5 wickets to add:";
 cin>>halfs;
 half=half+halfs;
 cout<<"\n\nGiving runs to add:";
 cin>>bruns;
 brun=bruns+brun;
 cout<<"\n\novers to add:";
 cin>>ovrs;
 ovr=ovr+ovrs;
 }

 void general :: searchbat(int a,int b,int c)
 {


 if(avg>=a && b>=match && c<=age)

 cout<<endl<<name;
 }

 void general :: searchbowl(int a,int b,int c,int d)
 {



 if(a<=bavg && b>=match && c<=ecn && d<=age)
 cout<<endl<<name;

 }




 int main ()
 {
 int  i,j,ch,chl,mavg,mmatch,mage,mbavg,mbmatch,mecn,mage1;

 char nam[20];

 cout<<"\n\n\nWELCOME TO BCB SOFT.... ";

  

 general ge[100];


 for (i=0;  ;i++)
 {
 cout<<"\n\n\nWhat do you want to do?"<<endl<<"\n1.Open profile"<<"\n2.edit profile"

 <<"\n3.To show"<<"\n4.search"<<"\n5.Exit";
 cin>>ch;

 switch(ch)
 {
 case 1:
    for(j=0;j<100  ;j++)
    {
    if(ge[j].age==0)
    {
    ge[j].openprof();
    break;
    }
    }

    break;

 case 2:
    cout<<"\n\nEnter name:";
    cin>>nam;

    for(j=0;j<100  ;j++)
    {
    if(strcmp(ge[j].name,nam)==0)
    {
    cout<<"\n1.batting"<<"\n2.bowling";
    cin>>chl;
    if(chl==1)
    ge[j].editbat();
    if(chl==2)
    ge[j].editbowl();
    break;
    }
    }
    break;
 case 3:
    {
    cout<<"\n\nEnter name:";
    cin>>nam;

    for(j=0;j<100  ;j++)
    {
    if(strcmp(ge[j].name,nam)==0)
    ge[j].show();
    }
    break;
     }
 case 4:
    cout<<"\n1.batting performance:"<<"\n2.bowling performance:" ;
    cin>>chl;
    if(chl==1)
    {
    cout<<"\n\nFix the minimum average:";
    cin>>mavg;
     cout<<"\n\nFix his minimum match playing:";
    cin>>mmatch;
    cout<<"\n\nFix his maximum age:";
    cin>>mage;
    }
    if(chl==2) {
    cout<<"\n\nFix the maximum bowling average:";
    cin>>mbavg;
    cout<<"\n\nFix the minimum match played:";
    cin>>mbmatch;
    cout<<"\n\nFix the maximum economy rate:";
    cin>>mecn;
    cout<<"\n\nFix the maximum age:";
    cin>>mage;
    }

    for(j=0;j<100  ;j++)



    {
    if(chl== 1)
    ge[j].searchbat(mavg,mmatch,mage);
    if(chl==2)
    ge[j].searchbowl(mbavg,mbmatch,mecn,mage1);

    }

    break;
}

if(ch==5)
break;
}

return 0;
}

