

//Department of Computer Science and Engineering Database.
#include <iostream>
#include <conio.h>
#include <fstream>
#include <process.h>
#include <string.h>
using namespace std;

class office
{
 private:
     int salary,house_rent,medical,recreation;
     int elec_bill,tel_bill;
     long int tel_no;
     char *name,name1[15],name2[15],e_mail[30];
 public:
    void getdata(void);
    void nameconcate(void);
    void calculation(void);
    void display(void);
  };

 void office :: getdata (void)
 {
  cout<<"Enter your first name please :";
  cin>>name1;
  cout<<endl;
  cout<<"Enter your last name please  :";
  cin>>name2;
  cout<<endl;
  cout<<"Now enter basic salary please:";
  cin>>salary;
  cout<<endl;
  cout<<"Enter your mobile no.        :";
  cin>>tel_no;
  cout<<endl;
  cout<<"Enter your e-mail address    :";
  cin>>e_mail;
  cout<<endl;
  }

  void office :: nameconcate (void)
  {
    int length1 = strlen(name1);
    int length2 = strlen(name2);
    name = new char[length1+length2+3];
    strcpy(name,name1);
    strcat(name,name2);
   }

 void office :: calculation (void)
 {
  char ans;

  house_rent=5000;
  elec_bill=400;
  tel_bill=800;
  medical=1000;
  recreation=2000;

  salary=salary+medical;
  salary=salary+recreation;
  salary=salary+house_rent;
  salary=salary+elec_bill;
  salary=salary+tel_bill;

  cout<<"Do you want to use quater facilities provided by university or"<<endl;
  cout<<"want to maintain it on your own?"<<endl;
  cout<<"Press y or n as your answer  :";
  cin>>ans;
  cout<<endl;

  if(ans=='y')
  salary=salary-house_rent;
  salary=salary-elec_bill;
  salary-salary-tel_bill;

  }

  void office :: display (void)
  {
   cout<<"Name          : "<<name<<endl;
   cout<<"Salary        : "<<salary<<endl;
   cout<<"Mobile        : "<<tel_no<<endl;
   cout<<"E-mail        : "<<e_mail<<endl;
   cout<<endl<<endl;

   }

  int main()
  {
   office prof[3],assist_prof[7],lecturer[15],staff[5];

   fstream file;

   char key;
   int choice,serial,loc;
   int static i,j,k,l;
int m,n,p,q;
    

   file.open("database",ios::in|ios::out|ios::ate);

   do
   {
   cout<<"Welcome to Department of Computer Science and ";
   cout<<"Engineering Database."<<endl<<endl;
   cout<<"E-mail : head@cse.kuet.ac.bd"<<endl<<endl;
   cout<<'\t'<<" -----------------------------------------------";
   cout<<"-------------------"<<endl<<'\t'<<"|";
   cout<<'\t'<<"CHOICE"<<'\t'<<'\t'<<'\t'<<"TASK                   ";
   cout<<"            |"<<endl;
   cout<<'\t'<<"|"<<'\t'<<"------"<<'\t'<<'\t'<<'\t'<<"----        ";
   cout<<"                       |"<<endl;
   cout<<'\t'<<"|"<<"                                         ";
   cout<<"                         |" <<endl;
   cout<<'\t'<<"|"<<'\t'<<"1"<<'\t'<<'\t'<<'\t'<<"Add a Professor    ";
   cout<<"                |"<<endl;
   cout<<'\t'<<"|                                              ";
   cout<<"                    |"<<endl;
   cout<<'\t'<<"|"<<'\t'<<"2"<<'\t'<<'\t'<<'\t'<<"Add an Assistant Professor";
   cout<<"         |";
   cout<<endl<<'\t'<<"|                                            ";
   cout<<"                      |"<<endl;
   cout<<'\t'<<"|"<<'\t'<<"3"<<'\t'<<'\t'<<'\t'<<"Add a Lecturer";
   cout<<"                     |"<<endl;
   cout<<'\t'<<"|                                                   ";
   cout<<"               |"<<endl;
   cout<<'\t'<<"|"<<'\t'<<"4"<<'\t'<<'\t'<<'\t'<<"Add a Staff     ";
   cout<<"                   |"<<endl;
   cout<<'\t'<<"|                                                  ";
   cout<<"                |"<<endl;
   cout<<'\t'<<"|"<<'\t'<<"5"<<'\t'<<'\t'<<'\t'<<"View all Database";
   cout<<"                  |"<<endl;
   cout<<'\t'<<"|                                                   ";
   cout<<"               |"<<endl;
   cout<<'\t'<<"|"<<'\t'<<"6"<<'\t'<<'\t'<<'\t'<<"Modify Database";
   cout<<"                    |"<<endl;
   cout<<'\t'<<"|                                                   ";
   cout<<"               |"<<endl;
   cout<<'\t'<<"|"<<'\t'<<"7"<<'\t'<<'\t'<<'\t'<<"Exit from Database";
   cout<<"                 |"<<endl;
   cout<<'\t'<<" -------------------------------------------";
   cout<<"----------------------"<<endl;
   cout<<endl<<endl;
   cout<<"Your Choice   : ";
   cin>>choice;
   cout<<endl;

   switch(choice)
   {
    case 1:


    if(i>2)
    {
    cout<<"No additional recruiting is possible in this section."<<endl<<endl;
    }
    else
    {
    cout<<"Data for Professor "<<i+1<<" : "<<endl<<endl;
    prof[i].getdata();
    prof[i].nameconcate();
    prof[i].calculation();
    file.write( (char*)&prof[i],sizeof(prof[i]) );
    file.clear();
    i++;
     }
    break;

    case 2:

    if(j>6)
    {
    cout<<"No additional recruiting is possible in this section."<<endl<<endl;
    }
    else
    {
    cout<<"Data for Assistant Professor "<<j+1<<" : "<<endl<<endl;
    assist_prof[j].getdata();
    assist_prof[j].nameconcate();
    assist_prof[j].calculation();
    file.write( (char*)&assist_prof[j],sizeof(assist_prof[j]) );
    file.clear();
    j++;
    }
    break;

    case 3:

    if(k>14)
    {
    cout<<"No additional recruiting is possible in this section."<<endl<<endl;
    }
    else
    {
    cout<<"Data for Lecturer "<<k+1<<" : "<<endl<<endl;
    lecturer[k].getdata();
    lecturer[k].nameconcate();
    lecturer[k].calculation();
    file.write( (char*)&lecturer[k],sizeof(lecturer[k]) );
    file.clear();
    k++;
    }
    break;

    case 4:

    if(l>4)
    {
    cout<<"No additional recruiting is possible in this section."<<endl<<endl;
    }
    else
    {
    cout<<"Data for Staff "<<l+1<<" : "<<endl<<endl;
    staff[l].getdata();
    staff[l].nameconcate();
    staff[l].calculation();
    file.write( (char*)&staff[l],sizeof(staff[l]) );
    file.clear();
    l++;
    }
    break;

    case 5:

    if(i>0)
    {
    cout<<"Professor Section           :- ";
    cout<<endl<<endl;
    file.seekg(0);
    { for( m=0;m<i;m++)
      file.read( (char*)&prof[m],sizeof(prof[m]) );
      prof[m].display();
      file.clear();
    }
     }

    if(j>0)
    {
    cout<<"Assistant Professor Section :- ";
    cout<<endl<<endl;
    file.seekg(0);
    { for(int n=0;n<j;n++)
      file.read( (char*)&assist_prof[n],sizeof(assist_prof[n]) );
      assist_prof[n].display();
      file.clear();
    }
     }

    if(k>0)
    {
    cout<<"Lecturer Section            :- ";
    cout<<endl<<endl;
    file.seekg(0);
    { for(int p=0;p<k;p++)
      file.read( (char*)&lecturer[p],sizeof(lecturer[p]) );
      lecturer[p].display();
      file.clear();
    }
     }

    if(l>0)
    {
    cout<<"Staff Section               :- ";
    cout<<endl<<endl;
    file.seekg(0);
    { for(int q=0;q<l;q++)
      file.read( (char*)&staff[q],sizeof(staff[q]) );
      staff[q].display();
      file.clear();
    }
     }

    break;

    case 6:

    cout<<"Modify a professor/assistant professor/lecturer/staff?"<<endl;
    cout<<endl<<"Please use 'p'/'a'/'l'/'s' as  the keyword..."<<endl<<endl;
    cout<<"Keyword :-";
    cin>>key;

    if(key=='p')
    {
    cout<<"Professor Section           :- ";
    cout<<endl<<endl;
    file.seekg(0);
    { for(int m=0;m<i;m++)
      file.read( (char*)&prof[m],sizeof(prof[m]) );
      cout<<m+1<<"."<<endl;
      prof[m].display();
      file.clear();
    }
    cout<<endl<<endl<<"Now enter the serial no. of the professor you want";
    cout<<"to modify..."<<endl<<endl;
    cin>>serial;

    loc=( (serial-1)*sizeof(prof[0]) );

       prof[serial].getdata();
       prof[serial].nameconcate();
       prof[serial].calculation();
       file.seekp(loc);
       file.write( (char *)&prof[serial],sizeof(prof[serial]) );
     }

    else if(key=='a')
    {
    cout<<"Assistant Professor Section :- ";
    cout<<endl<<endl;
    file.seekg(0);
    { for(int n=0;n<j;n++)
      file.read( (char*)&assist_prof[n],sizeof(assist_prof[n]) );
      cout<<n+1<<"."<<endl;
      assist_prof[n].display();
      file.clear();
    }
    cout<<endl<<endl<<"Now enter the serial no. of the assistant professor";
    cout<<"you want to modify..."<<endl<<endl;
    cin>>serial;

    loc=( (serial-1)*sizeof(assist_prof[0]) );

       assist_prof[serial].getdata();
       assist_prof[serial].nameconcate();
       assist_prof[serial].calculation();
       file.seekp(loc);
       file.write( (char *)&assist_prof[serial],sizeof(assist_prof[serial]) );
    }
    else if(key=='l')
    {
    cout<<"Lecturer Section            :- ";
    cout<<endl<<endl;
    file.seekg(0);
    { for(int p=0;p<k;p++)
      file.read( (char*)&lecturer[p],sizeof(lecturer[p]) );
      cout<<p+1<<"."<<endl;
      lecturer[p].display();
      file.clear();
    }
    cout<<endl<<endl<<"Now enter the serial no. of the lecturer";
    cout<<"you want to modify..."<<endl<<endl;
    cin>>serial;

    loc=( (serial-1)*sizeof(lecturer[0]) );

       lecturer[serial].getdata();
       lecturer[serial].nameconcate();
       lecturer[serial].calculation();
       file.seekp(loc);
       file.write( (char *)&lecturer[serial],sizeof(lecturer[serial]) );
    }
    else if(key=='s')
    {
    cout<<"Staff Section               :- ";
    cout<<endl<<endl;
    file.seekg(0);
    { for(int q=0;q<l;q++)
      file.read( (char*)&staff[q],sizeof(staff[q]) );
      cout<<q+1<<"."<<endl;
      staff[q].display();
      file.clear();
    }
    cout<<endl<<endl<<"Now enter the serial no. of the staff";
    cout<<"you want to modify..."<<endl<<endl;
    cin>>serial;

    loc=( (serial-1)*sizeof(staff[0]) );

       staff[serial].getdata();
       staff[serial].nameconcate();
       staff[serial].calculation();
       file.seekp(loc);
       file.write( (char *)&staff[serial],sizeof(staff[serial]) );
    }

    break;

    case 7:
    exit(1);
    }

      }
    while(choice==1||2||3||4||5||6);

    getch();

    file.close();

    return 0;

    }


