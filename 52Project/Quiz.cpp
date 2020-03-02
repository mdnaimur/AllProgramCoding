

//Quiz Test.
#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<fstream>
using namespace std;
class contest
{
private:
    int roll;
    float x;
    char name[20];
    char s[100],ans;

public:
    contest()
    { x=0; }
    void init();
    void define();
    void display();
};
void  contest :: define()
{
   ifstream in;
   char a;
      int i=0;
   in.open("ques.txt");
    while(in.eof()==0)
    {
    in.getline(s,100);
    cout<<endl<<s;
   if(i==5)
   {
   in.get(a);
   cout<<"\nans:";
    cin>>ans;
   i=-1;
    if(ans==a)
       {
       x=x+5;
       cout<<" *Your ans  correct.\n";
       }
    else
       {
       if(x>0)
        x=x-2.5;
       cout<<" # Wrong ans.\n";
       }
    }
    i++;
    }
   in.close();
}
     void contest :: init()
       {
     cout<<"\t\t\t   Examinee Name:";
     cin>>name;
     cout<<"\t\t\t   Examinee roll:";
     cin>>roll;
       }
     void contest :: display()
       {
     cout<<"\n **Result:\n";
     cout<<"\t"<<name<<" you got total "<<x<<" marks,out of 50.\n";
       }

int main()
{
     
    contest r;
    cout<<"      \t\t\t~~~*** QUIZ CONTEST ***~~~\t      Total Marks:50\n\n";
    r.init();
    cout<<"\t*5 marks per Ques(half negative marking for wrong ans)";
       L:
    cout<<"\n\n\tselect your choice:\n"
        <<"\n\t1 for start exam"
        <<"\n\t0 for quit the exam :";
       int c;
       cin>>c;
       switch(c)
       {
       case 1:
        r.define();
        r.display();
        break;
       case 0:
        exit(1);
       default:
        cout<<"invalid choice!";
        goto L;
       }
       getch();
}
/*
A file(QUES.TXT) must be made or copied to the directory (drive_name:\tc\bin\ ). with the cpp file. Some include this file like as,


QUES.TXT Data :

1.WHEN COMPUTER WAS FIRST INVENTIONED?
a.1822
b.1823
c.1834
d.1922
a
2.WHO kILLED PRESEDENT BENOGIR VUTTO?
a.nawaz shrif
b.pervase
c.non of them
d.political leder
c
3.WHO IS THE CAPTAIN OF BANGLADESH CRICKET TREAM?
a.asharaful
b.murtaja
c.rafiq
d.aftab
a
4.WHAT IS OUR NATIONAL GAME?
a.cicket
b.football
c.hadodo
d.badminton
c
5.WHO IS NOW CHIEFJUSTICS IN BANGLADESH?
a.yeaz uddin
b.moin
c.jalil
d.fakhar uddin
d
6.WHO IS THE PRIME MINISTER OF INDIA?
a.sonia gundi
b.rajib gundi
c.autol biharipal
d.pervase
c
7.WHAT IS THE DATE OF SIDDR ORCUS?
a.16th nov
b.17th nov
c.18th nov
d.20th n0v
a
8.WHEN WILL BE THE NEXT WORLD CUP CRICKET?
a.2011
b.2012
c.2009
d.2008
a
9.WHERE WILL BE THE NEXT WORLD CUP CRICKET?
a.india
b.pakistan
c.africa
d.bangladesh
d
10.WHICH COUNTRY WIN THE 2007 CRICKET WORLD CUP?
a.australia
b.bangladesh
c.srilanka
d.india
*/
///////////////////////////////////////////////////////////////////////////

