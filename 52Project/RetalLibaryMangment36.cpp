
//Rental library management.
#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<iomanip>
#include<fstream>
#include<stdlib.h>
#include<string.h>
#include<dos.h>

#include<windows.h>
using namespace std;

  class book
   {
    char name[30];
    char writer[30];
    char code[35];
    char cost[20];

     public:

    void getdata(void);
    void putdata(void);
    };

    void book::getdata()
      {
      cout<<"\n\nEnter book name   :";gets(name);
      cout<<"    enter writer name :";gets(writer);
      cout<<"    Enter code        :";cin>>code;
      cout<<"    Enter cost        :";cin>>cost;
      cout<<"\n";

      ofstream x(code);
      x<<"\n\nBook name       :"<<name;
      x<<"\n  writer name is  :"<<writer;
      x<<"\n  accession no is : "<<code;
      x<<"\n  Price is        :"<<cost;
      x.close();
        }

   void book::putdata()
    {
    cout<<setw(10)<<name
    <<setw(10)<<writer
    <<setw(15)<<code
    <<setw(15)<<cost
    <<endl;
    }



          int main()
            {
               

              //textcolor(114);
              //textbackground(4);
              cout<<"\n\t\t\t WELCOME TO MY PROJECT\n\n ";
             book b[50];
             int a,n,no,m,x;
             char ch;
             fstream file ;

       file.open("faiz037",ios::ate|ios::in|ios::out);
            while(x!=0)
             { cout<<"\n  Yoy can do following :";
             //delay(500);

             cout<<"\n  1...about  library ";

           //delay(300);
             cout<<"\n  2... donating ";
             //delay(300);
             cout<<"\n  3... see the list  ";
             //delay(300);
             cout<<"\n  4...modifing.  ";
             //delay(300);
             cout<<"\n  5==final list of book";  //delay(300);
             cout<<"\n  6...for search";  //delay(300);
             cout<<"\n  0 ...for exit\n "; //delay(300);
             cout<<"\n  what is ur option :";
             cin>>x;

             switch(x)
              {


              case 1:
               

              cout<<"________________________******** _________________________________________";
              cout<<" \n\n\t\t\tRentel library\n";
              //delay(1000);
              cout<<"\nKhulna university of engineering and Tecnology\n ";
              //delay(1000);
              cout <<  "\n\t\t 1st floor , Dept. of CSE ,khulna.\n\n ";
              cout<<"_______________________**********_______________________________________________";
              //delay(2000);
              cout<<"\n\n";
                      break;

              case 2:
               
              cout<<"\nEnter the number of book : ";cin>>a;
              for (int i=0;i<a;i++)
              { cout<<"\nGive the information of book  : ";cout<<i+1;
              b[i].getdata();
              cin.get(ch);
              file.write((char*)&b[i] ,sizeof(b[i]));

              }
              break;

            case 3:
             
            file.seekg(0);

           cout<<"\n\nEnter the  number of book do you want to see\n ";cin>>n;
            
             cout<<"==================================================================" ;
             cout<<"\n\nBook_name\t Writer name \tAccession_no\tprice  ";
             cout<<"\n----------------------------------------------------------------\n\n";

           for (int i=0;i<n;i++)
             {
             file.read((char *)&b[i],sizeof (b[i]));
             b[i].putdata();
             }
         break;

          case 4:
          cout<<"Enter the serial no to be ubdatated :";
          cin>>no;
          int loc =(no-1)* sizeof (b[0]);

         if (file.eof())
         file.clear();
         file.seekp(loc);

        cout<<"Enter new value ";
        b[no].getdata();
        cin.get(ch);
        file.write((char*)&b[no],sizeof( b[no]));
        file.seekg(0);
      break;
      //case 5:
       


      cout<<"Enter the total no of book "; cin>>m;
      cout<<"\n";
       cout<<"\n Total books \n\n";
       cout<<"===============================================================" ;
        cout<<"\n\nBook_name   \t Writer name   \tAccession_no  \tprice  ";
        cout<<"\n-------------------------------------------------------------\n\n";


      for (int i=0;i<m;i++)
    {

           file.read((char*)&b[i],sizeof b[i]) ;

          b[i].putdata();

       }


       break;

       //case 6:
       char c[10],d;
        cout<<"Input accession no ";
        cin>>c;
        ifstream f(c);
        while(f)
        {f.get(d);
        cout<<d;

        }
        getch();
        f.close();
        break;

        //case 0:
         
        //delay(1000); 
		cout<<"\n\n\n\n\n";
        cout<<"\t\t\t********* THANK YOU *******************   ";
        Sleep(2000);
        cout<<"\n         \n\n  Please press 'Enter'";

        break;


        }//while
        } //switch
           file.close();
           getch();
           return 0;
      }



