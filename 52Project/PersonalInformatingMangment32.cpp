        /*This is a Program of
                Personal Information Management */




#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<fstream>
#include<iomanip>

using namespace std;
class name_ad
{

   private:

    char address[10];


   public:
    char name[10];
    int idno;

    void get1(void)
    {
       cout<<"\nPlease Enter your Name  :";
       cin>>name;
       cout<<endl;
       cout<<"\n And your ID no         :";
       cin>>idno;
       cout<<endl;
    }

    void get(void)
    {
      cout<<"\nAddress of your residence :";
      cin>>address;
      cout<<endl;
    }

    void display1(void)
    {
      cout<<"\n****************************************\n"
         <<"  Name    :"<<name<<endl;
      cout<<"\n  ID No   :"<<idno<<endl;
      cout<<"\n  Address :"<<address<<endl;
      cout<<"\n****************************************";
    }

    void s1(void)
    {

     cout<<"\nPlease,Enter your ID.\n";
     int q;
     cin>>q;
     if(q==idno)
      {
         display1();
      }
     else
        cout<<"\nSorry,you are wrong.\n";
     }

};
//====================================================================

class numbers:public name_ad
{
  private:
       char res_tele[10];
       char b_group[10];
       char i_card[10];
       char p_no[10];
       char acc_no[10];
       char c_no[10];
       char t_no[10];
       char r_no[10];

  public:
       void get2(void);
       void display2(void);
       void s2(void);

};

void numbers::get2()
{

   cout<<"\n\n  Please,Enter your important numbers:\n";
   cout<<"\n Name                :";
   cin>>name;
   cout<<"\n ID no               :";
   cin>>idno;
   cout<<"\n Res. Telephone     : ";
   cin>>res_tele;
   cout<<"\n Blood Group        :";
   cin>>b_group;
   cout<<"\n identity card no   :";
   cin>>i_card;
   cout<<"\n Bank Account no    :";
   cin>>acc_no;
   cout<<"\n Income tax no      :";
   cin>>t_no;
   cout<<"\n Credit card no     :";
   cin>>c_no;
   cout<<"\n Car resistration no:";
   cin>>r_no;


}

void numbers::display2()
{
   cout<<"\n***********************************************";
   cout<<"\n\n  Name               :"<<name<<endl;
   cout<<"\n\n  ID No              :"<<idno<<endl;
   cout<<"\n\n  Res telephone no   :"<<res_tele<<endl;
   cout<<"\n\n  Blood group        :"<<b_group<<endl;
   cout<<"\n\n  Identity Card no   :"<<i_card<<endl;
   cout<<"\n\n  Bank account no    :"<<acc_no<<endl;
   cout<<"\n\n  Income tax no      :"<<t_no<<endl;
   cout<<"\n\n  Credit card no     :"   <<c_no<<endl;
   cout<<"\n\n  Car resistration no:"<<r_no<<endl;
   cout<<"\n************************************************\n";
}

void numbers::s2(void)
{
  cout<<"\nPLease,Enter your ID.\n";
  int q;
  cin>>q;

  if(q==idno)
  {
     display2();
  }
  else
     cout<<"\nsorry,you are wrong.\n";
}

//=====================================================================

class reminder:public name_ad
{
   private:
      char pr[10];
      char ir[10];
      char dr[10];
      char id[10];
      char mc[10];

   public:
      void get3();
      void display3();
      void s3();
};

void reminder::get3()
{

  get1();
  cout<<"\n\n Passport Renewal(date-month-year) :";
  cin>>pr;
  cout<<"\n\n Insurance Renewal                 :";
  cin>>ir;
  cout<<"\n\n Driving licence renewal           :";
  cin>>dr;
  cout<<"\n\n Income Tax Date Due               :";
  cin>>id;
  cout<<"\n\n Medical check-up                  :";
  cin>>mc;

}

void reminder::display3()
{

  cout<<"\n****************************************************";
  cout<<"\n\n Name                               :"<<name<<endl;
  cout<<"\n\n ID no                              :"<<idno<<endl;
  cout<<"\n\n Passport Renewal(date-month-year)  :"<<pr<<endl;
  cout<<"\n\n Insurance renewal                  :"<<ir<<endl;
  cout<<"\n\n Driving licence renewal            :"<<dr<<endl;
  cout<<"\n\n Income Tax Date due                :"<<id<<endl;
  cout<<"\n\n Medical check up                   :"<<mc<<endl;
  cout<<"\n****************************************************\n";

}

void reminder::s3()
{
  cout<<"\nPlease,Enter your ID.\n";
  int q;
  cin>>q;

  if(q==idno)
    {
      display3();
    }
  else
      cout<<"\nSorry,you are wrong.\n";

}

//=========================================================================

class office:public name_ad
{
  private:
       char c[20];
       char ad1[10];
       char tel[10];
       char mob[10];
       char fax[10];

  public:
       void get4(void);
       void display4(void);
       void s4(void);
};

void office::get4(void)
{

   get1();
   cout<<"\n\nPlease Enter the information about your working place :";
   cout<<"\n\nEnter the name of your company :";
   cin>>c;
   cout<<"\n\nAddress                        :";
   cin>>ad1;
   cout<<"\n\nTelephone                      :";
   cin>>tel;
   cout<<"\n\nMobile                         :";
   cin>>mob;
   cout<<"\n\nFax                            :";
   cin>>fax;

}

void office::display4()
{
   cout<<"\n*******************************************************";
   cout<<"\n\n Name         :"<<name<<endl;
   cout<<"\n\n ID No        :"<<idno<<endl;
   cout<<"\n\n Company      :"<<c<<endl;
   cout<<"\n\n Address      :"<<ad1<<endl;
   cout<<"\n\n Telephone    :"<<tel<<endl;
   cout<<"\n\n Mobile       :"<<mob<<endl;
   cout<<"\n\n Fax          :"<<fax<<endl;
   cout<<"\n*******************************************************\n";

}

void office::s4()
{
  cout<<"\nPlease,Enter your ID.\n";
  int q;
  cin>>q;

  if(q==idno)
   {
     display4();
   }
   else
     cout<<"\nsorry,you are wrong.\n";
}

//====================================================================

class routine:public name_ad
{
  private:
       char sunday[50],monday[50],tuesday[50];
       char wednesday[50],thusday[50],friday[50],suterday[50];

  public:
       void get5(void);
       void display5(void);
       void s5(void);

};

void routine::get5()
{

  get1();
  cout<<"\n  Enter your Routine of The Week :(Time)-Plan***(Time)-Plan....";
  cout<<"\nSunday    :";
  cin>>sunday;
  cout<<endl;
  cout<<"\nMonday    :";
  cin>>monday;
  cout<<endl;
  cout<<"\nTuesday   :";
  cin>>tuesday;
  cout<<endl;
  cout<<"\nWednesday :";
  cin>>wednesday;
  cout<<endl;
  cout<<"\nThusday   :";
  cin>>thusday;
  cout<<endl;
  cout<<"\nFriday    :";
  cin>>friday;
  cout<<endl;
  cout<<"\nSuterday  :";
  cin>>suterday;


}

void routine::display5()
{

  cout<<"\n**************************************************************";
  cout<<"\n  Routine of The Week :";
  cout<<"\n  Name     :"<<name<<endl;
  cout<<"\n  ID no    :"<<idno<<endl;
  cout<<"\n  Sunday   :"<<sunday<<endl;
  cout<<"\n  Monday   :"<<monday<<endl;
  cout<<"\n  Tuesday  :"<<tuesday<<endl;
  cout<<"\n  Wednesday:"<<wednesday<<endl;
  cout<<"\n  Thusday  :"<<thusday<<endl;
  cout<<"\n  Friday   :"<<friday<<endl;
  cout<<"\n  Suterday :"<<suterday<<endl;
  cout<<"\n**************************************************************\n";

}

void routine ::s5()
{

  int h;
  cout<<"\nPlease,Enter your ID:";
  cin>>h;

  if(h==idno)
      display5();
  else
     cout<<"\n Error input,try again.";

}

//======================================================================

int main()
{

   
  int a,i;
  char ch;

  name_ad n[10];
  numbers b[10];
  reminder r[10];
  office o[10];
  routine t[10];

  fstream file;
  file.open("information",ios::out|ios::in);


  cout<<"\n\n*#*#*#*  THIS IS PERSONAL INFORMATION MANAGEMENT  *#*#*#*#*"<<"\n\n";
  cout<<"\n\nHow many people's information you want to management?\n";

  cin>>a;
  int x;
  do
  {
      cout<<"\n*******************************************\n"
      <<"\n*    You can do the following ;           *\n"
      <<"\n*    Enter the appropriate number         *\n";
      cout<<"\n*    1 :For Name & address                *\n";
      cout<<"\n*    2 :For Display name & address        *\n";
      cout<<"\n*    3 :TO Search Name & Address          *\n";
      cout<<"\n*    4 :For Important Numbers             *\n";
      cout<<"\n*    5 :For Display Important numbers     *\n";
      cout<<"\n*    6 :To Search Important Numbers       *\n";
      cout<<"\n*    7 :For Reminders                     *\n";
      cout<<"\n*    8 :To Display Reminders              *\n";
      cout<<"\n*    9 :To Search Reminders               *\n";
      cout<<"\n*    10:For official recognisation        *\n";
      cout<<"\n*    11:To Display Official recognisation *\n";
      cout<<"\n*    12:To Search Official Recognisation  *\n";
      cout<<"\n*    13:To Make a Routine                 *\n";
      cout<<"\n*    14:To Display The Routine            *\n";
      cout<<"\n*    15:To Search                         *\n";
      cout<<"\n*    16:Quit                              *\n";
      cout<<"\n*    What is your option?                 *\n"
      <<"\n*******************************************\n";

   cin>>x;

   switch(x)
   {

   case 1:
       for( i=0;i<a;i++)
      {
         cout<<"\nName,ID & Address of person :"<<i+1<<"\n\n";
         n[i]. get1();
         n[i].get();
         file.write((char *)&n[i],sizeof (n[i]));
       }
         file.clear();
         file.seekg(0);

   break;

   case 2:
      for(i=0;i<a;i++)
     {
       cout<<"\nName,ID & Address of person"<<i+1<<"\n\n";
       file.read((char *)&n[i],sizeof (n[i]));
       n[i].display1();
     }
       file.seekp(0);
  break;

  case 3:
       for(i=0;i<a;i++)
       {
     cout<<"\nName,ID & Address"<<i+1<<"\n\n";
     n[i].s1();
       }
    break;


  case 4:
     for(i=0;i<a;i++)
    {
      cout<<"\nEnter the Important numbers :"<<i+1<<"\n\n";
      b[i].get2();
      file.write((char *)&b[i],sizeof (b[i]));
    }
      file.clear();
      file.seekg(0);
   break;

   case 5:
       for(i=0;i<a;i++)
     {
        cout<<"\nThe Important Numbers for"<<i+1<<"\n\n";
        file.read((char *)&b[i],sizeof (b[i]));
        b[i].display2();

      }
        file.seekp(0);
   break;

   case 6:
    for(i=0;i<a;i++)
    {
      cout<<"\n The Important Numbers for"<<i+1<<"\n\n";
      b[i].s2();
      }
    break;


  case 7:
      for(i=0;i<a;i++)
     {
       cout<<"\nEnter What you want to remind for"<<i+1<<"?"<<"\n\n";
       r[i].get3();
       file.write((char *)&r[i],sizeof (r[i]));
     }
       file.clear();
       file.seekg(0);
  break;
  case 8:
       for(i=0;i<a;i++)
      {
        cout<<"\nThe Reminders for"<<i+1<<"\n\n";
        file.read((char *)&r[i],sizeof (r[i]));
        r[i].display3();
      }
        file.seekp(0);
  break;

  case 9:
     for(i=0;i<a;i++)
     {
       cout<<"\nThe Reminder for"<<i+1<<"\n\n";
       r[i].s3();
      }
      break;
  case 10:
       for(i=0;i<a;i++)
      {
        cout<<"\nEnter the Information Of the working place for"<<i+1<<"\n\n";
        o[i].get4();
        file.write((char *)&o[i],sizeof (o[i]));
      }
        file.clear();
        file.seekg(0);
  break;

  case 11:
       for(i=0;i<a;i++)
      {
       cout<<"\nThe Information of Working Place of" <<i+1<<"\n\n";
       file.read((char *)&o[i],sizeof (o[i]));
       o[i].display4();
      }
       file.seekp(0);
  break;

  case 12:
     for(i=0;i<a;i++)
     {
       cout<<"\nThe Important Information of Working Place of"<<i+1<<"\n\n";
       o[i].s4();
      }
      break;

 case 13:
      for(i=0;i<a;i++)
      {
    cout<<" Make Routine\n";
    t[i].get5();
    file.write((char *)&t[i],sizeof (t[i]));
       }
    file.clear();
    file.seekg(0);

  break;

  case 14:
       for(i=0;i<a;i++)
       {
     cout<<" Routine :\n";
     file.read((char *)&t[i],sizeof (t[i]));
     t[i].display5();
       }
     file.seekp(0);

  break;

  case 15:
       for(i=0;i<a;i++)
       {
      cout<<" \nSearch The Routine :\n";
      t[i].s5();
       }

  break;

  case 16:

  break;



 default:
      cout<<"\n\nError Input ,Try again.\n ";

      }


 }while(x!=16);

 getch();
 return 0;

}

