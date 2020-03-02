
//Banking Management System.
    #include<iostream>
    #include<stdio.h>
    #include<conio.h>

using namespace std;
    class bank
    {
     private:

     int ac_no,account;
     float balance;
     char name[20];

     public:
     void open(void);
     void deposite(int);
     void withdraw(int);
     void search(int);
     void display(void);

    };

    void bank::open(void)

     {
         cout<<"ENTER YOUR NAME :  ";
         cin>>name;
         cout<<"ENTER YOUR ACCOUNT NUMBER :  ";
         cin>>account;
         cout<<"ENTER THE AMOUNT OF MONEY : BDT  ";
         cin>>balance;
     }

      void bank::deposite(int j)

    {
          int bnc;

          if(account==j)

       {
        cout<<"ENTER THE AMOUNT OF MONEY : BDT ";
        cin>>bnc;
        balance=balance+bnc;
        cout<<"\n\n\tJOB HAS DONE WELL !!! \n";
       }


    }

    void bank::withdraw(int k)
    {
           int blnc,p;

      if(account==k)

      {
        cout<<"YOUR CURRENT ACCOUNT BALANCE IS BDT "<<balance<<"\n"<<"THE AMOUNT OF MONEY YOU WANT TO WITHDRAW IS BDT ";
        cin>>blnc;
           p=balance-blnc;
           { if(p<0)
              cout<<"SORRY !!! THERE IS NOT ENOUGH MONEY IN YOUR ACCOUNT\n";
            else if(p>=0)
              {
                cout<<"\n\tYOUR REQUEST TO WITHDRAW MONEY HAS DONE\n\n";
                balance=p;
              }

           }
       }

    }


    void bank::display(void)
    {    cout<<"\n\nNAME : "<<name<<"\n\nACCOUNT NO. "<<account<<"\n\nBALANCE : BDT "<<balance<<"\n\n";
    }



    void bank::search(int m)

    {

     if(account==m)
       {
         cout<<"\n\n*******Account Holder's INFO*******";
         cout<<"\n\nNAME : "<<name<<"\n\nACCOUNT NO. "<<account<<"\n\nBALANCE : BDT "<<balance<<"\n\n";
         cout<<"\n***************************************\n\n";
       }

    }

       int main()
       {
      int i,j,k,m,l,y=0;
         bank b[20];
        int index;
              //textcolor(0);
             //textbackground(4);
            

          do
        {
    cout<<"\a\nPRESS 1 TO OPEN ACCOUNT\n\n"<<"PRESS 2 TO DEPOSITE AMOUNT\n\n"<<"PRESS 3 TO WITHDRAW MONEY \n\n"<<"PRESS 4 TO DISPLAY \n\n"<<"PRESS 5 TO SEARCH \n\n"<<"PRESS 6 TO EXIT \n\n\t\n";
    cout<<"Your option......";

    cin>>index;
               switch(index)
            {
               case 1:
                 cout<<"\nHOW MANY ACCOUNT YOU WANT TO OPEN?\n"; //opening account
                 cin>>y;
                  for(i=0;i<y;i++)
                b[i].open();
               break;
              case 2:
                 cout<<"\nENTER YOUR ACCOUNT NO. ";             //deposite amount
                 cin>>j;
                 for(i=0;i<y;i++)
                  {
                    b[i].deposite(j);
                  }
              break;
              case 3:
                cout<<"\nENTER YOUR ACCOUNT NO. ";              //withdraw money
                cin>>k;
                for(i=0;i<y;i++)
                   {
                   b[i].withdraw(k);
                   }
                break;

              case 4:
                for(i=0;i<y;i++)
                  {                                             //display option
                  b[i].display();
                  }
                break;
              case 5:
                cout<<"\nENTER YOUR ACCOUNT NO. ";              //search option
                cin>>m;
                 for(i=0;i<y;i++)
                {
                b[i].search(m);
                }
                 break;
             case 6:
             break;

                default:cout<<"\nYOU HAVE PRESSED THE WRONG KEY. PLEASE TRY AGAIN. \n\n\n";
                break;
            }
           }     while(index!=6);
    }


