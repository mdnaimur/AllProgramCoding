

//Books Store.
#include<fstream>
#include<string.h>
#include<conio.h>
#include<iomanip>
#include<dos.h>
#include<iostream>
#include<ctime>
#include<unistd.h>
using namespace std;


  class book_store
  {
     public:

         char code[10],b_name[20],w_name[20];
         float price;

         void get_data()
         {
          cout<<"\nBook name   :";
          cin>>b_name;

          cout<<"\nBook code   : ";
          cin>>code;

          cout<<"\nWriter name :";
          cin>>w_name;

          cout<<"\nPrice       :";
          cin>>price;
          cout<<endl;
         };

  };


  class book_file:public book_store
  {
     public:
        void fil()
        {
         fstream file("All_Books.txt",ios::out|ios::app);

         file.width(20);
         file<<setiosflags(ios::left);
         file<<b_name;

         file.width(20);
         file<<setiosflags(ios::left);
         file<<w_name;

         file.width(10);
         file<<setiosflags(ios::right);
         file<<code;

         file.width(10);
         file<<setiosflags(ios::right);
         file<<price<<endl;

         file.close();
        }
        void file();

  };
        void book_file::file()
         {
           char fil[20];

           get_data();
           strcpy(fil,code);
           strcat(fil,".txt");

           ofstream file(fil);
           file<<"Book Name   :"<<b_name<<endl;
           file<<"Writer Name :"<<w_name<<endl;
           file<<"Book Code   :"<<code<<endl;
           file<<"Price       :"<<price<<endl;
           file.close();

           }


  class T1:public book_file
  {
       public:

          void book_data()
           {
           fstream file1("Literature.txt",ios::out|ios::app);
           file1<<endl;
           file1<<"Book Name   :"<<b_name<<endl;
           file1<<"Writer Name :"<<w_name<<endl;
           file1<<"Book Code   :"<<code<<endl;
           file1<<"Price       :"<<price<<endl;
           file1.close();
           }
  };


  class T2:public book_file
  {
       public:

          void book_data()
           {
           fstream file1("Philosophy.txt",ios::out|ios::app);
           file1<<endl;
           file1<<"Book Name   :"<<b_name<<endl;
           file1<<"Writer Name :"<<w_name<<endl;
           file1<<"Book Code   :"<<code<<endl;
           file1<<"Price       :"<<price<<endl;
           file1.close();
           }
  };

  class T3:public book_file
  {
       public:

          void book_data()
           {
           fstream file1("Science.txt",ios::out|ios::app);
           file1<<endl;
           file1<<"Book Name   :"<<b_name<<endl;
           file1<<"Writer Name :"<<w_name<<endl;
           file1<<"Book Code   :"<<code<<endl;
           file1<<"Price       :"<<price<<endl;
           file1.close();
           }
  };

  class T4:public book_file
  {
       public:

          void book_data()
           {
           fstream file1("Comics.txt",ios::out|ios::app);
           file1<<endl;
           file1<<"Book Name   :"<<b_name<<endl;
           file1<<"Writer Name :"<<w_name<<endl;
           file1<<"Book Code   :"<<code<<endl;
           file1<<"Price       :"<<price<<endl;
           file1.close();
           }
  };                                               //T4 class ends


  class add_books
  {
   public:
   add_books();
  };

   add_books::add_books()

   {

    T1 t1;
    T2 t2;
    T3 t3;
    T4 t4;
    int choice;

     while(1)
     {
       
      cout<<"....................Add Books................";
      cout<<"\n1.Literature Books \n2.Philosophy books \n3.Science Books \n4.Comics books \n5.Exit \n";
      cout<<"\nChoice:";
      cin>>choice;

       if(choice==1)
       {
    t1.file();
    t1.book_data();
    t1.fil();

       }

       if(choice==2)
       {
    t2.file();
    t2.book_data();
    t2.fil();

       }

       if(choice==3)
       {
    t3.file();
    t3.book_data();
    t3.fil();

       }

       if(choice==4)
       {
    t4.file();
    t4.book_data();
    t4.fil();

       }

       if(choice==5)
       {
    break;
       }

     }                               //while ends

   }                                  //add_books fn ends




  class display
  {
   public:
   display();
  };


   display::display()
   {
    int choice;
    char code[10],ch;
     while(1)
     {
      cout<<"\n\n...................DISPLAY.....................\n\n";
      cout<<"1.All Books"<<endl;
      cout<<"2.Literature"<<endl;
      cout<<"3.Philosophy"<<endl;
      cout<<"4.Science"<<endl;
      cout<<"5.Comics"<<endl;
      cout<<"6.Exit"<<endl;

  //...................................................................
     cout<<"\nEnter Ur Choice:" ;
     cin>>choice;

      if(choice==1)
      {
        

         cout<<endl;
         cout.width(20);
         cout<<setiosflags(ios::left);
         cout<<"Book Name";

         cout.width(20);
         cout<<setiosflags(ios::left);
         cout<<"Writer Name";

         cout.width(10);
         cout<<setiosflags(ios::right);
         cout<<"Code";

         cout.width(10);
         cout<<setiosflags(ios::right);
         cout<<"Price"<<endl<<endl;

       fstream file("All_Books.txt",ios::in);
       file.seekg(0);
       while(file)
       {
    file.get(ch);
    cout<<ch;
       }
       file.close();
       getch();
      }

      if(choice==2)
      {
        
       fstream file("Literature.txt",ios::in);
       file.seekg(0);
       cout<<"\n";
       while(file)
    {
     file.get(ch);
     sleep(90);
     cout<<ch;
    }
    file.close();
    getch();
      }

      if(choice==3)
      {
        
       fstream file("Philosophy.txt",ios::in);
       file.seekg(0);
       cout<<"\n";
       while(file)
    {
     file.get(ch);
     sleep(90);
     cout<<ch;
    }
    file.close();
    getch();
      }

      if(choice==4)
      {
        
       fstream file("Science.txt",ios::in);
       file.seekg(0);
       cout<<"\n";
       while(file)
    {
     file.get(ch);
     sleep(90);
     cout<<ch;
    }
    file.close();
    getch();
      }

      if(choice==5)
      {
        
       fstream file("Comics.txt",ios::in);
       file.seekg(0);
       cout<<"\n";
       while(file)
    {
     file.get(ch);
     sleep(90);
     cout<<ch;
    }
    file.close();
    getch();
      }

      if(choice==6)
      break;

     }                                   // while (choice) ends
   }                                    // display class ends


  class search
  {
   public:
   search();
  };

   search::search()
   {
    int choice;
    char fil[20];
    char ch,code[10];
    while(1)
    {
     
    cout<<"\n\n....................SEARCH...................\n\n";
    cout<<"1.Search";
    cout<<"\n2.Exit\n";
    cout<<"\nChioce:";
    cin>>choice;
      if(choice==1)
      {
      cout<<"Enter Code:";
      cin>>code;
      cout<<endl;
      strcpy(fil,code);
      strcat(fil,".txt");
      fstream file(fil,ios::in);
      while(file)
      {
       file.get(ch);
       cout<<ch;
      }
      file.close();
      getch();
      }
      if(choice==2)
      break;
    }


   }

  class start
  {
   public:
    start();
  };

   start::start()
   {
    int choice;
    //textcolor(114);
    //textbackground(0);
    //highvideo();
    while(1)
    {
     
    cout<<"\n\n.........Enter Ur Choice........\n\n";
    cout<<"1.Add Books\n";
    cout<<"2.Display\n";
    cout<<"3.Search\n";
    cout<<"4.Exit\n";
    cout<<"Choice:";
    cin>>choice;

    if(choice==1)
    { add_books a;}

    if(choice==2)
    { display d;}

    if(choice==3)
     {search s; }

    if(choice==4)
     break;

    }

              //while ends

   }                           // start fn ends




    int main()
    {
      start end;
      return 0;
    }
///////////////////////////////////////////////////////////////////////////
